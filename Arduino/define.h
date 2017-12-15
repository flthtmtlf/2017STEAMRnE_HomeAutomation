
#ifndef DEFINE_H
#define DEFINE_H

#define OLED_RESET 4
#define NUMFLAKES 10
#define XPOS 0
#define YPOS 1
#define DELTAY 2
#define LOGO16_GLCD_HEIGHT 16
#define LOGO16_GLCD_WIDTH  16

static const unsigned char PROGMEM logo16_glcd_bmp[] = {
  B00000000, B11000000,
  B00000001, B11000000,
  B00000001, B11000000,
  B00000011, B11100000,
  B11110011, B11100000,
  B11111110, B11111000,
  B01111110, B11111111,
  B00110011, B10011111,
  B00011111, B11111100,
  B00001101, B01110000,
  B00011011, B10100000,
  B00111111, B11100000,
  B00111111, B11110000,
  B01111100, B11110000,
  B01110000, B01110000,
  B00000000, B00110000
};

void p(String _txt) {
  if (DEBUG) {
    Serial.print(_txt);
  }
  return;
}

void wait(unsigned int sec) {
  delay(sec * 1000);
}

void save2digits(String *str, int number) {
  if (number >= 0 && number < 10) {
    *str += '0';
  }
  *str += String(number);
}

#endif

