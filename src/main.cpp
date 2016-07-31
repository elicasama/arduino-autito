#include "main.h"

DcMotor* bottomRightWheel;
DcMotor* topRightWheel;
DcMotor* topLeftWheel;
DcMotor* bottomLeftWheel;

void setup() {
	bottomRightWheel = new DcMotor(3, 2, 4);
	topRightWheel = new DcMotor(9, 8, 7);
	topLeftWheel = new DcMotor(11, 12, 13);
	bottomLeftWheel = new DcMotor(10, 5, 6);
}

void loop() {
	bottomRightWheel->start();
	delay(1000);
	bottomRightWheel->stop();
	topRightWheel->start();
	delay(1000);
	topRightWheel->stop();
	topLeftWheel->start();
	delay(1000);
	topLeftWheel->stop();
	bottomLeftWheel->start();
	delay(1000);
	bottomLeftWheel->stop();
}
