#include "WS2812B.h"

//breathe

#define NUM_OF_LEDS 8
#define NP_PIN 12

WS2812B led(NP_PIN, NUM_OF_LEDS);
//WS2812B led(SPI_MOSI, NUM_OF_LEDS);

void setup() {
    Serial.begin(115200);
    Serial.println("WS2812B test");
    led.begin();

}

int mystep = 20;
void loop() {

    for (int k=0; k<=255; k+=mystep)
    {      
      led.fill(k, 0, 0, 0, NUM_OF_LEDS);
      led.show();
      delay(100);
    }

    for (int k=255; k>=0; k-=mystep)
    {      
      led.fill(k, 0, 0, 0, NUM_OF_LEDS);
      led.show();
      delay(100);
    }

}
