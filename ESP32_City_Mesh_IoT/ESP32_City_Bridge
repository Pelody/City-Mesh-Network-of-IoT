#include <WiFi.h>
#include <PubSubClient.h>
#include <ArduinoJson.h>  // Include the ArduinoJson library for JSON parsing

const char* ssid = "";
const char* password = "";
const char* mqttServer = "";
const int mqttPort = ;
const char* mqttUser = "";
const char* mqttPassword = "";

WiFiClient espClient;
PubSubClient client(espClient);

void reconnect() {
  while (!client.connected()) {
    Serial.print("Attempting MQTT connection...");
    if (client.connect("ESP32Client", mqttUser, mqttPassword)) {
      Serial.println("connected");
    } else {
      Serial.print("failed, rc=");
      Serial.print(client.state());
      Serial.println(" try again in 5 seconds");
      delay(5000);
    }
  }
}

void setup() {
  Serial.begin(115200);
  Serial2.begin(115200, SERIAL_8N1, 16, 17);  // Use GPIO16 as RX and GPIO17 as TX for UART
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Connecting to WiFi...");
  }
  Serial.println("Connected to WiFi");
  configTime(0, 0, "pool.ntp.org", "time.nist.gov");  // Initialize the NTP client
  client.setServer(mqttServer, mqttPort);
  reconnect();  // Connect to the MQTT server
}

void loop() {
  if (!client.connected()) {
    reconnect();
  }
  client.loop();  // Maintain MQTT connection

  if (Serial2.available() > 0) {
    String data = Serial2.readString();
    Serial.print("Received data from UART2: ");
    Serial.println(data);

    // Parse the incoming JSON
    StaticJsonDocument<512> doc;
    DeserializationError error = deserializeJson(doc, data);
    if (!error) {
      // Add the Unix timestamp
      doc["ts"] = time(nullptr);  // Get the current Unix time

      // Serialize the modified JSON
      char jsonBuffer[512];
      serializeJson(doc, jsonBuffer);

      // Publish the JSON with the timestamp to MQTT
      if (!client.publish("nyit/sensor/db", jsonBuffer)) {
        Serial.println("Failed to send MQTT message");
      } else {
        Serial.println("MQTT message sent with timestamp");
      }
    } else {
      Serial.println("Failed to parse JSON from UART2");
    }
  }

  delay(1000);
}
