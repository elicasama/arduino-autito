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

void Car::start() {
	this->backWheelPair->setSpeed(1);
	this->frontWheelPair->setSpeed(1);
}

void Car::stop() {
	this->backWheelPair->setSpeed(0);
	this->frontWheelPair->setSpeed(0);
}
