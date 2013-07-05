#include "digit_data.h"

// Constant, so we'll just waste a byte of RAM on it

const byte digitHeight = 57;

// Width of the digits in pixels, and how many bytes of data they take up

prog_uint8_t digitWidths[] PROGMEM = {38, 21, 37, 38, 39, 37, 38, 36, 38, 37, 8};
prog_uint16_t digitSizes[] PROGMEM = {285, 171, 285, 285, 285, 285, 285, 285, 285, 285, 57};

// The actual image data

prog_uint8_t digit0Data[] PROGMEM = {
	0b00000000, 0b00000111, 0b11111111, 0b11000000, 0b00000000,
	0b00000000, 0b00011111, 0b11111111, 0b11111000, 0b00000000,
	0b00000000, 0b01111111, 0b11111111, 0b11111100, 0b00000000,
	0b00000001, 0b11111111, 0b11111111, 0b11111111, 0b00000000,
	0b00000011, 0b11111111, 0b11111111, 0b11111111, 0b10000000,
	0b00000011, 0b11111111, 0b11111111, 0b11111111, 0b11000000,
	0b00000111, 0b11111110, 0b00000000, 0b11111111, 0b11000000,
	0b00001111, 0b11111000, 0b00000000, 0b00111111, 0b11100000,
	0b00001111, 0b11110000, 0b00000000, 0b00011111, 0b11100000,
	0b00011111, 0b11100000, 0b00000000, 0b00001111, 0b11110000,
	0b00011111, 0b11100000, 0b00000000, 0b00001111, 0b11110000,
	0b00111111, 0b11000000, 0b00000000, 0b00000111, 0b11111000,
	0b00111111, 0b11000000, 0b00000000, 0b00000111, 0b11111000,
	0b00111111, 0b10000000, 0b00000000, 0b00000011, 0b11111000,
	0b00111111, 0b10000000, 0b00000000, 0b00000011, 0b11111000,
	0b01111111, 0b10000000, 0b00000000, 0b00000011, 0b11111100,
	0b01111111, 0b10000000, 0b00000000, 0b00000011, 0b11111100,
	0b01111111, 0b00000000, 0b00000000, 0b00000001, 0b11111100,
	0b01111111, 0b00000000, 0b00000000, 0b00000001, 0b11111100,
	0b01111111, 0b00000000, 0b00000000, 0b00000001, 0b11111100,
	0b01111111, 0b00000000, 0b00000000, 0b00000001, 0b11111100,
	0b01111111, 0b00000000, 0b00000000, 0b00000001, 0b11111100,
	0b01111111, 0b00000000, 0b00000000, 0b00000001, 0b11111100,
	0b01111111, 0b00000000, 0b00000000, 0b00000001, 0b11111100,
	0b11111111, 0b00000000, 0b00000000, 0b00000001, 0b11111100,
	0b11111111, 0b00000000, 0b00000000, 0b00000001, 0b11111100,
	0b11111111, 0b00000000, 0b00000000, 0b00000001, 0b11111100,
	0b11111111, 0b00000000, 0b00000000, 0b00000001, 0b11111100,
	0b11111111, 0b00000000, 0b00000000, 0b00000001, 0b11111100,
	0b11111111, 0b00000000, 0b00000000, 0b00000001, 0b11111100,
	0b11111111, 0b00000000, 0b00000000, 0b00000001, 0b11111100,
	0b11111111, 0b00000000, 0b00000000, 0b00000001, 0b11111100,
	0b11111111, 0b00000000, 0b00000000, 0b00000001, 0b11111100,
	0b11111111, 0b00000000, 0b00000000, 0b00000001, 0b11111100,
	0b01111111, 0b00000000, 0b00000000, 0b00000001, 0b11111100,
	0b01111111, 0b00000000, 0b00000000, 0b00000001, 0b11111100,
	0b01111111, 0b00000000, 0b00000000, 0b00000001, 0b11111100,
	0b01111111, 0b00000000, 0b00000000, 0b00000001, 0b11111100,
	0b01111111, 0b00000000, 0b00000000, 0b00000001, 0b11111100,
	0b01111111, 0b00000000, 0b00000000, 0b00000001, 0b11111100,
	0b01111111, 0b10000000, 0b00000000, 0b00000001, 0b11111100,
	0b01111111, 0b10000000, 0b00000000, 0b00000011, 0b11111100,
	0b00111111, 0b10000000, 0b00000000, 0b00000011, 0b11111100,
	0b00111111, 0b10000000, 0b00000000, 0b00000011, 0b11111000,
	0b00111111, 0b11000000, 0b00000000, 0b00000111, 0b11111000,
	0b00111111, 0b11000000, 0b00000000, 0b00000111, 0b11111000,
	0b00011111, 0b11000000, 0b00000000, 0b00000111, 0b11110000,
	0b00011111, 0b11100000, 0b00000000, 0b00001111, 0b11110000,
	0b00011111, 0b11110000, 0b00000000, 0b00011111, 0b11110000,
	0b00001111, 0b11111000, 0b00000000, 0b00111111, 0b11100000,
	0b00000111, 0b11111100, 0b00000000, 0b01111111, 0b11100000,
	0b00000111, 0b11111111, 0b10000011, 0b11111111, 0b11000000,
	0b00000011, 0b11111111, 0b11111111, 0b11111111, 0b10000000,
	0b00000001, 0b11111111, 0b11111111, 0b11111111, 0b00000000,
	0b00000000, 0b11111111, 0b11111111, 0b11111110, 0b00000000,
	0b00000000, 0b00111111, 0b11111111, 0b11111100, 0b00000000,
	0b00000000, 0b00001111, 0b11111111, 0b11110000, 0b00000000
};

