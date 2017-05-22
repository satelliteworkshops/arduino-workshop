#include "lcd.h"
#include <TFT.h>  // Arduino LCD library

// pin definition for LCD
#define LCD_CS   10
#define LCD_DC   9
#define LCD_RST  8

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
