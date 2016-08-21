#include "Car.h"
using namespace robots;

Car::Car(Config config) {
	this->lowerRightWheel = new DcMotor(config.PIN_LOWER_RIGHT_E, config.PIN_LOWER_RIGHT_I1, config.PIN_LOWER_RIGHT_I2);
	this->upperRightWheel = new DcMotor(config.PIN_UPPER_RIGHT_E, config.PIN_UPPER_RIGHT_I1, config.PIN_UPPER_RIGHT_I2);
	this->upperLeftWheel = new DcMotor(config.PIN_UPPER_LEFT_E, config.PIN_UPPER_LEFT_I1, config.PIN_UPPER_LEFT_I2);
	this->lowerLeftWheel = new DcMotor(config.PIN_LOWER_LEFT_E, config.PIN_LOWER_LEFT_I1, config.PIN_LOWER_LEFT_I2);
}

Car::~Car() { }

void Car::start() {
	int speed = 255;
	this->lowerRightWheel->start(speed);
	this->upperRightWheel->start(speed);
	this->upperLeftWheel->start(speed);
	this->lowerLeftWheel->start(speed);
}
