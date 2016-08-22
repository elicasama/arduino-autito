#include "Car.h"
using namespace robots;

Car::Car(Config config) {
	this->backWheelPair = new WheelPair(config.PINS_LOWER_LEFT, config.PINS_LOWER_RIGHT);
	this->frontWheelPair = new WheelPair(config.PINS_UPPER_LEFT, config.PINS_UPPER_RIGHT);
}

Car::~Car() {
	delete this->backWheelPair;
	delete this->frontWheelPair;
}

void Car::setSpeed(int speed) {
	this->backWheelPair->setSpeed(speed);
	this->frontWheelPair->setSpeed(speed);
}

void Car::setDirection(int direction) {
	this->backWheelPair->setDirection(direction);
	this->frontWheelPair->setDirection(direction);
}
