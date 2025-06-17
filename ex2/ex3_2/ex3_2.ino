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
  one.lcd1("Texas Robotics");
  one.lcd2("Academy");
  delay(1000);
  one.lcd1("Hook 'em");
  one.lcd2("Horns!");
  delay(1000);
}
