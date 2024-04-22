/*
  ESP-NOW Demo - Receive
  esp-now-demo-rcv.ino
  Reads data from Initiator
  
  DroneBot Workshop 2022
  https://dronebotworkshop.com
*/


// Include Libraries
#include <esp_now.h>
#include <WiFi.h>

// Variables for test data
const char* jsonData = "{\"samples\":[-4,-7,-10,-12,-14,-15,-17,-18,-20,-21,-22,-23,-23,-24,-24,-24,-23,-23,-22,-22,-20,-20,-18,-17,-17,-16,-16,-16,-16,-16,-15,-15,-15,-15,-15,-15,-16,-16,-16,-16,-15,-15,-15,-15,-15,-15,-14,-14,-12,-12,-9,-8,-6,-5,-4,-3,-1,-1,0,0,0,1,0,0]}";

int sending = 0;
int incomingReadings = 0;

// MAC Address of responder - edit as required
uint8_t allAddress[][6] = {{0xE8, 0x31, 0xCD, 0x70, 0xFF, 0x8C},
			{0xE0, 0xE2, 0xE6, 0x3D, 0xAF, 0xF8},
			{0xE8, 0x31, 0xCD, 0x70, 0xF2, 0xC4},
			{0xE8, 0x31, 0xCD, 0x70, 0xF3, 0xA8},
			{0xE0, 0xE2, 0xE6, 0x3D, 0xB2, 0x04}};

const char macAddress[][18] = {
    "E8:31:CD:70:FF:8C",
    "E0:E2:E6:3D:AF:F8",
    "E8:31:CD:70:F2:C4",
    "E8:31:CD:70:F3:A8",
    "E0:E2:E6:3D:B2:04"
};

// Function to send JSON data
void sendJsonData(const uint8_t *address, const uint8_t* data, size_t len) {
  // Send the JSON string
  esp_err_t result = esp_now_send(address, data, len);
  if (result == ESP_OK) {
    Serial.println("JSON data sent successfully");
  } else {
    Serial.println("Failed to send JSON data");
  }
}

// Peer info
esp_now_peer_info_t peerInfo;


//Data Send
void OnDataSent(const uint8_t *mac_addr, esp_now_send_status_t status) {
  Serial.println("Last Packet Send Status:");
  Serial.println(status == ESP_NOW_SEND_SUCCESS ? "Delivery Success" : "Delivery Fail");
  sending = status;
}


//Data Recv
void OnDataRecv(const uint8_t * mac, const uint8_t *incomData, int len) {
  memcpy(&incomingReadings, incomData, sizeof(incomingReadings));

}


void setup() {

  // Set up Serial Monitor
  Serial.begin(115200);
  // Set ESP32 as a Wi-Fi Station
  WiFi.mode(WIFI_STA);
  // Initilize ESP-NOW
  if (esp_now_init() != ESP_OK) {
    Serial.println("Error initializing ESP-NOW");
    return;
  }

  // Register the send callback
  esp_now_register_send_cb(OnDataSent);

  // Receive Callback Function
  esp_now_register_recv_cb(OnDataRecv);

  // Dynamically add the peers
  for (int i = 0; i < sizeof(allAddress) / sizeof(allAddress[0]); i++) {
    Serial.println(i);
      if (!addPeerAtIndex(i)) {
          Serial.println("Failed to add peer at index " + String(i) + ", exiting");
          return;
      }
  }
}

// Add peer
bool addPeerAtIndex(int index) {
    // Register peer
    memcpy(peerInfo.peer_addr, allAddress[index], 6);
    peerInfo.channel = 0;
    peerInfo.encrypt = false;
    // Add peer
    if (esp_now_add_peer(&peerInfo) != ESP_OK) {
        Serial.println("Failed to add peer at index " + String(index));
        return false; // Failed to add peer
    } else {
        Serial.println("Added peer at index " + String(index));
        return true; // Successfully added peer
    }
}

void loop() {
  
  Serial.println("Trying to send to ESP32 number 5");
  esp_err_t result = esp_now_send(allAddress[4], (uint8_t *)jsonData, strlen(jsonData));
  delay(3000);
  if (sending != 0) {
    for (int i = 0; i < 4; i++) {
      Serial.println(macAddress[i]);
      if (strcmp(WiFi.macAddress().c_str(), macAddress[i]) == 0) {
        Serial.println("Skip the own address");
        continue;
      } 
      else {
      int j=i+1;
        Serial.println("Trying to send to ESP32 number " + String(j));
        
        // Try sending the data to the next address
        esp_err_t result = esp_now_send(allAddress[i], (uint8_t *)jsonData, strlen(jsonData));
         delay(3000);
         
         if (sending == 0){
          break;
        }
      }
    }
    
  }
  delay(3000);
        
}