prog_uint8_t digit1Data[] PROGMEM = {
	0b00000000, 0b00000000, 0b11111000,
	0b00000000, 0b00000000, 0b11111000,
	0b00000000, 0b00000000, 0b11111000,
	0b00000000, 0b00000001, 0b11111000,
	0b00000000, 0b00000001, 0b11111000,
	0b00000000, 0b00000011, 0b11111000,
	0b00000000, 0b00000111, 0b11111000,
	0b00000000, 0b00001111, 0b11111000,
	0b00000000, 0b00111111, 0b11111000,
	0b00000001, 0b11111111, 0b11111000,
	0b11111111, 0b11111111, 0b11111000,
	0b11111111, 0b11111111, 0b11111000,
	0b11111111, 0b11111111, 0b11111000,
	0b11111111, 0b11111111, 0b11111000,
	0b11111111, 0b11111111, 0b11111000,
	0b11111111, 0b11111111, 0b11111000,
	0b00000000, 0b00000001, 0b11111000,
	0b00000000, 0b00000001, 0b11111000,
	0b00000000, 0b00000001, 0b11111000,
	0b00000000, 0b00000001, 0b11111000,
	0b00000000, 0b00000001, 0b11111000,
	0b00000000, 0b00000001, 0b11111000,
	0b00000000, 0b00000001, 0b11111000,
	0b00000000, 0b00000001, 0b11111000,
	0b00000000, 0b00000001, 0b11111000,
	0b00000000, 0b00000001, 0b11111000,
	0b00000000, 0b00000001, 0b11111000,
	0b00000000, 0b00000001, 0b11111000,
	0b00000000, 0b00000001, 0b11111000,
	0b00000000, 0b00000001, 0b11111000,
	0b00000000, 0b00000001, 0b11111000,
	0b00000000, 0b00000001, 0b11111000,
	0b00000000, 0b00000001, 0b11111000,
	0b00000000, 0b00000001, 0b11111000,
	0b00000000, 0b00000001, 0b11111000,
	0b00000000, 0b00000001, 0b11111000,
	0b00000000, 0b00000001, 0b11111000,
	0b00000000, 0b00000001, 0b11111000,
	0b00000000, 0b00000001, 0b11111000,
	0b00000000, 0b00000001, 0b11111000,
	0b00000000, 0b00000001, 0b11111000,
	0b00000000, 0b00000001, 0b11111000,
	0b00000000, 0b00000001, 0b11111000,
	0b00000000, 0b00000001, 0b11111000,
	0b00000000, 0b00000001, 0b11111000,
	0b00000000, 0b00000001, 0b11111000,
	0b00000000, 0b00000001, 0b11111000,
	0b00000000, 0b00000001, 0b11111000,
	0b00000000, 0b00000001, 0b11111000,
	0b00000000, 0b00000001, 0b11111000,
	0b00000000, 0b00000001, 0b11111000,
	0b00000000, 0b00000001, 0b11111000,
	0b00000000, 0b00000001, 0b11111000,
	0b00000000, 0b00000001, 0b11111000,
	0b00000000, 0b00000001, 0b11111000,
	0b00000000, 0b00000001, 0b11111000,
	0b00000000, 0b00000001, 0b11111000
};

prog_uint8_t digit2Data[] PROGMEM = {
	0b00000000, 0b00000011, 0b11111111, 0b11000000, 0b00000000,
	0b00000000, 0b00011111, 0b11111111, 0b11111000, 0b00000000,
	0b00000000, 0b01111111, 0b11111111, 0b11111110, 0b00000000,
	0b00000000, 0b11111111, 0b11111111, 0b11111111, 0b00000000,
	0b00000001, 0b11111111, 0b11111111, 0b11111111, 0b10000000,
	0b00000011, 0b11111111, 0b11111111, 0b11111111, 0b11000000,
	0b00000111, 0b11111110, 0b00000000, 0b11111111, 0b11100000,
	0b00001111, 0b11111100, 0b00000000, 0b00111111, 0b11110000,
	0b00001111, 0b11110000, 0b00000000, 0b00011111, 0b11110000,
	0b00011111, 0b11110000, 0b00000000, 0b00001111, 0b11111000,
	0b00011111, 0b11100000, 0b00000000, 0b00000111, 0b11111000,
	0b00011111, 0b11000000, 0b00000000, 0b00000011, 0b11111000,
	0b00111111, 0b11000000, 0b00000000, 0b00000011, 0b11111000,
	0b00111111, 0b10000000, 0b00000000, 0b00000011, 0b11111000,
	0b00111111, 0b10000000, 0b00000000, 0b00000001, 0b11111000,
	0b00111111, 0b10000000, 0b00000000, 0b00000001, 0b11111000,
	0b00111111, 0b10000000, 0b00000000, 0b00000001, 0b11111000,
	0b00111111, 0b10000000, 0b00000000, 0b00000001, 0b11111000,
	0b00111111, 0b00000000, 0b00000000, 0b00000001, 0b11111000,
	0b00111111, 0b00000000, 0b00000000, 0b00000011, 0b11111000,
	0b00000000, 0b00000000, 0b00000000, 0b00000011, 0b11111000,
	0b00000000, 0b00000000, 0b00000000, 0b00000011, 0b11111000,
	0b00000000, 0b00000000, 0b00000000, 0b00000111, 0b11111000,
	0b00000000, 0b00000000, 0b00000000, 0b00000111, 0b11111000,
	0b00000000, 0b00000000, 0b00000000, 0b00001111, 0b11110000,
	0b00000000, 0b00000000, 0b00000000, 0b00011111, 0b11110000,
	0b00000000, 0b00000000, 0b00000000, 0b00111111, 0b11100000,
	0b00000000, 0b00000000, 0b00000000, 0b01111111, 0b11000000,
	0b00000000, 0b00000000, 0b00000000, 0b11111111, 0b10000000,
	0b00000000, 0b00000000, 0b00000011, 0b11111111, 0b00000000,
	0b00000000, 0b00000000, 0b00000111, 0b11111110, 0b00000000,
	0b00000000, 0b00000000, 0b00011111, 0b11111100, 0b00000000,
	0b00000000, 0b00000000, 0b00111111, 0b11111000, 0b00000000,
	0b00000000, 0b00000000, 0b11111111, 0b11110000, 0b00000000,
	0b00000000, 0b00000001, 0b11111111, 0b11000000, 0b00000000,
	0b00000000, 0b00000111, 0b11111111, 0b10000000, 0b00000000,
	0b00000000, 0b00001111, 0b11111110, 0b00000000, 0b00000000,
	0b00000000, 0b00111111, 0b11111000, 0b00000000, 0b00000000,
	0b00000000, 0b01111111, 0b11110000, 0b00000000, 0b00000000,
	0b00000000, 0b11111111, 0b11000000, 0b00000000, 0b00000000,
	0b00000001, 0b11111111, 0b00000000, 0b00000000, 0b00000000,
	0b00000011, 0b11111110, 0b00000000, 0b00000000, 0b00000000,
	0b00000111, 0b11111100, 0b00000000, 0b00000000, 0b00000000,
	0b00001111, 0b11111000, 0b00000000, 0b00000000, 0b00000000,
	0b00001111, 0b11100000, 0b00000000, 0b00000000, 0b00000000,
	0b00011111, 0b11100000, 0b00000000, 0b00000000, 0b00000000,
	0b00011111, 0b11000000, 0b00000000, 0b00000000, 0b00000000,
	0b00111111, 0b10000000, 0b00000000, 0b00000000, 0b00000000,
	0b00111111, 0b10000000, 0b00000000, 0b00000000, 0b00000000,
	0b01111111, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
	0b01111111, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
	0b01111111, 0b11111111, 0b11111111, 0b11111111, 0b11111000,
	0b01111111, 0b11111111, 0b11111111, 0b11111111, 0b11111000,
	0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b11111000,
	0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b11111000,
	0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b11111000,
	0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b11111000
};

