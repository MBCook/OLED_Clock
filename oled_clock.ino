#include <Keypad.h>

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

// Main functions

void setup(){
  Serial.begin(9600);
  
  while (!Serial) ;  // Wait for the serial monitor to come onlin
  
  Serial.println("hi");
}

void loop(){
  char key = keypad.getKey();

  if (key != NO_KEY){
    Serial.println(key);
  }
}
