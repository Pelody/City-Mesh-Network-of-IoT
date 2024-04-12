#include <ArduinoJson.h>
#include <driver/i2s.h>

#define I2S_WS 19
#define I2S_SD 18
#define I2S_SCK 5
#define I2S_PORT I2S_NUM_0
#define BUFFER_LEN 64

int16_t sBuffer[BUFFER_LEN];

unsigned long recordingStartTime = 0;
volatile bool isRecording = false;

// Coefficients for IIR filter
float a1 = 0.8;
float b0 = 0.2;

const size_t JSON_CAPACITY = JSON_OBJECT_SIZE(2);

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

void setup() {
  Serial.begin(115200);
  Serial.println("Starting setup...");
  setupI2S();
  setI2SPin();
  i2s_start(I2S_PORT);
  delay(500);
  Serial.println("Recording started automatically...");
  startRecording();
}

void loop() {
  if (isRecording && millis() - recordingStartTime >= 10000) {
    Serial.println("Recording stopped after 10 seconds");
    stopRecording();
  }

  size_t bytesIn = 0;
  esp_err_t result_sound = i2s_read(I2S_PORT, &sBuffer, BUFFER_LEN * 2, &bytesIn, portMAX_DELAY);

  if (result == ESP_OK) {
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
          } else {
            sBuffer[i] = b0 * sBuffer[i] + a1 * sBuffer[i - 1];
          }
        samples.add(sBuffer[i]);
        }
        // Convert JSON data to a string
        String jsonString;
        serializeJson(doc, jsonString);
        
        Serial.println(jsonString); // Print JSON to Serial for debug

        delay(100); // Add a small delay for stability
      }
    }
  }
}
