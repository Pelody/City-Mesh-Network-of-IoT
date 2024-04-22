#include <WiFi.h>

void setup() {
  Serial.begin(115200);

  // Print ESP32 MAC address
  Serial.print("MAC Address: ");
  Serial.println(WiFi.macAddress());

  // Optional: Turn off Wi-Fi to save power
  WiFi.mode(WIFI_OFF);
}

void loop() {
  // Nothing to do here
}

