#include <esp_now.h>
#include <WiFi.h>
#include <ArduinoJson.h>
#include <driver/i2s.h>

#define I2S_WS 19
#define I2S_SD 18
#define I2S_SCK 5
#define I2S_PORT I2S_NUM_0
#define BUFFER_LEN 64

#define MAX_CHUNKS 10

int16_t sBuffer[BUFFER_LEN];

unsigned long recordingStartTime = 0;
volatile bool isRecording = false;

float a1 = 0.8;
float b0 = 0.2;

// JSON document size
const size_t JSON_CAPACITY = JSON_OBJECT_SIZE(1) + JSON_ARRAY_SIZE(BUFFER_LEN);

// Define a global variable to store JSON data
StaticJsonDocument<JSON_CAPACITY> jsonData;

// Define global variables
int numChunks = 0;
String jsonChunks[MAX_CHUNKS];

void serializeJsonChunks(const JsonDocument& doc, size_t maxChunkSize) {
    size_t serializedSize = measureJson(doc);

    Serial.print("Serialized JSON Size: ");
    Serial.println(serializedSize);

    char jsonBuffer[maxChunkSize + 1]; // +1 for null terminator
    size_t offset = 0;

    while (offset < serializedSize) {
        size_t remaining = serializedSize - offset;
        size_t chunkSize = remaining > maxChunkSize ? maxChunkSize : remaining;

        // Serialize a chunk of JSON into the buffer
        size_t bytesWritten = serializeJson(doc, &jsonBuffer[0], chunkSize);

        // Ensure the chunk is null-terminated
        jsonBuffer[bytesWritten] = '\0';

        // Print or send the chunked JSON string
        Serial.print("JSON Chunk: ");
        Serial.println(&jsonBuffer[0]);

        offset += bytesWritten;
    }
}



void startRecording() {
  isRecording = true;
  recordingStartTime = millis();
  Serial.println("Recording started...");
}

void stopRecording() {
  isRecording = false;
  Serial.println("Recording stopped.");
}

void setupI2S() {
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

  i2s_driver_install(I2S_PORT, &i2s_config, 0, NULL);
}

void setI2SPin() {
  const i2s_pin_config_t pin_config = {
    .bck_io_num = I2S_SCK,
    .ws_io_num = I2S_WS,
    .data_out_num = -1,
    .data_in_num = I2S_SD
  };

  i2s_set_pin(I2S_PORT, &pin_config);
}

int sending = 0;

uint8_t allAddress[][6] = {
  {0xE8, 0x31, 0xCD, 0x70, 0xFF, 0x8C},
  {0xE0, 0xE2, 0xE6, 0x3D, 0xAF, 0xF8},
  {0xE8, 0x31, 0xCD, 0x70, 0xF2, 0xC4},
  {0xE8, 0x31, 0xCD, 0x70, 0xF3, 0xA8},
  {0xE0, 0xE2, 0xE6, 0x3D, 0xB2, 0x04}
};

const char* macAddress[] = {
  "E8:31:CD:70:FF:8C",
  "E0:E2:E6:3D:AF:F8",
  "E8:31:CD:70:F2:C4",
  "E8:31:CD:70:F3:A8",
  "E0:E2:E6:3D:B2:04"
};

esp_now_peer_info_t peerInfo;

void OnDataSent(const uint8_t *mac_addr, esp_now_send_status_t status) {
  Serial.println("Last Packet Send Status:");
  Serial.println(status == ESP_NOW_SEND_SUCCESS ? "Delivery Success" : "Delivery Fail");
  sending = status;
}

void OnDataRecv(const uint8_t *mac, const uint8_t *incomData, int len) {
  DeserializationError error = deserializeJson(jsonData, incomData, len);
  if (error) {
    Serial.println("Failed to parse incoming JSON");
    return;
  }
  Serial.println("Received JSON:");
  serializeJsonPretty(jsonData, Serial);
  Serial.println();
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

  Serial.println("Starting setup Microphone");
  setupI2S();
  setI2SPin();
  i2s_start(I2S_PORT);
  delay(500);
  Serial.println("Recording started automatically...");
  startRecording();
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

String jsonString;
size_t jsonLength;

void loop() {
    while (isRecording) {
        if (millis() - recordingStartTime >= 10000) {
            Serial.println("Recording stopped after 10 seconds");
            stopRecording();
            continue;
        }

        size_t bytesIn = 0;
        esp_err_t result_sound = i2s_read(I2S_PORT, &sBuffer, BUFFER_LEN * 2, &bytesIn, portMAX_DELAY);

        if (result_sound == ESP_OK) {
            int16_t samples_read = bytesIn / 2;
            if (samples_read > 0) {
                if (isRecording) {
                    DynamicJsonDocument doc(JSON_CAPACITY);
                    JsonArray samples = doc.createNestedArray("samples");
                    // Apply IIR filter to samples
                    for (int i = 0; i < samples_read; i++) {
                      // Apply the IIR filter
                      // y[n] = b0 * x[n] + a1 * y[n-1]
                      // Note: This is a first-order IIR filter
                      if (i == 0) {
                        sBuffer[i] = b0 * sBuffer[i];
                      } 
                      else {
                        sBuffer[i] = b0 * sBuffer[i] + a1 * sBuffer[i - 1];
                      }
                      samples.add(sBuffer[i]);
                    }
                    serializeJsonChunks(doc, 250); // Generate JSON chunks
                    numChunks += 1;
                }
            }
        }
    }

    // After recording stops, send the JSON chunks
    Serial.print("Number of JSON chunks: ");
    Serial.println(numChunks);

    Serial.println("Sending JSON data to Num 5");

    for (int i = 0; i < numChunks; i++) {
        Serial.print("Sending JSON chunk ");
        Serial.print(i + 1);
        Serial.print(" of ");
        Serial.println(numChunks);

        esp_err_t result = esp_now_send(allAddress[4], reinterpret_cast<const uint8_t *>(jsonChunks[i].c_str()), jsonChunks[i].length());
        if (result != ESP_OK) {
            Serial.println("Failed to send JSON chunk via ESP-NOW");
        } else {
            Serial.print("JSON Chunk Sent: ");
            Serial.println(jsonChunks[i]);
        }
        delay(3000);
    }

    // Reset numChunks for the next recording session
    numChunks = 0;

    // Delay between loop iterations
    delay(3000);


        
  if (sending != 0) {
    for (int i = 0; i < 4; i++) {
      Serial.println(macAddress[i]);
      if (strcmp(WiFi.macAddress().c_str(), macAddress[i]) == 0) {
        Serial.println("Skip the own address");
        continue;
      } 
      else {
        int j = i + 1;
        Serial.println("Trying to send to ESP32 number " + String(j));
        esp_err_t result = esp_now_send(allAddress[i], reinterpret_cast<const uint8_t *>(jsonData.as<String>().c_str()), jsonData.as<String>().length());
        delay(3000);
        
        if (sending == 0) {
          break;
        }
      }
    }
    delay(3000);
  }
  // Delay between loop iterations
  delay(3000);
}

