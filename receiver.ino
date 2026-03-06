#include <SoftwareSerial.h>

SoftwareSerial kablo(2, 3); 

void setup() {
  Serial.begin(9600);
  kablo.begin(9600);
}

void loop() {
  if (kablo.available()) {
    Serial.write(kablo.read());
  }
}