prog_uint8_t digit3Data[] PROGMEM = {
	0b00000000, 0b00000111, 0b11111111, 0b11000000, 0b00000000,
	0b00000000, 0b00011111, 0b11111111, 0b11111000, 0b00000000,
	0b00000000, 0b01111111, 0b11111111, 0b11111110, 0b00000000,
	0b00000000, 0b11111111, 0b11111111, 0b11111111, 0b00000000,
	0b00000001, 0b11111111, 0b11111111, 0b11111111, 0b10000000,
	0b00000011, 0b11111111, 0b11111111, 0b11111111, 0b11000000,
	0b00000111, 0b11111110, 0b00000000, 0b11111111, 0b11100000,
	0b00001111, 0b11111000, 0b00000000, 0b00111111, 0b11100000,
	0b00001111, 0b11110000, 0b00000000, 0b00011111, 0b11110000,
	0b00011111, 0b11100000, 0b00000000, 0b00001111, 0b11110000,
	0b00011111, 0b11000000, 0b00000000, 0b00000111, 0b11110000,
	0b00011111, 0b11000000, 0b00000000, 0b00000111, 0b11111000,
	0b00111111, 0b11000000, 0b00000000, 0b00000111, 0b11111000,
	0b00111111, 0b10000000, 0b00000000, 0b00000111, 0b11111000,
	0b00111111, 0b10000000, 0b00000000, 0b00000011, 0b11111000,
	0b00111111, 0b10000000, 0b00000000, 0b00000011, 0b11111000,
	0b00111111, 0b10000000, 0b00000000, 0b00000111, 0b11111000,
	0b00111111, 0b10000000, 0b00000000, 0b00000111, 0b11111000,
	0b00000000, 0b00000000, 0b00000000, 0b00000111, 0b11110000,
	0b00000000, 0b00000000, 0b00000000, 0b00001111, 0b11110000,
	0b00000000, 0b00000000, 0b00000000, 0b00001111, 0b11100000,
	0b00000000, 0b00000000, 0b00000000, 0b00011111, 0b11100000,
	0b00000000, 0b00000000, 0b00000000, 0b01111111, 0b11000000,
	0b00000000, 0b00000000, 0b00000001, 0b11111111, 0b10000000,
	0b00000000, 0b00000000, 0b11111111, 0b11111111, 0b00000000,
	0b00000000, 0b00000000, 0b11111111, 0b11111110, 0b00000000,
	0b00000000, 0b00000000, 0b11111111, 0b11111000, 0b00000000,
	0b00000000, 0b00000000, 0b11111111, 0b11111111, 0b00000000,
	0b00000000, 0b00000000, 0b11111111, 0b11111111, 0b11000000,
	0b00000000, 0b00000000, 0b11111111, 0b11111111, 0b11100000,
	0b00000000, 0b00000000, 0b00000000, 0b01111111, 0b11110000,
	0b00000000, 0b00000000, 0b00000000, 0b00011111, 0b11111000,
	0b00000000, 0b00000000, 0b00000000, 0b00001111, 0b11111000,
	0b00000000, 0b00000000, 0b00000000, 0b00000111, 0b11111100,
	0b00000000, 0b00000000, 0b00000000, 0b00000011, 0b11111100,
	0b00000000, 0b00000000, 0b00000000, 0b00000001, 0b11111100,
	0b00000000, 0b00000000, 0b00000000, 0b00000001, 0b11111100,
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b11111100,
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b11111100,
	0b11111110, 0b00000000, 0b00000000, 0b00000000, 0b11111100,
	0b11111110, 0b00000000, 0b00000000, 0b00000000, 0b11111100,
	0b11111111, 0b00000000, 0b00000000, 0b00000000, 0b11111100,
	0b01111111, 0b00000000, 0b00000000, 0b00000000, 0b11111100,
	0b01111111, 0b00000000, 0b00000000, 0b00000000, 0b11111100,
	0b01111111, 0b00000000, 0b00000000, 0b00000001, 0b11111100,
	0b01111111, 0b10000000, 0b00000000, 0b00000001, 0b11111100,
	0b01111111, 0b10000000, 0b00000000, 0b00000011, 0b11111100,
	0b00111111, 0b11000000, 0b00000000, 0b00000011, 0b11111100,
	0b00111111, 0b11100000, 0b00000000, 0b00000111, 0b11111000,
	0b00011111, 0b11110000, 0b00000000, 0b00001111, 0b11111000,
	0b00011111, 0b11111100, 0b00000000, 0b00111111, 0b11110000,
	0b00001111, 0b11111111, 0b00000001, 0b11111111, 0b11110000,
	0b00000111, 0b11111111, 0b11111111, 0b11111111, 0b11100000,
	0b00000011, 0b11111111, 0b11111111, 0b11111111, 0b11000000,
	0b00000001, 0b11111111, 0b11111111, 0b11111111, 0b00000000,
	0b00000000, 0b01111111, 0b11111111, 0b11111100, 0b00000000,
	0b00000000, 0b00011111, 0b11111111, 0b11110000, 0b00000000
};

