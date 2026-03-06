#include <SoftwareSerial.h>

SoftwareSerial kablo(2, 3); 
int sayac = 0;

void setup() {
  kablo.begin(9600);
}

void loop() {
  kablo.print("Veri: ");
  kablo.println(sayac);
  sayac++;
  delay(1000);
}