#include "lcd.h"
#include "sensor.h"

void setup() {
  LCD::setup();
  LCD::displayTemp(10);
  Sensor::setup();
}

void loop() {
}
