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
unsigned long sendStartTime = 0;
unsigned long sendEndTime = 0;
unsigned long elapsedSendTime = 0;

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
  {0xE8, 0x31, 0xCD, 0x70, 0xFF, 0xAC} //04
};

const char* macAddress[] = {
  "E8:31:CD:70:FF:8C",
  "E0:E2:E6:3D:AF:F8",
  "E8:31:CD:70:F2:C4",
  "E8:31:CD:70:F3:A8",
  "E8:31:CD:70:FF:AC"
};

//add peer
esp_now_peer_info_t peerInfo;
bool firstSuccessPrinted= false;
//send data
void OnDataSent(const uint8_t *mac_addr, esp_now_send_status_t status) {
  Serial.print("Last Packet Send Status:  ");
  if (status == ESP_NOW_SEND_SUCCESS) {
        Serial.println("Delivery Success");
        if (!firstSuccessPrinted) {
            sendEndTime = millis();
            elapsedSendTime = sendEndTime - sendStartTime;
            Serial.print("Elapsed time from sending to delivery: ");
            Serial.println(elapsedSendTime);
            firstSuccessPrinted = true;  // Mark as printed
        }
    } else {
        Serial.println("Delivery Fail");
         firstSuccessPrinted = false; // Reset flag if failure occurs
    }
  //Serial.println(status == ESP_NOW_SEND_SUCCESS ? "Delivery Success" : "Delivery Fail");
  sending = (status == ESP_NOW_SEND_SUCCESS) ? 0 : 1;

}

//receive data
void OnDataRecv(const esp_now_recv_info_t *info, const uint8_t *incomingData, int len) {
    const uint8_t *mac = info->src_addr; // Extract MAC address

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


// Global variables for storing first data
StaticJsonDocument<JSON_CAPACITY> savedJsonData;  // Store the first collected data
bool firstDataCollected = false;  // Flag to mark if first data has been collected

void loop() {
    // Only collect new data on first run or after successful send
    if (!firstDataCollected || (sending == 0 && !jsonReceived)) {
        if (recordingStartTime == 0) {
            recordingStartTime = millis();
            i2s_zero_dma_buffer(I2S_PORT);
            delay(100);
            
            size_t bytesIn = 0;
            for(int i = 0; i < 3; i++) {
                esp_err_t result = i2s_read(I2S_PORT, &sBuffer, BUFFER_LEN * 2, &bytesIn, 0);
            }
        }
        
        // Clear previous JSON and create a JSON array
        jsonData.clear();
        JsonArray dbArray = jsonData.createNestedArray("db");
        
        // Reset counter and time
        recordingStartTime = millis();
        int count = 0;
        
        // Collect data
        while (millis() - recordingStartTime < 1000 && count < 10) {
            float spl = getSoundPressureLevel();
            float dB = applyAWeightingAndConvertToDB(spl);

            if (!isnan(dB) && dB > 30.0f && dB < 120.0f) {  
                dbArray.add(dB);
                count++;
            }
            delay(20);
        }

        if (dbArray.size() == 0) {
            dbArray.add(35.0f);
        }

        jsonData["ts"] = millis();
        jsonData["mac"] = WiFi.macAddress();
        
        // Save first data
        if (!firstDataCollected) {
            savedJsonData = jsonData;
            firstDataCollected = true;
        }
    } else {
        // Use saved data
        jsonData = savedJsonData;
    }
    
    // Serialize JSON
    serializeJson(jsonData, jsonString);
    Serial.println(jsonString);
    
    // Try to send to ESP32 number 5
    Serial.println("Trying to send to ESP32 number 5" );
    esp_err_t result = esp_now_send(allAddress[4], (uint8_t *)jsonString.c_str(), jsonString.length() + 1);
    delay(3000);
    
    // Reset flag after successful send
    if (sending == 0) {
        firstDataCollected = false;  // Allow collecting new data
    }
    
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
                
                result = esp_now_send(allAddress[i], (uint8_t *)jsonString.c_str(), jsonString.length() + 1);
                delay(3000);
                
                if (sending == 0) {
                    prevIn = 0.0f;
                    prevOut = 0.0f;
                    recordingStartTime = 0;
                    break;
                }
            }
        }
        delay(3000);
    }
    else {
        prevIn = 0.0f;
        prevOut = 0.0f;
        recordingStartTime = 0;
        
        if (jsonReceived) {
            Serial.println("Sending Backup JSON string: ");
            result = esp_now_send(allAddress[4], reinterpret_cast<uint8_t*>(receivedJson), strlen(receivedJson) + 1);
            delay(3000);
            jsonReceived = false;
        } 
    }
    
    delay(3000);
    Serial.println();
}

float getSoundPressureLevel() {
    int16_t samples[N_SAMPLES];
    size_t bytes_read;
    esp_err_t read_result = i2s_read(I2S_PORT, &samples, N_SAMPLES * sizeof(int16_t), &bytes_read, portMAX_DELAY);
    
    if (read_result != ESP_OK || bytes_read == 0) {
        Serial.println("I2S Read Error or No Data");
        return NAN;
    }

    // Calculate RMS
    float sum = 0.0f;
    for (int i = 0; i < N_SAMPLES; ++i) {
        // Use raw data without threshold filtering
        sum += (float)samples[i] * samples[i];
    }
    
    float rms = sqrt(sum / N_SAMPLES);
    
    // Convert RMS to voltage value (reference calibration)
    float voltage = rms * (3.3 / 32768.0);  // 16-bit ADC
    
    // Use standard sound pressure level calculation formula
    // Reference pressure: 20 µPa (minimum audible pressure)
    // Microphone sensitivity: -26 dBV (typical value, may need adjustment based on actual microphone)
    const float MIC_SENSITIVITY = pow(10.0f, -26.0f / 20.0f);  // Convert dBV to voltage ratio
    const float REF_PRESSURE = 20e-6;  // 20 µPa reference pressure
    
    // Calculate actual pressure
    float pressure = voltage / MIC_SENSITIVITY;
    
    // Calculate decibel value
    float spl = 20.0f * log10(pressure / REF_PRESSURE);
    
    // Adjust valid range
    if (spl < 35.0f) spl = 35.0f;     // Normal quiet environment about 35-40 dB
    if (spl > 120.0f) spl = 120.0f;   // Avoid exceeding reasonable range
    
    return spl;
}

// Remove these variables as we won't use them
// const float a1 = -2.0185f;
// const float a2 = 0.9820f;
// const float a3 = -0.0000011f;
// const float b0 = 1.0f;
// const float b1 = -2.0f;
// const float b2 = 1.0f;
// float prevIn = 0.0f;
// float prevPrevIn = 0.0f;
// float prevOut = 0.0f;
// float prevPrevOut = 0.0f;

float applyAWeightingAndConvertToDB(float spl) {
    if (isnan(spl) || spl <= 0) {
        return 30.0f;  // Return minimum dB for invalid input
    }
    
    // Simple A-weighting approximation
    // Typically reduces low frequencies and very high frequencies
    float aWeighted = spl;
    
    // Reduce very low and very high SPL values
    if (spl < 50.0f) {
        aWeighted = spl * 0.8f;  // Reduce low SPL more
    } else if (spl > 85.0f) {
        aWeighted = 85.0f + (spl - 85.0f) * 0.7f;  // Compress high SPL
    }
    
    // Ensure output is within reasonable bounds
    if (aWeighted < 30.0f) aWeighted = 30.0f;
    if (aWeighted > 120.0f) aWeighted = 120.0f;
    
    return aWeighted;
}

