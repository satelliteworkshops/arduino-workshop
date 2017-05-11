#include "lcd.h"
#include "sensor.h"

void setup() {
  LCD::setup();
  Sensor::setup();
}

void loop() {
  int temp = Sensor::readTemp();
  LCD::displayTemp(temp);
  delay(5000);
  LCD::clearScreen();
}
