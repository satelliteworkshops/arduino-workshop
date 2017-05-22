#include "display.h"
#include "sensor.h"
#include <LiquidCrystal.h>  // Arduino LCD library
#include <Arduino.h>  // enables use of byte pics

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