prog_uint8_t digit4Data[] PROGMEM = {
	0b00000000, 0b00000000, 0b00000000, 0b00111111, 0b00000000,
	0b00000000, 0b00000000, 0b00000000, 0b01111111, 0b00000000,
	0b00000000, 0b00000000, 0b00000000, 0b11111111, 0b00000000,
	0b00000000, 0b00000000, 0b00000000, 0b11111111, 0b00000000,
	0b00000000, 0b00000000, 0b00000001, 0b11111111, 0b00000000,
	0b00000000, 0b00000000, 0b00000011, 0b11111111, 0b00000000,
	0b00000000, 0b00000000, 0b00000011, 0b11111111, 0b00000000,
	0b00000000, 0b00000000, 0b00000111, 0b11111111, 0b00000000,
	0b00000000, 0b00000000, 0b00001111, 0b11111111, 0b00000000,
	0b00000000, 0b00000000, 0b00011111, 0b11111111, 0b00000000,
	0b00000000, 0b00000000, 0b00011111, 0b11111111, 0b00000000,
	0b00000000, 0b00000000, 0b00111111, 0b01111111, 0b00000000,
	0b00000000, 0b00000000, 0b01111110, 0b01111111, 0b00000000,
	0b00000000, 0b00000000, 0b01111100, 0b01111111, 0b00000000,
	0b00000000, 0b00000000, 0b11111100, 0b01111111, 0b00000000,
	0b00000000, 0b00000001, 0b11111000, 0b01111111, 0b00000000,
	0b00000000, 0b00000001, 0b11110000, 0b01111111, 0b00000000,
	0b00000000, 0b00000011, 0b11110000, 0b01111111, 0b00000000,
	0b00000000, 0b00000111, 0b11100000, 0b01111111, 0b00000000,
	0b00000000, 0b00001111, 0b11000000, 0b01111111, 0b00000000,
	0b00000000, 0b00001111, 0b11000000, 0b01111111, 0b00000000,
	0b00000000, 0b00011111, 0b10000000, 0b01111111, 0b00000000,
	0b00000000, 0b00111111, 0b00000000, 0b01111111, 0b00000000,
	0b00000000, 0b00111111, 0b00000000, 0b01111111, 0b00000000,
	0b00000000, 0b01111110, 0b00000000, 0b01111111, 0b00000000,
	0b00000000, 0b11111100, 0b00000000, 0b01111111, 0b00000000,
	0b00000000, 0b11111100, 0b00000000, 0b01111111, 0b00000000,
	0b00000001, 0b11111000, 0b00000000, 0b01111111, 0b00000000,
	0b00000011, 0b11110000, 0b00000000, 0b01111111, 0b00000000,
	0b00000111, 0b11110000, 0b00000000, 0b01111111, 0b00000000,
	0b00000111, 0b11100000, 0b00000000, 0b01111111, 0b00000000,
	0b00001111, 0b11000000, 0b00000000, 0b01111111, 0b00000000,
	0b00011111, 0b11000000, 0b00000000, 0b01111111, 0b00000000,
	0b00011111, 0b10000000, 0b00000000, 0b01111111, 0b00000000,
	0b00111111, 0b00000000, 0b00000000, 0b01111111, 0b00000000,
	0b01111111, 0b00000000, 0b00000000, 0b01111111, 0b00000000,
	0b01111110, 0b00000000, 0b00000000, 0b01111111, 0b00000000,
	0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b11111110,
	0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b11111110,
	0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b11111110,
	0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b11111110,
	0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b11111110,
	0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b11111110,
	0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b11111110,
	0b00000000, 0b00000000, 0b00000000, 0b01111111, 0b00000000,
	0b00000000, 0b00000000, 0b00000000, 0b01111111, 0b00000000,
	0b00000000, 0b00000000, 0b00000000, 0b01111111, 0b00000000,
	0b00000000, 0b00000000, 0b00000000, 0b01111111, 0b00000000,
	0b00000000, 0b00000000, 0b00000000, 0b01111111, 0b00000000,
	0b00000000, 0b00000000, 0b00000000, 0b01111111, 0b00000000,
	0b00000000, 0b00000000, 0b00000000, 0b01111111, 0b00000000,
	0b00000000, 0b00000000, 0b00000000, 0b01111111, 0b00000000,
	0b00000000, 0b00000000, 0b00000000, 0b01111111, 0b00000000,
	0b00000000, 0b00000000, 0b00000000, 0b01111111, 0b00000000,
	0b00000000, 0b00000000, 0b00000000, 0b01111111, 0b00000000,
	0b00000000, 0b00000000, 0b00000000, 0b01111111, 0b00000000,
	0b00000000, 0b00000000, 0b00000000, 0b01111111, 0b00000000
};

