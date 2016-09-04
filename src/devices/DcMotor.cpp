#include "DcMotor.h"
using namespace devices;

DcMotor::DcMotor(int motorNumber) {
	this->motor = new AF_DCMotor(motorNumber, MOTOR12_64KHZ);
}

DcMotor::~DcMotor() { }

void DcMotor::setSpeed(int speed) {
	int sense = signum(speed);
	int amount = abs(speed);

	if (sense == 0) {
		this->motor.run(RELEASE);
		return;
	}

	switch (sense) {
		case 1:
			this->motor.run(FORWARD);
			break;

		case -1:
			this->motor.run(BACKWARD);
			break;
	}

	motor.setSpeed(amount);
}
