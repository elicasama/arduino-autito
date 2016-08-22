#include "DcMotor.h"
using namespace devices;

DcMotor::DcMotor(int enablePin, int control1Pin, int control2Pin) {
	this->enablePin = enablePin;
	this->control1Pin = control1Pin;
	this->control2Pin = control2Pin;

	int pins[] = { enablePin, control1Pin, control2Pin };
	foreach(int* pin, pins) pinMode(*pin, OUTPUT);

	this->goForward();
}

DcMotor::~DcMotor() { }

void DcMotor::setSpeed(int speed) {
	int sense = signum(speed);
	int amount = abs(speed);

	switch (sense) {
		case 1:
			this->goForward();
			break;

		case -1:
			this->goReverse();
			break;

		default:
			digitalWrite(this->enablePin, LOW);
			return;
	}

	const int MIN_SPEED = 150;
	int finalSpeed = map(amount, 0, 255, MIN_SPEED, 255);
	analogWrite(this->enablePin, finalSpeed);
}

void DcMotor::goForward() {
	this->changeControlPins(HIGH, LOW);
}

void DcMotor::goReverse() {
	this->changeControlPins(LOW, HIGH);
}

void DcMotor::changeControlPins(bool control1, bool control2) {
	digitalWrite(this->control1Pin, control1);
	digitalWrite(this->control2Pin, control2);
}