prog_uint8_t digit5Data[] PROGMEM = {
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
	0b00000001, 0b11111111, 0b11111111, 0b11111111, 0b11100000,
	0b00000011, 0b11111111, 0b11111111, 0b11111111, 0b11100000,
	0b00000011, 0b11111111, 0b11111111, 0b11111111, 0b11100000,
	0b00000011, 0b11111111, 0b11111111, 0b11111111, 0b11100000,
	0b00000011, 0b11111111, 0b11111111, 0b11111111, 0b11100000,
	0b00000011, 0b11111111, 0b11111111, 0b11111111, 0b11100000,
	0b00000111, 0b11110000, 0b00000000, 0b00000000, 0b00000000,
	0b00000111, 0b11110000, 0b00000000, 0b00000000, 0b00000000,
	0b00000111, 0b11100000, 0b00000000, 0b00000000, 0b00000000,
	0b00000111, 0b11100000, 0b00000000, 0b00000000, 0b00000000,
	0b00000111, 0b11100000, 0b00000000, 0b00000000, 0b00000000,
	0b00000111, 0b11100000, 0b00000000, 0b00000000, 0b00000000,
	0b00001111, 0b11100000, 0b00000000, 0b00000000, 0b00000000,
	0b00001111, 0b11000000, 0b00000000, 0b00000000, 0b00000000,
	0b00001111, 0b11000000, 0b00000000, 0b00000000, 0b00000000,
	0b00001111, 0b11000000, 0b00000000, 0b00000000, 0b00000000,
	0b00001111, 0b11000000, 0b00000000, 0b00000000, 0b00000000,
	0b00011111, 0b11000000, 0b00000000, 0b00000000, 0b00000000,
	0b00011111, 0b11000000, 0b11111110, 0b00000000, 0b00000000,
	0b00011111, 0b10000111, 0b11111111, 0b11100000, 0b00000000,
	0b00011111, 0b10011111, 0b11111111, 0b11111000, 0b00000000,
	0b00011111, 0b10111111, 0b11111111, 0b11111110, 0b00000000,
	0b00011111, 0b11111111, 0b11111111, 0b11111111, 0b00000000,
	0b00111111, 0b11111111, 0b11111111, 0b11111111, 0b10000000,
	0b00111111, 0b11111111, 0b00000111, 0b11111111, 0b11000000,
	0b00111111, 0b11111000, 0b00000000, 0b11111111, 0b11100000,
	0b00111111, 0b11100000, 0b00000000, 0b00111111, 0b11100000,
	0b00111111, 0b10000000, 0b00000000, 0b00011111, 0b11110000,
	0b00111111, 0b00000000, 0b00000000, 0b00001111, 0b11110000,
	0b00001110, 0b00000000, 0b00000000, 0b00000111, 0b11111000,
	0b00000000, 0b00000000, 0b00000000, 0b00000111, 0b11111000,
	0b00000000, 0b00000000, 0b00000000, 0b00000011, 0b11111000,
	0b00000000, 0b00000000, 0b00000000, 0b00000011, 0b11111000,
	0b00000000, 0b00000000, 0b00000000, 0b00000011, 0b11111000,
	0b00000000, 0b00000000, 0b00000000, 0b00000001, 0b11111000,
	0b00000000, 0b00000000, 0b00000000, 0b00000001, 0b11111000,
	0b00000000, 0b00000000, 0b00000000, 0b00000001, 0b11111000,
	0b00000000, 0b00000000, 0b00000000, 0b00000001, 0b11111000,
	0b00000000, 0b00000000, 0b00000000, 0b00000001, 0b11111000,
	0b00000000, 0b00000000, 0b00000000, 0b00000001, 0b11111000,
	0b00000000, 0b00000000, 0b00000000, 0b00000001, 0b11111000,
	0b11111110, 0b00000000, 0b00000000, 0b00000011, 0b11111000,
	0b11111110, 0b00000000, 0b00000000, 0b00000011, 0b11111000,
	0b11111110, 0b00000000, 0b00000000, 0b00000011, 0b11111000,
	0b11111111, 0b00000000, 0b00000000, 0b00000111, 0b11111000,
	0b01111111, 0b00000000, 0b00000000, 0b00000111, 0b11111000,
	0b01111111, 0b10000000, 0b00000000, 0b00001111, 0b11110000,
	0b01111111, 0b11000000, 0b00000000, 0b00011111, 0b11110000,
	0b00111111, 0b11100000, 0b00000000, 0b00111111, 0b11100000,
	0b00011111, 0b11111000, 0b00000000, 0b01111111, 0b11000000,
	0b00011111, 0b11111111, 0b00000011, 0b11111111, 0b11000000,
	0b00001111, 0b11111111, 0b11111111, 0b11111111, 0b10000000,
	0b00000111, 0b11111111, 0b11111111, 0b11111111, 0b00000000,
	0b00000001, 0b11111111, 0b11111111, 0b11111100, 0b00000000,
	0b00000000, 0b11111111, 0b11111111, 0b11111000, 0b00000000,
	0b00000000, 0b00111111, 0b11111111, 0b11000000, 0b00000000
};

