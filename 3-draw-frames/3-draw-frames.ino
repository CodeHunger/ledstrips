#include <Adafruit_NeoPixel.h>

#define PIN 6
#define AMOUNT_OF_LEDS 10
#define DELAY 1000

Adafruit_NeoPixel strip = Adafruit_NeoPixel(AMOUNT_OF_LEDS, PIN, NEO_GRB + NEO_KHZ800);

uint32_t frame[AMOUNT_OF_LEDS] = {
  0x000000,
  0x220000,
  0x660000,
  0xaa0000,
  0xcc0000,
  0xff0000,
  0xff2222,
  0xff4444,
  0xff8888,
  0xffffff
};

void setup() {
  strip.begin();
  strip.show(); // Initialize all pixels to 'off'
}

void loop() {
  drawFrame();
  delay(DELAY);

  clearFrame();
  delay(DELAY);
}

void drawFrame() {
  for(uint8_t i = 0; i < AMOUNT_OF_LEDS; i++) {
    strip.setPixelColor(i, hexToColor(frame[i]));    
  }

  strip.show();
}

void clearFrame() {
  for(uint8_t i = 0; i < AMOUNT_OF_LEDS; i++) {
    strip.setPixelColor(i, 0);    
  }

  strip.show();
  
}

uint32_t hexToColor(uint32_t color) {
  uint8_t red = color >> 16 & 255;
  uint8_t green = color >> 8 & 255;
  uint8_t blue = color & 255;
  return strip.Color(red, green, blue);
}

