#include "lcd.h"
#include <TFT.h>  // Arduino LCD library

// pin definition for LCD
#define cs   10
#define dc   9
#define rst  8

namespace LCD {
  TFT TFTscreen = TFT(cs, dc, rst);

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
