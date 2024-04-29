#include <esp_now.h>
#include <WiFi.h>
#include <ArduinoJson.h>
#include <driver/i2s.h>

// Connections to ICS-43434 microphone
#define N_SAMPLES 64
#define I2S_WS 19
#define I2S_SD 18
#define I2S_SCK 5
#define I2S_PORT I2S_NUM_0
#define BUFFER_LEN 1024 
#define MAX_JSON_SIZE 1024

//recive json data
StaticJsonDocument<MAX_JSON_SIZE> doc;
char receivedJson[MAX_JSON_SIZE + 1];
bool jsonReceived = false;

// A-weighting filter coefficients
const float a1 = -2.0185f;
const float a2 = 0.9820f;
const float a3 = -0.0000011f;
const float b0 = 1.0f;
const float b1 = -2.0f;
const float b2 = 1.0f;

// Initialize variables for the IIR filter
float prevIn = 0.0f;  // Input at time (n-1)
float prevPrevIn = 0.0f;  // Input at time (n-2)
float prevOut = 0.0f;  // Output at time (n-1)
float prevPrevOut = 0.0f;  // Output at time (n-2)

//check is the now sending successfull or not
int sending = 0;

//to check the recording start
unsigned long recordingStartTime = 0;

// JSON document size
const size_t JSON_CAPACITY = JSON_OBJECT_SIZE(3) + 60;

// Define a global variable to store JSON data
StaticJsonDocument<JSON_CAPACITY> jsonData;
String jsonString = "";

int16_t sBuffer[BUFFER_LEN];

uint8_t allAddress[][6] = {
  {0xE8, 0x31, 0xCD, 0x70, 0xFF, 0x8C},
  {0xE0, 0xE2, 0xE6, 0x3D, 0xAF, 0xF8},
  {0xE8, 0x31, 0xCD, 0x70, 0xF2, 0xC4},
  {0xE8, 0x31, 0xCD, 0x70, 0xF3, 0xA8},
  {0xE0, 0xE2, 0xE6, 0x3D, 0xB2, 0x00} //04
};

const char* macAddress[] = {
  "E8:31:CD:70:FF:8C",
  "E0:E2:E6:3D:AF:F8",
  "E8:31:CD:70:F2:C4",
  "E8:31:CD:70:F3:A8",
  "E0:E2:E6:3D:B2:04"
};

//add peer
esp_now_peer_info_t peerInfo;

//send data
void OnDataSent(const uint8_t *mac_addr, esp_now_send_status_t status) {
  Serial.print("Last Packet Send Status:  ");
  Serial.println(status == ESP_NOW_SEND_SUCCESS ? "Delivery Success" : "Delivery Fail");
  sending = status;
}

//receive data
void OnDataRecv(const uint8_t *mac, const uint8_t *incomingData, int len) {

  // Copy the received JSON data into the global variable
  strncpy(receivedJson, reinterpret_cast<const char*>(incomingData), min(len, MAX_JSON_SIZE));
  receivedJson[min(len, MAX_JSON_SIZE)] = '\0'; // Ensure null termination
  // Set the flag to indicate that JSON data has been received
  jsonReceived = true;
 
}

void setupI2S() {
  // Configure I2S
  const i2s_config_t i2s_config = {
    .mode = (i2s_mode_t)(I2S_MODE_MASTER | I2S_MODE_RX),
    .sample_rate = 44100,
    .bits_per_sample = (i2s_bits_per_sample_t)16,
    .channel_format = I2S_CHANNEL_FMT_ONLY_LEFT,
    .communication_format = I2S_COMM_FORMAT_STAND_I2S,
    .intr_alloc_flags = 0,
    .dma_buf_count = 8,
    .dma_buf_len = BUFFER_LEN,
    .use_apll = false
  };

  // Install and start I2S driver
  i2s_driver_install(I2S_PORT, &i2s_config, 0, NULL);
}

void setI2SPin() {
  // Set I2S pin configurations
  const i2s_pin_config_t pin_config = {
    .bck_io_num = I2S_SCK,
    .ws_io_num = I2S_WS,
    .data_out_num = -1, // No data output
    .data_in_num = I2S_SD
  };
  i2s_set_pin(I2S_PORT, &pin_config);
}

void setup() {
  Serial.begin(115200);
  WiFi.mode(WIFI_STA);

  if (esp_now_init() != ESP_OK) {
    Serial.println("Error initializing ESP-NOW");
    return;
  }

  esp_now_register_send_cb(OnDataSent);
  esp_now_register_recv_cb(OnDataRecv);

  for (int i = 0; i < sizeof(allAddress) / sizeof(allAddress[0]); i++) {
    if (!addPeerAtIndex(i)) {
      Serial.println("Failed to add peer at index " + String(i) + ", exiting");
      return;
    }
  }
    setupI2S();
    setI2SPin();
    i2s_start(I2S_PORT);
    delay(500);
}

