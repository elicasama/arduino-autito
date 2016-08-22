#include "WheelPair.h"
using namespace robots;

WheelPair::WheelPair(WheelPins leftWheelPins, WheelPins rightWheelPins) {
	this->leftWheel = new DcMotor(leftWheelPins.ENABLE, leftWheelPins.CONTROL1, leftWheelPins.CONTROL2);
	this->rightWheel = new DcMotor(rightWheelPins.ENABLE, rightWheelPins.CONTROL1, rightWheelPins.CONTROL2);
}

WheelPair::~WheelPair() {
	delete this->leftWheel;
	delete this->rightWheel;
}

void WheelPair::setSpeed(int speed) {
	this->leftWheel->setSpeed(speed);
	this->rightWheel->setSpeed(speed);
}

void WheelPair::setDirection(int direction) {
	// TODO
}
