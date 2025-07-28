// LoRa Transmitter Code (Arduino UNO + LoRa + Sensors)
#include <SPI.h>
#include <LoRa.h>

const int gasSensorPin = A0;  // MQ-2 or MQ-135
const int vibrationPin = A1;  // Vibration sensor
const int temperaturePin = A2; // LM35 or similar

void setup() {
  Serial.begin(9600);
  while (!Serial);

  if (!LoRa.begin(433E6)) {
    Serial.println("LoRa init failed. Check your connections.");
    while (true);
  }
  Serial.println("LoRa init succeeded.");
}

void loop() {
  int gasValue = analogRead(gasSensorPin);
  int vibrationValue = analogRead(vibrationPin);
  int temperatureValue = analogRead(temperaturePin);

  // Convert analog temperature (assuming LM35)
  float temperatureC = (temperatureValue * 5.0 / 1023.0) * 100;

  String data = "Gas:" + String(gasValue) + ",Vibration:" + String(vibrationValue) + ",Temp:" + String(temperatureC);

  Serial.println("Sending data: " + data);

  LoRa.beginPacket();
  LoRa.print(data);
  LoRa.endPacket();

  delay(5000); // Send every 5 seconds
}
