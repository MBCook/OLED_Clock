#include <Arduino.h>
#include <Wire.h>
#include <Chronodot.h>
#include <Keypad.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

// The digit data, and a buffer

#include "digit_data.h"

byte digitWidth;                   // Height is a constant from the digit_data.h file
byte digitBuffer[MAX_DIGIT_BYTES];

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

// Main functions

void setup(){
	Wire.begin();
  
	// Reset the two screens
  
	leftDisplay.clearDisplay();
  
	leftDisplay.begin();
	leftDisplay.display();
  
	rightDisplay.begin();
	rightDisplay.display();
}

void loop(){
	// Get the current time

	Chronodot::getTime(&myTime);

	// Write the date info to the left screen
	
	leftDisplay.clearDisplay();
	
	leftDisplay.setTextSize(2);
	leftDisplay.setTextColor(WHITE);
	leftDisplay.setCursor(0, 0);
	
	leftDisplay.print(myTime.getMonth());
	leftDisplay.print("/");
	
	if (myTime.getDayOfMonth() < 10) {
		leftDisplay.print("0");
	}
	
	leftDisplay.print(myTime.getDayOfMonth());
	leftDisplay.print("/");
	
	leftDisplay.print(myTime.getYear() + 2000);
	
	leftDisplay.display();
	
	// Write the time info to the right screen
	
	rightDisplay.clearDisplay();
	
	rightDisplay.setTextSize(2);
	rightDisplay.setTextColor(WHITE);
	rightDisplay.setCursor(0, 0);
	
	rightDisplay.print(myTime.getHours());
	rightDisplay.print(":");
	
	if (myTime.getMinutes() < 10) {
		rightDisplay.print("0");
	}
	
	rightDisplay.print(myTime.getMinutes());
	rightDisplay.print(":");
	
	if (myTime.getSeconds() < 10) {
		rightDisplay.print("0");
	}
	
	rightDisplay.print(myTime.getSeconds());
	
	rightDisplay.display();
}

void loadDigit(byte digit) {
	// Read the data out of progmem into the buffer
	
	digitWidth = pgm_read_byte(&digitWidths[digit]);
	
	uint16_t dataLength = pgm_read_word(&digitSizes[digit]);
	
	prog_uint8_t *correctArray = (prog_uint8_t *)pgm_read_word(&digitData[digit]);
	
	for (int i = 0; i < dataLength; i++) {
		digitBuffer[i] = pgm_read_word(&correctArray[i]);
	}
}
