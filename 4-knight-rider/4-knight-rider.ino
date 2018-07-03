#include <Adafruit_NeoPixel.h>

#define PIN 6
#define AMOUNT_OF_LEDS 10
#define DELAY 100

Adafruit_NeoPixel strip = Adafruit_NeoPixel(AMOUNT_OF_LEDS, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  strip.begin();
  strip.show(); // Initialize all pixels to 'off'
}

void loop() {
  for(uint8_t i = 0; i < AMOUNT_OF_LEDS; i++) {
    for(uint8_t i2 = 0; i2 < AMOUNT_OF_LEDS; i2++) {
      if(i == i2) {
        strip.setPixelColor(i2, strip.Color(255, 0, 0));
      } else {
        strip.setPixelColor(i2, 0);
      }
    }
    strip.show();
    delay(DELAY);  
  }

  for(uint8_t i = 0; i < AMOUNT_OF_LEDS; i++) {
    for(uint8_t i2 = 0; i2 < AMOUNT_OF_LEDS; i2++) {
      if(i == i2) {
        strip.setPixelColor(AMOUNT_OF_LEDS - i2 - 1, strip.Color(0, 255, 0));
      } else {
        strip.setPixelColor(AMOUNT_OF_LEDS - i2 - 1, 0);
      }
    }
    strip.show();
    delay(DELAY);  
  }
}
