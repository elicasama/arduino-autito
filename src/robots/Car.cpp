#include "Car.h"
using namespace robots;

Car::Car(Config config) {
	this->frontWheelPair = new WheelPair(config.WHEEL_UPPER_LEFT, config.WHEEL_UPPER_RIGHT);
	this->backWheelPair = new WheelPair(config.WHEEL_LOWER_LEFT, config.WHEEL_LOWER_RIGHT);
}

Car::~Car() {
	delete this->frontWheelPair;
	delete this->backWheelPair;
}

void Car::setSpeed(int speed) {
	this->frontWheelPair->setSpeed(speed);
	this->backWheelPair->setSpeed(speed);
}

void Car::setDirection(int direction) {
	this->frontWheelPair->setDirection(direction);
	this->backWheelPair->setDirection(direction);
}
