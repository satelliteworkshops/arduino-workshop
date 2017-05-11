#include "lcd.h"
#include <TFT.h>  // Arduino LCD library
#include <SPI.h>

// pin definition for LCD
#define cs   10
#define dc   9
#define rst  8

TFT TFTscreen = TFT(cs, dc, rst);


void setup() {
  // put your setup code here, to run once:
  // initialize the display
  TFTscreen.begin();
  // clear the screen with a black background
  TFTscreen.background(0, 0, 0);
  // set the font color to white
  TFTscreen.stroke(255, 255, 255);
  // print test text
  TFTscreen.text("Hello world", 0, 20);
}

void loop() {
  // put your main code here, to run repeatedly:

}
