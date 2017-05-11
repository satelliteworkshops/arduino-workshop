#include "lcd.h"
#include "sensor.h"

void setup() {
  LCD::setup();
  LCD::helloworld();
  Sensor::setup();
}

void loop() {
}
