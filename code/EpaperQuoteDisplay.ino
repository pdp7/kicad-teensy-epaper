// From EPD215 by Jarek Lupinski:
// Arduino Library for the E-paper Teensy Shield
// https://github.com/jarek319/EPD215/ 
//
// Source for this file:
// https://github.com/jarek319/EPD215/blob/master/examples/EpaperQuoteDisplay/EpaperQuoteDisplay.ino
// 
// Modified by Drew Fustini for kicad-teensy-epaper projectA
// https://github.com/pdp7/kicad-teensy-epaper/

#include <Adafruit_GFX.h> // include the base Adafruit Graphics library
#include <EPD215.h>       // include the epaper display driver library
#include "quotes.h"       // include a list of the quotes to be displayed

#define ROTATE_DELAY 1   // display a quote for this many minutes before rotating

// initialize epaper with pin numbers for cs, dc, rs, bs, d0, d1 for software SPI
//EPD215 epaper( 17, 16, 15, 14, 13, 11 );
// DREW FUSTINI NOTE: MODIFIED FOR KICAD BREAKOUT BOARD PINOUT
EPD215 epaper( 17, 16, 14, 15, 13, 11 );
// initialize epaper with pin numbers for cs, dc, rs, bs for hardware SPI
//EPD215 epaper( 17, 16, 15, 14 );

void setup() {            // setup function runs once on startup
  Serial.begin( 115200 ); // begin a Serial link in case we need troubleshooting
  delay( 2000 );          // wait two seconds
  epaper.initScreen();    // initialize the epaper hardware
  epaper.updateScreen();  // update the screen with whatever is in the buffer
}

void loop() {                                                        // loop function runs forever until power is removed
  int quoteIndex = random( sizeof( quoteArray ) / 4 );               // get a random quote number
  epaper.clearScreen();                                              // clear the screen
  epaper.setCursor( 0, 0 );                                          // reset the cursor position
  String quoteString = String( quoteArray[ quoteIndex ] );           // get the quote from the array and save it as a String
  Serial.println( quoteString );                                     // print the String out over Serial for troubleshooting
  int delimiterIndex = quoteString.lastIndexOf( ';' );               // find where the quote test ends and the quote author begins
  String textString = quoteString.substring( 0, delimiterIndex );    // store the text of the quote in textString
  String authorString = quoteString.substring( delimiterIndex + 1 ); // store the attributed source of the quote in quoteString
  placeString( textString );                                         // write the text of the string to the e-paper screen buffer
  epaper.println();                                                  // skip two
  epaper.println();                                                  // lines
  placeString( authorString );                                       // write the attributed source of the string to the e-paper screen buffer
  epaper.updateScreen();                                             // update the epaper screen with what is in the buffer
  delay( ROTATE_DELAY * 60000 );                                     // wait ROTATE_DELAY minutes before continuing
}

void placeString( String s ) {  // helper function to implement word-wrapping
  int8_t cursorX = 0;
  for ( uint32_t i = 0; i < s.length(); i ) {
    uint8_t wordEndIndex = s.indexOf( ' ', i );
    int8_t maxLength = 18 - cursorX;
    String wordString = s.substring( i, wordEndIndex );
    int8_t wordStringLength = wordString.length();
    if ( wordStringLength >= maxLength ) { 
      epaper.println();
      cursorX = 0;
    }
    epaper.print( wordString + " " );
    cursorX += wordString.length() + 1;
    i += wordString.length() + 1;
  }
}
