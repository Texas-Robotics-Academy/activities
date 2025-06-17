#include <BnrOneAPlus.h>
#include <SPI.h>

#define SSPIN 2

BnrOneAPlus one;

class MotorMenu {
public:
  MotorMenu() {
    _lastButton = 0;
    _whichMotor = 0;
  }

  void buttonPress(byte button) {
  }

  void runMotors() {
  }

  void printMenu() {
  }

protected:
  byte _lastButton;
  bool _whichMotor;
  int _leftSpeed, _rightSpeed;
};

MotorMenu menu;

void setup() {
  Serial.begin(115200);
  one.spiConnect(SSPIN);
  one.stop();
}

void loop() {
  //menu.buttonPress();
  menu.runMotors();
  menu.printMenu();
}
