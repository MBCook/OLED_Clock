#include <Arduino.h>
#include <Wire.h>
#include <Chronodot.h>
#include <Keypad.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

// The digit data, and a buffer

#include "digit_data.h"

byte digitWidth;                   // Height is a constant from the digit_data.h file
prog_uint8_t *digitSource;

const byte DISPLAY_PADDING = 5;

// Pins we use for the Chronodot

// SDA and SCL are already defined
const byte BATTERY_SENSE = A0;     // Pin we sense the battery voltage on

// Pins we use for SPI to the two OLEDs

const byte SPI_DATA       = 10;    // SPI data pin
const byte SPI_CLOCK      = 9;     // SPI clock pin
const byte SPI_DC         = 8;     // SPI DC pin

// Left OLED specific constants

const byte LEFT_OLED_RST  = 4;     // The left OELD's reset pin
const byte LEFT_OLED_CS   = 6;     // The left OLED's chip select pin

// Right OLED specific constants

const byte RIGHT_OLED_RST = 5;     // The right OLED's reset pin
const byte RIGHT_OLED_CS  = 7;     // The right OLED's chip select pin

// Time keeping data so we know when we need to refresh the screen

byte lastHour;
byte lastMinute;

// Keypad specific constants

const byte KEYPAD_ROWS    = 4;
const byte KEYPAD_COLS    = 3;
const char keypadKeys[KEYPAD_ROWS][KEYPAD_COLS] = {
  {'1','2','3'},
  {'4','5','6'},
  {'7','8','9'},
  {'*','0','#'}
};
byte keypadRowPins[KEYPAD_ROWS]    = {A5, A4, A3, A2};  // Pins for the rows
byte keypadColumnPins[KEYPAD_COLS] = {13, 12, 11};      // Pins for the columns

// Keypad setup

Keypad keypad = Keypad(makeKeymap(keypadKeys), keypadRowPins, keypadColumnPins, KEYPAD_ROWS, KEYPAD_COLS );

// Objects for the two LCDs

Adafruit_SSD1306 leftDisplay = Adafruit_SSD1306(SPI_DATA, SPI_CLOCK, SPI_DC, LEFT_OLED_RST, LEFT_OLED_CS);
Adafruit_SSD1306 rightDisplay = Adafruit_SSD1306(SPI_DATA, SPI_CLOCK, SPI_DC, RIGHT_OLED_RST, RIGHT_OLED_CS);

// And our Chronodot

ChronoTime myTime;

// Pre-definitions of functions so we can keep setup and loop at the top

void loadDigit(byte digit);
void displayHours();
void displayMinutes();

// Main functions

void setup(){
	Wire.begin();
  
  	// Reset the timekeeping bytes, so a redisplay will be forced
  	
  	lastHour = 255;
  	lastMinute = 255;
  
	// Clear the displays  
  
	leftDisplay.clearDisplay();
  
	leftDisplay.begin();
	leftDisplay.display();
  
	rightDisplay.begin();
	rightDisplay.display();
}

void loop(){
	// Get the current time

	Chronodot::getTime(&myTime);

	// Get the bits we care about, update time as necessary
	
	byte currentHour = myTime.getHours();
	
	if (currentHour > 12)
		currentHour -= 12;		// We'll stick with 12 hour mode
	else if (currentHour == 0)
		currentHour = 12;

	byte currentMinute = myTime.getMinutes();

	// Do the checks
	
	if (currentHour != lastHour) {
		lastHour = currentHour;
		
		displayHours();
	}
	
	if (currentMinute != lastMinute) {
		lastMinute = currentMinute;
		
		displayMinutes();
	}
}

void loadDigit(byte digit) {
	// Get the width out of progmem, setup the source pointer
	
	digitWidth = pgm_read_byte(&digitWidths[digit]);
	digitSource = digitData[digit];
}

void displayHours() {
	// We're going to do this right to left so things appear centered between the two LCDs
	// Let's figure out the digits we need
	
	byte tensDigit = lastHour / 10;
	byte onesDigit = lastMinute % 10;
	
	// Keep track of our X position, display left to right
	
	byte currentX = 127;
	byte currentY = (64 - digitHeight) / 2;
	
	leftDisplay.clearDisplay();
	
	loadDigit(onesDigit);
	
	currentX -= digitWidth;
	
	rightDisplay.drawBitmap(currentX, currentY, digitSource, digitWidth, digitHeight, 1);
	
	currentX -= DISPLAY_PADDING;
	
	if (tensDigit > 0) {
		if (tensDigit != onesDigit)
			loadDigit(tensDigit);
	
		currentX -= digitWidth;
		
		rightDisplay.drawBitmap(currentX, currentY, digitSource, digitWidth, digitHeight, 1);
	}

	// That's it, send it out
	
	leftDisplay.display();	
}

void displayMinutes() {
	// We'll display a colon and then the minutes.
	// Let's figure out the digits we need
	
	byte tensDigit = lastMinute / 10;
	byte onesDigit = lastMinute % 10;
	
	// Keep track of our X position, display left to right
	
	byte currentX = 0;
	byte currentY = (64 - digitHeight) / 2;
	
	rightDisplay.clearDisplay();
	
	loadDigit(COLON);
	
	rightDisplay.drawBitmap(currentX, currentY, digitSource, digitWidth, digitHeight, 1);
	
	currentX += digitWidth;
	currentX += DISPLAY_PADDING;
	
	loadDigit(tensDigit);
	
	rightDisplay.drawBitmap(currentX, currentY, digitSource, digitWidth, digitHeight, 1);

	currentX += digitWidth;
	currentX += DISPLAY_PADDING;

	if (tensDigit != onesDigit)
		loadDigit(onesDigit);		// Avoid the load if we can

	rightDisplay.drawBitmap(currentX, currentY, digitSource, digitWidth, digitHeight, 1);
	
	// That's it, send it out
	
	rightDisplay.display();	
}
