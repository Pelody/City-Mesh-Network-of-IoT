#include "SPIFFS.h"

void listSPIFFSContents() {
  // Open the root directory
  File root = SPIFFS.open("/");
  if (!root) {
    Serial.println("Failed to open directory");
    return;
  }

  // List all files in SPIFFS
  Serial.println("Files stored in SPIFFS:");
  while (File file = root.openNextFile()) {
    Serial.println(file.name());
    file.close(); // Close the file after reading
  }
}

void setup() {
  Serial.begin(115200);
  if (!SPIFFS.begin(true)) {
    Serial.println("Failed to mount SPIFFS");
    return;
  }

  Serial.println("SPIFFS mounted successfully");

  // List all files in SPIFFS
  listSPIFFSContents();

  // Reformat SPIFFS
  if (SPIFFS.format()) {
    Serial.println("SPIFFS formatted successfully");
  } else {
    Serial.println("Failed to format SPIFFS");
  }

  // List all files in SPIFFS again
  listSPIFFSContents();
}

void loop() {
  // Nothing to do here
}

