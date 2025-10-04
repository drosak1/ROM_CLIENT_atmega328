/*
  Visual + ATMEGA328P
*/
#include <Arduino.h>


void setup() {
  Serial.begin(115200);
  while (!Serial); // Czekaj na połączenie

  Serial.println("System uruchomiony. Czekam ...");
}

void loop() {
  delay(1000);
}