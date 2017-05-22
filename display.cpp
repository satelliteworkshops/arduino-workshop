#include "display.h"
#include "sensor.h"
#include <LiquidCrystal.h>  // Arduino LCD library
#include <Arduino.h>  // enables use of byte pics

#define DISPLAY_RS 14
#define DISPLAY_E  15
#define DISPLAY_D4 5
#define DISPLAY_D5 4
#define DISPLAY_D6 3
#define DISPLAY_D7 2

namespace LCD {
  TFT TFTscreen = TFT(LCD_CS, LCD_DC, LCD_RST);

  void setup() {
    // initialize the display
    TFTscreen.begin();
    // clear the screen with a black background
    TFTscreen.background(0, 0, 0);
    // set the font color to white
    TFTscreen.stroke(255, 255, 255);
  }

  void clearScreen() {
    // clear the screen to show refreshed data
    TFTscreen.background(0, 0, 0);
  }

  void displayTemp(int tempInt) {
    char tempChar[6];
    snprintf(tempChar, sizeof tempChar, "%d", tempInt);
    // print temp text
    TFTscreen.text(tempChar, 0, 20);
  }
}