prog_uint8_t digit6Data[] PROGMEM = {
	0b00000000, 0b00000001, 0b11111111, 0b11100000, 0b00000000,
	0b00000000, 0b00001111, 0b11111111, 0b11111100, 0b00000000,
	0b00000000, 0b00011111, 0b11111111, 0b11111110, 0b00000000,
	0b00000000, 0b01111111, 0b11111111, 0b11111111, 0b10000000,
	0b00000000, 0b11111111, 0b11111111, 0b11111111, 0b11000000,
	0b00000001, 0b11111111, 0b11111111, 0b11111111, 0b11000000,
	0b00000011, 0b11111111, 0b00000000, 0b01111111, 0b11100000,
	0b00000011, 0b11111100, 0b00000000, 0b00011111, 0b11110000,
	0b00000111, 0b11111000, 0b00000000, 0b00001111, 0b11110000,
	0b00001111, 0b11110000, 0b00000000, 0b00000111, 0b11110000,
	0b00001111, 0b11100000, 0b00000000, 0b00000111, 0b11111000,
	0b00011111, 0b11100000, 0b00000000, 0b00000011, 0b11111000,
	0b00011111, 0b11000000, 0b00000000, 0b00000011, 0b11111000,
	0b00011111, 0b11000000, 0b00000000, 0b00000011, 0b11111000,
	0b00111111, 0b10000000, 0b00000000, 0b00000000, 0b00000000,
	0b00111111, 0b10000000, 0b00000000, 0b00000000, 0b00000000,
	0b00111111, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
	0b01111111, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
	0b01111111, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
	0b01111111, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
	0b01111111, 0b00000000, 0b01111111, 0b11000000, 0b00000000,
	0b01111110, 0b00000011, 0b11111111, 0b11111000, 0b00000000,
	0b01111110, 0b00001111, 0b11111111, 0b11111110, 0b00000000,
	0b11111110, 0b00011111, 0b11111111, 0b11111111, 0b00000000,
	0b11111110, 0b00111111, 0b11111111, 0b11111111, 0b10000000,
	0b11111110, 0b01111111, 0b11111111, 0b11111111, 0b11000000,
	0b11111110, 0b11111111, 0b10000001, 0b11111111, 0b11100000,
	0b11111111, 0b11111100, 0b00000000, 0b00111111, 0b11110000,
	0b11111111, 0b11111000, 0b00000000, 0b00011111, 0b11111000,
	0b11111111, 0b11110000, 0b00000000, 0b00001111, 0b11111000,
	0b11111111, 0b11100000, 0b00000000, 0b00000111, 0b11111000,
	0b11111111, 0b11000000, 0b00000000, 0b00000011, 0b11111100,
	0b11111111, 0b11000000, 0b00000000, 0b00000011, 0b11111100,
	0b11111111, 0b10000000, 0b00000000, 0b00000001, 0b11111100,
	0b11111111, 0b10000000, 0b00000000, 0b00000001, 0b11111100,
	0b11111111, 0b10000000, 0b00000000, 0b00000001, 0b11111100,
	0b11111111, 0b00000000, 0b00000000, 0b00000000, 0b11111100,
	0b11111111, 0b00000000, 0b00000000, 0b00000000, 0b11111100,
	0b01111111, 0b00000000, 0b00000000, 0b00000000, 0b11111100,
	0b01111111, 0b00000000, 0b00000000, 0b00000000, 0b11111100,
	0b01111111, 0b00000000, 0b00000000, 0b00000000, 0b11111100,
	0b01111111, 0b00000000, 0b00000000, 0b00000000, 0b11111100,
	0b01111111, 0b10000000, 0b00000000, 0b00000001, 0b11111100,
	0b00111111, 0b10000000, 0b00000000, 0b00000001, 0b11111100,
	0b00111111, 0b10000000, 0b00000000, 0b00000001, 0b11111100,
	0b00111111, 0b11000000, 0b00000000, 0b00000011, 0b11111100,
	0b00011111, 0b11000000, 0b00000000, 0b00000011, 0b11111100,
	0b00011111, 0b11100000, 0b00000000, 0b00000111, 0b11111000,
	0b00001111, 0b11110000, 0b00000000, 0b00001111, 0b11111000,
	0b00001111, 0b11111000, 0b00000000, 0b00011111, 0b11110000,
	0b00000111, 0b11111100, 0b00000000, 0b00111111, 0b11110000,
	0b00000111, 0b11111111, 0b10000001, 0b11111111, 0b11100000,
	0b00000011, 0b11111111, 0b11111111, 0b11111111, 0b11000000,
	0b00000001, 0b11111111, 0b11111111, 0b11111111, 0b10000000,
	0b00000000, 0b11111111, 0b11111111, 0b11111111, 0b00000000,
	0b00000000, 0b00111111, 0b11111111, 0b11111100, 0b00000000,
	0b00000000, 0b00001111, 0b11111111, 0b11110000, 0b00000000
};

prog_uint8_t digit7Data[] PROGMEM = {
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
	0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b11110000,
	0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b11110000,
	0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b11110000,
	0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b11110000,
	0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b11110000,
	0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b11110000,
	0b00000000, 0b00000000, 0b00000000, 0b00000011, 0b11110000,
	0b00000000, 0b00000000, 0b00000000, 0b00000111, 0b11100000,
	0b00000000, 0b00000000, 0b00000000, 0b00001111, 0b11100000,
	0b00000000, 0b00000000, 0b00000000, 0b00011111, 0b11000000,
	0b00000000, 0b00000000, 0b00000000, 0b00111111, 0b10000000,
	0b00000000, 0b00000000, 0b00000000, 0b01111111, 0b00000000,
	0b00000000, 0b00000000, 0b00000000, 0b01111110, 0b00000000,
	0b00000000, 0b00000000, 0b00000000, 0b11111110, 0b00000000,
	0b00000000, 0b00000000, 0b00000001, 0b11111100, 0b00000000,
	0b00000000, 0b00000000, 0b00000011, 0b11111000, 0b00000000,
	0b00000000, 0b00000000, 0b00000011, 0b11111000, 0b00000000,
	0b00000000, 0b00000000, 0b00000111, 0b11110000, 0b00000000,
	0b00000000, 0b00000000, 0b00001111, 0b11100000, 0b00000000,
	0b00000000, 0b00000000, 0b00001111, 0b11100000, 0b00000000,
	0b00000000, 0b00000000, 0b00011111, 0b11000000, 0b00000000,
	0b00000000, 0b00000000, 0b00011111, 0b11000000, 0b00000000,
	0b00000000, 0b00000000, 0b00111111, 0b10000000, 0b00000000,
	0b00000000, 0b00000000, 0b01111111, 0b10000000, 0b00000000,
	0b00000000, 0b00000000, 0b01111111, 0b00000000, 0b00000000,
	0b00000000, 0b00000000, 0b11111111, 0b00000000, 0b00000000,
	0b00000000, 0b00000000, 0b11111110, 0b00000000, 0b00000000,
	0b00000000, 0b00000001, 0b11111110, 0b00000000, 0b00000000,
	0b00000000, 0b00000001, 0b11111100, 0b00000000, 0b00000000,
	0b00000000, 0b00000011, 0b11111100, 0b00000000, 0b00000000,
	0b00000000, 0b00000011, 0b11111000, 0b00000000, 0b00000000,
	0b00000000, 0b00000111, 0b11111000, 0b00000000, 0b00000000,
	0b00000000, 0b00000111, 0b11111000, 0b00000000, 0b00000000,
	0b00000000, 0b00000111, 0b11110000, 0b00000000, 0b00000000,
	0b00000000, 0b00001111, 0b11110000, 0b00000000, 0b00000000,
	0b00000000, 0b00001111, 0b11100000, 0b00000000, 0b00000000,
	0b00000000, 0b00001111, 0b11100000, 0b00000000, 0b00000000,
	0b00000000, 0b00011111, 0b11100000, 0b00000000, 0b00000000,
	0b00000000, 0b00011111, 0b11100000, 0b00000000, 0b00000000,
	0b00000000, 0b00011111, 0b11000000, 0b00000000, 0b00000000,
	0b00000000, 0b00111111, 0b11000000, 0b00000000, 0b00000000,
	0b00000000, 0b00111111, 0b11000000, 0b00000000, 0b00000000,
	0b00000000, 0b00111111, 0b10000000, 0b00000000, 0b00000000,
	0b00000000, 0b01111111, 0b10000000, 0b00000000, 0b00000000,
	0b00000000, 0b01111111, 0b10000000, 0b00000000, 0b00000000,
	0b00000000, 0b01111111, 0b10000000, 0b00000000, 0b00000000,
	0b00000000, 0b01111111, 0b00000000, 0b00000000, 0b00000000,
	0b00000000, 0b01111111, 0b00000000, 0b00000000, 0b00000000,
	0b00000000, 0b11111111, 0b00000000, 0b00000000, 0b00000000,
	0b00000000, 0b11111111, 0b00000000, 0b00000000, 0b00000000,
	0b00000000, 0b11111111, 0b00000000, 0b00000000, 0b00000000,
	0b00000000, 0b11111111, 0b00000000, 0b00000000, 0b00000000,
	0b00000000, 0b11111110, 0b00000000, 0b00000000, 0b00000000,
	0b00000000, 0b11111110, 0b00000000, 0b00000000, 0b00000000,
	0b00000000, 0b11111110, 0b00000000, 0b00000000, 0b00000000,
	0b00000000, 0b11111110, 0b00000000, 0b00000000, 0b00000000
};

