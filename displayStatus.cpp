#include "ArduinoCodeRFID.ino";

void displayStatus() {
    if(!unlock) digitalWrite(redPinLED, HIGH);
}