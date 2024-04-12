#include <esp_now.h>
#include <WiFi.h>
#include <ArduinoJson.h>

// Maximum size of the received JSON data
const size_t MAX_JSON_SIZE = 1024;

// Function to validate JSON data
bool isValidJson(const char *data) {
  StaticJsonDocument<MAX_JSON_SIZE> doc;
  DeserializationError error = deserializeJson(doc, data);
  return !error;
}

esp_now_peer_info_t peerInfo;

void OnDataRecv(const uint8_t *mac, const uint8_t *incomingData, int len) {
  // Buffer to hold the received JSON data
  char receivedJson[MAX_JSON_SIZE + 1]; // Add 1 for null terminator

  // Check if the received data exceeds the buffer size
  if (len > MAX_JSON_SIZE) {
    Serial.println("Received JSON data is too large");
    return;
  }

  // Copy the received data to the buffer
  memcpy(receivedJson, incomingData, len);
  receivedJson[len] = '\0'; // Null-terminate the string

  // Validate the received JSON data
  if (!isValidJson(receivedJson)) {
    Serial.println("Received data is not valid JSON");
    return;
  }

  // Parse the received JSON data
  StaticJsonDocument<MAX_JSON_SIZE> doc;
  DeserializationError error = deserializeJson(doc, receivedJson);
  if (error) {
    Serial.println("Failed to parse received JSON");
    return;
  }
  
  // Print the parsed JSON data to the Serial Monitor
  Serial.println("Received JSON data:");
  serializeJson(doc, Serial); // Print the JSON data in a human-readable format
  //Serial.println(); // Print a newline for better readability
}

void setup() {
  Serial.begin(115200);
  WiFi.mode(WIFI_STA);

  // Initialize ESP-NOW
  if (esp_now_init() != ESP_OK) {
    Serial.println("Error initializing ESP-NOW");
    return;
  }

  // Register the receive callback function
  esp_now_register_recv_cb(OnDataRecv);

  // Set the peer address to broadcast (all 0xFF)
  memset(&peerInfo, 0, sizeof(peerInfo));
  if (esp_now_add_peer(&peerInfo) != ESP_OK) {
    Serial.println("Failed to add peer");
    return;
  }
}

void loop() {
  // Nothing to do in the loop
}

