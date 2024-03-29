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
int int_value;
float float_value;
bool bool_value = true;
int sending;

// MAC Address of responder - edit as required
//uint8_t broadcastAddress[] = {0xE0, 0xE2, 0xE6, 0x3D, 0xAF, 0xF8};  //MAC address of ESP No.2 : 0xE0, 0xE2, 0xE6, 0x3D, 0xAF, 0xF8
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


// Define a data structure
typedef struct struct_message {
  char a[32];
  int b;
  float c;
  bool d;
} 

struct_message;

// Create a structured object
struct_message myData;
struct_message incomingReadings;

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
  Serial.print("Bytes received: ");
  Serial.println(len);
  Serial.println(incomingReadings.b);
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
  //esp_now_register_recv_cb(OnDataRecv);

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

  int_value = random(1,20);
  float_value = 1.3 * int_value;
  bool_value = !bool_value;
  // Format structured data
  strcpy(myData.a, "Welcome to the Workshop!");
  myData.b = int_value;
  myData.c = float_value;
  myData.d = bool_value;
  
  Serial.println("Trying to send to ESP32 number 5");
  esp_err_t result = esp_now_send(allAddress[4], (uint8_t *)&myData, sizeof(myData));
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
        esp_err_t result = esp_now_send(allAddress[i], (uint8_t *)&myData, sizeof(myData));
        
 
         delay(3000);
         if (sending == 0){
          break;
        }
      }
    }
    
  }
  delay(3000);
        
}
