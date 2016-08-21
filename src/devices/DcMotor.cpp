#include "DcMotor.h"
using namespace devices;

DcMotor::DcMotor(short enablePin, short control1Pin, short control2Pin) {
	this->enablePin = enablePin;
	this->control1Pin = control1Pin;
	this->control2Pin = control2Pin;

	short pins[] = { enablePin, control1Pin, control2Pin };
	foreach(short* pin, pins) pinMode(*pin, OUTPUT);

	this->goForward();
}

DcMotor::~DcMotor() { }

void DcMotor::start(int speed) {
	const int MIN_SPEED = 100;
	int finalSpeed = map(speed, 0, 255, MIN_SPEED, 255);
	analogWrite(this->enablePin, finalSpeed);
}

void DcMotor::stop() {
	digitalWrite(this->enablePin, LOW);
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
