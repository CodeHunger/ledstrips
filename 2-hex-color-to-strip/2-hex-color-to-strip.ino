#include <Adafruit_NeoPixel.h>

#define PIN 6
#define AMOUNT_OF_LEDS 10
#define DELAY 250

Adafruit_NeoPixel strip = Adafruit_NeoPixel(10, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  strip.begin();
  strip.show(); // Initialize all pixels to 'off'
}

void loop() {
  strip.setPixelColor(0, hexToColor(0xff0000));
  strip.show();
  delay(DELAY);
  strip.setPixelColor(0, hexToColor(0x00ff00));
  strip.show();
  delay(DELAY);
  strip.setPixelColor(0, hexToColor(0x0000ff));
  strip.show();
  delay(DELAY);
  strip.setPixelColor(0, hexToColor(0xff00ff));
  strip.show();
  delay(DELAY); 
}

uint32_t hexToColor(uint32_t color) {
  uint8_t red = color >> 16 & 255;
  uint8_t green = color >> 8 & 255;
  uint8_t blue = color & 255;
  return strip.Color(red, green, blue);
}

