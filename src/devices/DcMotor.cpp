#include "DcMotor.h"
using namespace devices;

DcMotor::DcMotor(short enablePin, short control1Pin, short control2Pin) {
	this->enablePin = enablePin;
	this->control1Pin = control1Pin;
	this->control2Pin = control2Pin;

	// TODO: foreach
	pinMode(this->enablePin, OUTPUT);
	pinMode(this->control1Pin, OUTPUT);
	pinMode(this->control2Pin, OUTPUT);

	// TODO: abstraer
	digitalWrite(this->control1Pin, HIGH);
	digitalWrite(this->control2Pin, LOW);
}

DcMotor::~DcMotor() { }

void DcMotor::start() {
	digitalWrite(this->enablePin, HIGH);
}

void DcMotor::stop() {
	digitalWrite(this->enablePin, LOW);
}
