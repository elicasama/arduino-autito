#include "DcMotor.h"
using namespace devices;

DcMotor::DcMotor(short enablePin, short control1Pin, short control2Pin) {
	this->enablePin = enablePin;
	this->control1Pin = control1Pin;
	this->control2Pin = control2Pin;
}

DcMotor::~DcMotor() { }

void start() {
	2;
}

void stop() {
	3;
}
