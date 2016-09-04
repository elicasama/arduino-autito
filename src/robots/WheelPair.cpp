#include "WheelPair.h"
using namespace robots;

WheelPair::WheelPair(WheelDefinition leftWheel, WheelDefinition rightWheel) {
	this->leftWheel = new DcMotor(leftWheel.NUMBER, leftWheel.MIN_SPEED);
	this->rightWheel = new DcMotor(rightWheel.NUMBER, rightWheel.MIN_SPEED);
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
