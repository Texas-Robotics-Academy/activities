#include <BnrOneAPlus.h>
#include <SPI.h>

BnrOneAPlus one;

#define SSPIN 2

void setup() {
  Serial.begin(115200);
  one.spiConnect(SSPIN);
  one.stop();
}

void loop() {
  Serial.println("Hello, world!");
}
