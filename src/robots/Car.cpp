#include "Car.h"
using namespace robots;

Car::Car(Config config) {
	this->backWheelPair = new WheelPair(config.PINS_LOWER_RIGHT, config.PINS_UPPER_RIGHT);
	this->frontWheelPair = new WheelPair(config.PINS_LOWER_LEFT, config.PINS_UPPER_LEFT);
}

Car::~Car() {
	delete this->backWheelPair;
	delete this->frontWheelPair;
}

void Car::start() {
	int speed = 255;
	this->backWheelPair->start(speed);
	this->frontWheelPair->start(speed);
}

void Car::stop() {
	this->backWheelPair->stop();
	this->frontWheelPair->stop();
}