prog_uint8_t digit8Data[] PROGMEM = {
	0b00000000, 0b00000111, 0b11111111, 0b11000000, 0b00000000,
	0b00000000, 0b00111111, 0b11111111, 0b11111000, 0b00000000,
	0b00000000, 0b01111111, 0b11111111, 0b11111100, 0b00000000,
	0b00000001, 0b11111111, 0b11111111, 0b11111111, 0b00000000,
	0b00000011, 0b11111111, 0b11111111, 0b11111111, 0b10000000,
	0b00000111, 0b11111111, 0b11111111, 0b11111111, 0b11000000,
	0b00000111, 0b11111110, 0b00000000, 0b11111111, 0b11000000,
	0b00001111, 0b11111000, 0b00000000, 0b00111111, 0b11100000,
	0b00011111, 0b11110000, 0b00000000, 0b00011111, 0b11100000,
	0b00011111, 0b11100000, 0b00000000, 0b00001111, 0b11110000,
	0b00011111, 0b11000000, 0b00000000, 0b00001111, 0b11110000,
	0b00011111, 0b11000000, 0b00000000, 0b00000111, 0b11110000,
	0b00111111, 0b11000000, 0b00000000, 0b00000111, 0b11110000,
	0b00111111, 0b11000000, 0b00000000, 0b00000111, 0b11110000,
	0b00111111, 0b11000000, 0b00000000, 0b00000111, 0b11111000,
	0b00111111, 0b11000000, 0b00000000, 0b00000111, 0b11110000,
	0b00011111, 0b11000000, 0b00000000, 0b00000111, 0b11110000,
	0b00011111, 0b11000000, 0b00000000, 0b00000111, 0b11110000,
	0b00011111, 0b11000000, 0b00000000, 0b00001111, 0b11110000,
	0b00011111, 0b11100000, 0b00000000, 0b00001111, 0b11100000,
	0b00001111, 0b11110000, 0b00000000, 0b00011111, 0b11100000,
	0b00000111, 0b11111000, 0b00000000, 0b00111111, 0b11000000,
	0b00000111, 0b11111100, 0b00000000, 0b01111111, 0b10000000,
	0b00000011, 0b11111111, 0b10000011, 0b11111111, 0b00000000,
	0b00000000, 0b11111111, 0b11111111, 0b11111110, 0b00000000,
	0b00000000, 0b01111111, 0b11111111, 0b11111100, 0b00000000,
	0b00000000, 0b01111111, 0b11111111, 0b11111100, 0b00000000,
	0b00000001, 0b11111111, 0b11111111, 0b11111111, 0b00000000,
	0b00000011, 0b11111111, 0b11111111, 0b11111111, 0b10000000,
	0b00000111, 0b11111111, 0b11111111, 0b11111111, 0b11100000,
	0b00001111, 0b11111110, 0b00000000, 0b11111111, 0b11100000,
	0b00011111, 0b11111000, 0b00000000, 0b00111111, 0b11110000,
	0b00111111, 0b11100000, 0b00000000, 0b00011111, 0b11111000,
	0b00111111, 0b11000000, 0b00000000, 0b00000111, 0b11111000,
	0b01111111, 0b11000000, 0b00000000, 0b00000111, 0b11111100,
	0b01111111, 0b10000000, 0b00000000, 0b00000011, 0b11111100,
	0b01111111, 0b00000000, 0b00000000, 0b00000001, 0b11111100,
	0b01111111, 0b00000000, 0b00000000, 0b00000001, 0b11111100,
	0b11111111, 0b00000000, 0b00000000, 0b00000001, 0b11111100,
	0b11111111, 0b00000000, 0b00000000, 0b00000001, 0b11111100,
	0b11111111, 0b00000000, 0b00000000, 0b00000001, 0b11111100,
	0b11111111, 0b00000000, 0b00000000, 0b00000001, 0b11111100,
	0b11111111, 0b00000000, 0b00000000, 0b00000001, 0b11111100,
	0b11111111, 0b00000000, 0b00000000, 0b00000001, 0b11111100,
	0b01111111, 0b00000000, 0b00000000, 0b00000001, 0b11111100,
	0b01111111, 0b00000000, 0b00000000, 0b00000011, 0b11111100,
	0b01111111, 0b10000000, 0b00000000, 0b00000011, 0b11111100,
	0b00111111, 0b11000000, 0b00000000, 0b00000111, 0b11111000,
	0b00111111, 0b11100000, 0b00000000, 0b00001111, 0b11111000,
	0b00111111, 0b11110000, 0b00000000, 0b00011111, 0b11111000,
	0b00011111, 0b11111000, 0b00000000, 0b00111111, 0b11110000,
	0b00001111, 0b11111111, 0b00000001, 0b11111111, 0b11100000,
	0b00000111, 0b11111111, 0b11111111, 0b11111111, 0b11000000,
	0b00000011, 0b11111111, 0b11111111, 0b11111111, 0b10000000,
	0b00000001, 0b11111111, 0b11111111, 0b11111111, 0b00000000,
	0b00000000, 0b01111111, 0b11111111, 0b11111100, 0b00000000,
	0b00000000, 0b00011111, 0b11111111, 0b11110000, 0b00000000
};

