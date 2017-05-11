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

  void helloworld() {
    // print test text
    TFTscreen.text("I like turtles", 0, 20);
  }
}
