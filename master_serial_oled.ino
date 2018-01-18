#include <SoftwareSerial.h>

SoftwareSerial mySerial(8, 9); // RX, TX

void setup() {
  mySerial.begin(4800);
}

void loop() {
  if (mySerial.available()) {
    mySerial.println(1);
  }
}
