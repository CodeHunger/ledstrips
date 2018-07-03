#include <Adafruit_NeoPixel.h>

#define PIN 6
#define AMOUNT_OF_LEDS 10
#define DELAY 250

Adafruit_NeoPixel strip = Adafruit_NeoPixel(AMOUNT_OF_LEDS, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  strip.begin();
  strip.show(); // Initialize all pixels to 'off'
}

void loop() {
  strip.setPixelColor(0, strip.Color(255, 0, 0));
  strip.show();
  delay(DELAY);
  strip.setPixelColor(0, strip.Color(0, 0, 0));
  strip.show();
  delay(DELAY);
  strip.setPixelColor(3, strip.Color(0, 255, 0));
  strip.show();
  delay(DELAY);
  strip.setPixelColor(3, strip.Color(255, 255, 0));
  strip.show();
  delay(DELAY);
  strip.setPixelColor(3, strip.Color(255, 255, 255));
  strip.show();
  delay(DELAY);
  strip.setPixelColor(3, strip.Color(0,0,0));
  strip.show();
  delay(DELAY);
}
