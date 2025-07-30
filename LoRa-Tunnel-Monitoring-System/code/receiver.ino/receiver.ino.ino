#include <SPI.h>
#include <LoRa.h>

#define ss 10
#define rst 9
#define dio0 2

void setup() {
  Serial.begin(9600);
  while (!Serial);

  LoRa.setPins(ss, rst, dio0);

  if (!LoRa.begin(433E6)) {
    Serial.println("LoRa init failed. Check your connections.");
    while (true);
  }

  Serial.println("LoRa Receiver Initialized");
}

void loop() {
  int packetSize = LoRa.parsePacket();
  if (packetSize) {
    String received = "";
    while (LoRa.available()) {
      received += (char)LoRa.read();
    }

    Serial.print("Received data: ");
    Serial.println(received);

    // Simulate response or processing logic
    if (received == "OBSTACLE") {
      Serial.println("⚠️ Obstacle Detected in Tunnel!");
    } else {
      Serial.println("✅ Tunnel Clear");
    }
  }
}
