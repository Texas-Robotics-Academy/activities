#include <BnrOneAPlus.h>
#include <SPI.h>

#define SSPIN 2

BnrOneAPlus one;

class LineFollowerInterface {
public:
  LineFollowerInterface() {}

  void readLineFollower() {
  }

  void printSerial() {
  }

protected:
};

LineFollowerInterface lineFollowerInterface;

void setup() {
  Serial.begin(115200);
  one.spiConnect(SSPIN);
  one.stop();
}

void loop() {
  lineFollowerInterface.readLineFollower();
  lineFollowerInterface.printSerial();
}
