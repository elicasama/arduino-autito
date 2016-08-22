#include "WheelPair.h"
using namespace robots;

WheelPair::WheelPair(WheelPins leftWheelPins, WheelPins rightWheelPins) {
	this->leftWheel = new DcMotor(leftWheelPins.ENABLE, leftWheelPins.CONTROL1, leftWheelPins.CONTROL2);
	this->rightWheel = new DcMotor(rightWheelPins.ENABLE, rightWheelPins.CONTROL1, rightWheelPins.CONTROL2);
	this->speed = 0;
}

WheelPair::~WheelPair() {
	delete this->leftWheel;
	delete this->rightWheel;
}

void WheelPair::setSpeed(int speed) {
	this->leftWheel->setSpeed(speed);
	this->rightWheel->setSpeed(speed);
	this->speed = speed;
}

void WheelPair::setDirection(int direction) {
	int sense = signum(direction);
	int amount = abs(direction);

	if (sense == 0) {
		this->setSpeed(this->speed);
		return;
	}

	int speedVariation = 1 - amount / 255;
	DcMotor* wheelToSlowDown = (sense < 0) ? this->leftWheel : this->rightWheel;
	DcMotor* wheelToKeepSpeed = (sense < 0) ? this->rightWheel : this->leftWheel;

	wheelToSlowDown->setSpeed(this->speed * speedVariation);
	wheelToKeepSpeed->setSpeed(this->speed);
}