prog_uint8_t digit9Data[] PROGMEM = {
	0b00000000, 0b00000111, 0b11111111, 0b10000000, 0b00000000,
	0b00000000, 0b00111111, 0b11111111, 0b11110000, 0b00000000,
	0b00000000, 0b11111111, 0b11111111, 0b11111100, 0b00000000,
	0b00000001, 0b11111111, 0b11111111, 0b11111110, 0b00000000,
	0b00000111, 0b11111111, 0b11111111, 0b11111111, 0b00000000,
	0b00001111, 0b11111111, 0b11111111, 0b11111111, 0b10000000,
	0b00001111, 0b11111100, 0b00000001, 0b11111111, 0b11000000,
	0b00011111, 0b11110000, 0b00000000, 0b01111111, 0b11000000,
	0b00111111, 0b11100000, 0b00000000, 0b00111111, 0b11100000,
	0b00111111, 0b11000000, 0b00000000, 0b00011111, 0b11100000,
	0b01111111, 0b10000000, 0b00000000, 0b00001111, 0b11110000,
	0b01111111, 0b10000000, 0b00000000, 0b00001111, 0b11110000,
	0b01111111, 0b00000000, 0b00000000, 0b00000111, 0b11110000,
	0b11111111, 0b00000000, 0b00000000, 0b00000111, 0b11111000,
	0b11111111, 0b00000000, 0b00000000, 0b00000011, 0b11111000,
	0b11111110, 0b00000000, 0b00000000, 0b00000011, 0b11111000,
	0b11111110, 0b00000000, 0b00000000, 0b00000011, 0b11111000,
	0b11111110, 0b00000000, 0b00000000, 0b00000011, 0b11111000,
	0b11111110, 0b00000000, 0b00000000, 0b00000011, 0b11111000,
	0b11111110, 0b00000000, 0b00000000, 0b00000011, 0b11111000,
	0b11111110, 0b00000000, 0b00000000, 0b00000011, 0b11111000,
	0b11111110, 0b00000000, 0b00000000, 0b00000011, 0b11111000,
	0b11111111, 0b00000000, 0b00000000, 0b00000011, 0b11111000,
	0b11111111, 0b00000000, 0b00000000, 0b00000111, 0b11111000,
	0b01111111, 0b00000000, 0b00000000, 0b00000111, 0b11111000,
	0b01111111, 0b10000000, 0b00000000, 0b00001111, 0b11111000,
	0b01111111, 0b10000000, 0b00000000, 0b00001111, 0b11111000,
	0b00111111, 0b11000000, 0b00000000, 0b00011111, 0b11111000,
	0b00111111, 0b11100000, 0b00000000, 0b00111111, 0b11111000,
	0b00011111, 0b11110000, 0b00000000, 0b01111111, 0b11111000,
	0b00011111, 0b11111100, 0b00000001, 0b11111111, 0b11111000,
	0b00001111, 0b11111111, 0b11111111, 0b11111101, 0b11111000,
	0b00000111, 0b11111111, 0b11111111, 0b11111001, 0b11111000,
	0b00000011, 0b11111111, 0b11111111, 0b11110001, 0b11111000,
	0b00000001, 0b11111111, 0b11111111, 0b11100001, 0b11111000,
	0b00000000, 0b01111111, 0b11111111, 0b10000001, 0b11111000,
	0b00000000, 0b00011111, 0b11111110, 0b00000001, 0b11111000,
	0b00000000, 0b00000000, 0b00000000, 0b00000001, 0b11111000,
	0b00000000, 0b00000000, 0b00000000, 0b00000001, 0b11111000,
	0b00000000, 0b00000000, 0b00000000, 0b00000011, 0b11111000,
	0b00000000, 0b00000000, 0b00000000, 0b00000011, 0b11111000,
	0b00000000, 0b00000000, 0b00000000, 0b00000011, 0b11111000,
	0b00000000, 0b00000000, 0b00000000, 0b00000011, 0b11111000,
	0b01111111, 0b00000000, 0b00000000, 0b00000111, 0b11110000,
	0b01111111, 0b00000000, 0b00000000, 0b00000111, 0b11110000,
	0b01111111, 0b00000000, 0b00000000, 0b00001111, 0b11110000,
	0b00111111, 0b10000000, 0b00000000, 0b00001111, 0b11100000,
	0b00111111, 0b10000000, 0b00000000, 0b00011111, 0b11100000,
	0b00111111, 0b11000000, 0b00000000, 0b00111111, 0b11000000,
	0b00011111, 0b11100000, 0b00000000, 0b01111111, 0b11000000,
	0b00011111, 0b11111000, 0b00000000, 0b11111111, 0b10000000,
	0b00001111, 0b11111110, 0b00000111, 0b11111111, 0b00000000,
	0b00000111, 0b11111111, 0b11111111, 0b11111111, 0b00000000,
	0b00000011, 0b11111111, 0b11111111, 0b11111110, 0b00000000,
	0b00000001, 0b11111111, 0b11111111, 0b11111100, 0b00000000,
	0b00000000, 0b11111111, 0b11111111, 0b11110000, 0b00000000,
	0b00000000, 0b00111111, 0b11111111, 0b11000000, 0b00000000
};

prog_uint8_t digitColonData[] PROGMEM = {
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b11111111,
	0b11111111,
	0b11111111,
	0b11111111,
	0b11111111,
	0b11111111,
	0b11111111,
	0b11111111,
	0b11111111,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b11111111,
	0b11111111,
	0b11111111,
	0b11111111,
	0b11111111,
	0b11111111,
	0b11111111,
	0b11111111,
	0b11111111
};

// An array of pointers to that data

prog_uint8_t *digitData[] PROGMEM = {
	digit0Data, digit1Data, digit2Data, digit3Data, digit4Data, digit5Data,
	digit6Data, digit7Data, digit8Data, digit9Data, digitColonData
};
