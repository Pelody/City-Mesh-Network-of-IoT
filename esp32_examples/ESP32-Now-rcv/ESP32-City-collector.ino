#include <esp_now.h>
#include <WiFi.h>
#include <ArduinoJson.h>

// Maximum size of the received JSON data
const size_t MAX_JSON_SIZE = 1024;

void OnDataRecv(const uint8_t *mac, const uint8_t *incomingData, int len) {
  // Buffer to hold the received JSON data
  char receivedJson[MAX_JSON_SIZE + 1]; // Add 1 for null terminator

  // Copy the received data to the buffer
  memcpy(receivedJson, incomingData, len);
  receivedJson[len] = '\0'; // Null-terminate the string

  // Parse the received JSON data
  StaticJsonDocument<MAX_JSON_SIZE> doc;
  DeserializationError error = deserializeJson(doc, receivedJson);
  if (error) {
    Serial.println("Failed to parse received JSON");
    return;
  }
  
  Serial.println();
  // Print the parsed JSON data to the Serial Monitor
  Serial.println("Received JSON data:");
  serializeJson(doc, Serial); // Print the JSON data in a human-readable format
  Serial.println(); // Print a newline for better readability
}

//add peer
esp_now_peer_info_t peerInfo;

void setup() {
  Serial.begin(115200);
  WiFi.mode(WIFI_STA);

  // Initialize ESP-NOW
  if (esp_now_init() != ESP_OK) {
    Serial.println("Error initializing ESP-NOW");
    return;
  }

  // Register the receive and Send callback function
  esp_now_register_recv_cb(OnDataRecv);
  //esp_now_register_send_cb(OnDataSent);

  // Set the peer address to broadcast (all 0xFF)
  memset(&peerInfo, 0, sizeof(peerInfo));
  if (esp_now_add_peer(&peerInfo) != ESP_OK) {
    Serial.println("Failed to add peer");
    return;
  }
}

void loop() {

}

