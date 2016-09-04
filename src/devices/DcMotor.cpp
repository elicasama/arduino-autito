#include "DcMotor.h"
using namespace devices;

DcMotor::DcMotor(int motorNumber, int minSpeed) {
	// the options are:
	// MOTOR12_64KHZ, MOTOR12_8KHZ, MOTOR12_2KHZ, MOTOR12_1KHZ
	this->motor = new AF_DCMotor(motorNumber, MOTOR12_64KHZ);
	this->minSpeed = minSpeed;
}

DcMotor::~DcMotor() {
	delete this->motor;
}

void DcMotor::setSpeed(int speed) {
	int sense = signum(speed);
	int amount = abs(speed);

	if (sense == 0) {
		this->motor->run(RELEASE);
		return;
	}

	switch (sense) {
		case 1:
			this->motor->run(FORWARD);
			break;

		case -1:
			this->motor->run(BACKWARD);
			break;
	}

	int finalSpeed = map(amount, 0, 255, this->minSpeed, 255);
	motor->setSpeed(finalSpeed);
}
