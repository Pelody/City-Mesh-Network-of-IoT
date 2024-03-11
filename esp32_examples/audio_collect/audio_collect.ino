#include <driver/i2s.h>

// Connections to ICS-43434 microphone
#define I2S_WS 19
#define I2S_SD 18
#define I2S_SCK 5

// Use I2S Processor 0
#define I2S_PORT I2S_NUM_0

// Define input buffer length
#define BUFFER_LEN 64
int16_t sBuffer[BUFFER_LEN];

// Flag to indicate whether recording is ongoing
volatile bool isRecording = false;

// Function to start recording
void startRecording() {
  isRecording = true;
}

// Function to stop recording
void stopRecording() {
  isRecording = false;
}

void setupI2S() {
  // Set up I2S Processor configuration
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
  // Set I2S pin configuration
  const i2s_pin_config_t pin_config = {
    .bck_io_num = I2S_SCK,
    .ws_io_num = I2S_WS,
    .data_out_num = -1,
    .data_in_num = I2S_SD
  };

  i2s_set_pin(I2S_PORT, &pin_config);
}

void setup() {
  // Set up Serial Monitor
  Serial.begin(115200);
  Serial.println(" ");
  delay(1000);

  // Set up I2S
  setupI2S();
  setI2SPin();
  i2s_start(I2S_PORT);
  delay(500);
}

void loop() {
  // False print statements to "lock range" on serial plotter display
  // Change rangelimit value to adjust "sensitivity"
  int rangelimit = 22050;
  Serial.print(rangelimit * -1);
  Serial.print(" ");
  Serial.print(rangelimit);
  Serial.print(" ");

  // Get I2S data and place in data buffer
  size_t bytesIn = 0;
  esp_err_t result = i2s_read(I2S_PORT, &sBuffer, BUFFER_LEN * 2, &bytesIn, portMAX_DELAY);

  if (result == ESP_OK) {
    // Read I2S data buffer
    int16_t samples_read = bytesIn / 2;
    if (samples_read > 0) {
      float mean = 0;
      for (int16_t i = 0; i < samples_read; ++i) {
        mean += sBuffer[i];
      }

      // Average the data reading
      mean /= samples_read;

      // Print to serial plotter
      Serial.println(mean);

      // Record if flag is set
      if (isRecording) {
        // Write audio data to storage (you can add this part)
        // Example: writeAudioDataToStorage(mean);
      }
    }
  }

  // Check for user input to start or stop recording
  if (Serial.available() > 0) {
    char command = Serial.read();
    if (command == 'R' || command == 'r') { // Start recording command received
      startRecording();
    } else if (command == 'S' || command == 's') { // Stop recording command received
      stopRecording();
    }
  }
}

