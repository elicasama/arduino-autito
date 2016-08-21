#include "Car.h"
using namespace robots;

Car::Car(Config config) {
	this->lowerRightWheel = new DcMotor(config.PINS_LOWER_RIGHT.ENABLE, config.PINS_LOWER_RIGHT.CONTROL1, config.PINS_LOWER_RIGHT.CONTROL2);
	this->upperRightWheel = new DcMotor(config.PINS_UPPER_RIGHT.ENABLE, config.PINS_UPPER_RIGHT.CONTROL1, config.PINS_UPPER_RIGHT.CONTROL2);
	this->upperLeftWheel = new DcMotor(config.PINS_UPPER_LEFT.ENABLE, config.PINS_UPPER_LEFT.CONTROL1, config.PINS_UPPER_LEFT.CONTROL2);
	this->lowerLeftWheel = new DcMotor(config.PINS_LOWER_LEFT.ENABLE, config.PINS_LOWER_LEFT.CONTROL1, config.PINS_LOWER_LEFT.CONTROL2);
}

Car::~Car() {
	delete this->lowerRightWheel;
	delete this->upperRightWheel;
	delete this->upperLeftWheel;
	delete this->lowerLeftWheel;
}

void Car::start() {
	int speed = 255;
	this->lowerRightWheel->start(speed);
	this->upperRightWheel->start(speed);
	this->upperLeftWheel->start(speed);
	this->lowerLeftWheel->start(speed);
}

void Car::stop() {
	this->lowerRightWheel->stop();
	this->upperRightWheel->stop();
	this->upperLeftWheel->stop();
	this->lowerLeftWheel->stop();
}