bool addPeerAtIndex(int index) {
  memcpy(peerInfo.peer_addr, allAddress[index], 6);
  peerInfo.channel = 0;
  peerInfo.encrypt = false;
  if (esp_now_add_peer(&peerInfo) != ESP_OK) {
    Serial.println("Failed to add peer at index " + String(index));
    return false;
  } else {
    Serial.println("Added peer at index " + String(index));
    return true;
  }
}


void loop() {
    if (recordingStartTime == 0) {
    // Start recording
    recordingStartTime = millis();
    }
    
    size_t bytesIn = 0;
    esp_err_t result_sound = i2s_read(I2S_PORT, &sBuffer, BUFFER_LEN * 2, &bytesIn, portMAX_DELAY);
    // Check if one second has elapsed
    while (millis() - recordingStartTime < 1000) {
        float spl = getSoundPressureLevel();
        float dB = applyAWeightingAndConvertToDB(spl);
        Serial.println(spl);
        delay(10);
        // Clear the previous JSON data
        jsonData.clear();
        // Add sound pressure level (dB) to JSON
        jsonData["db"] = dB;
        // Add timestamp (ts) to JSON
        jsonData["ts"] = millis();  //millis()
        // Add Mac address to JSON
        jsonData["mac"] = WiFi.macAddress();
        
        serializeJson(jsonData, jsonString);  
    }

    Serial.println(jsonString);
    Serial.println("Trying to send to ESP32 number 5" );
    esp_err_t result = esp_now_send(allAddress[4], (uint8_t *)jsonString.c_str(), jsonString.length() + 1);
    // Delay between loop iterations
    delay(3000);
    
  if (sending != 0) {
    for (int i = 0; i < 4; i++) {
      
      if (strcmp(WiFi.macAddress().c_str(), macAddress[i]) == 0) {
        Serial.println("Skip the own address  ");
        Serial.println(macAddress[i]);
        continue;
      } 
      else {
        int j = i + 1;
        
        Serial.println("Trying to send to ESP32 number " + String(j));
        Serial.print("MAC address: ");
        Serial.println(macAddress[i]);
        
        esp_err_t result = esp_now_send(allAddress[i], (uint8_t *)jsonString.c_str(), jsonString.length() + 1);
        delay(3000);
        
        if (sending == 0) {
          jsonData["db"] = nullptr;
          prevIn = 0.0f;
          prevOut = 0.0f;
          recordingStartTime = 0;
          break;
        }
      }
    }
    delay(3000);
  }
  else{
    // Reset the dB value after sending data
    jsonData["db"] = nullptr;
    prevIn = 0.0f;
    prevOut = 0.0f;
    recordingStartTime = 0;
    
    if (jsonReceived) {
      Serial.println("Sending Backup JSON string: ");
      // Send the JSON data stored in receivedJson
      esp_err_t result = esp_now_send(allAddress[4], reinterpret_cast<uint8_t*>(receivedJson), strlen(receivedJson) + 1);
      delay(3000);
      jsonReceived = false;
    } 
  }
  // Delay between loop iterations
  delay(3000);
  Serial.println();
}

float getSoundPressureLevel() {
    // Read samples from I2S
    int16_t samples[N_SAMPLES];
    size_t bytes_read;
    esp_err_t read_result = i2s_read(I2S_PORT, &samples, N_SAMPLES * sizeof(int16_t), &bytes_read, portMAX_DELAY);

    // Calculate RMS value of samples
    float sum = 0.0f;
    
    for (int i = 0; i < N_SAMPLES; ++i) {
        sum += samples[i] * samples[i];
    }
    
    float rms = sqrt(sum / N_SAMPLES);
    // Convert RMS to voltage (assuming Vref = 3.3V)
    float voltage = rms * (3.3 / 32768.0);
    // Calculate sound pressure level (SPL) in dB
    float spl = 94.0 + 20.0 * log10(voltage / 0.0069);

    return spl;
}

float applyAWeightingAndConvertToDB(float spl) {
  // Apply A-weighting filter
  float output = (b0 * spl) + (b1 * prevIn) + (b2 * prevPrevIn) - (a1 * prevOut) - (a2 * prevPrevOut);
  // Update previous input and output
  prevPrevIn = prevIn;
  prevIn = spl;
  prevPrevOut = prevOut;
  prevOut = output;
  // Convert filtered output to dB
  return output;
}
