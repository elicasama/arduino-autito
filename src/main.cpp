#include "main.h"

void setPwmFrequencies();
Car* car;

void setup() {
	setPwmFrequencies();
	car = new Car(config);
	car->setSpeed(255);
}

void loop() {
	car->setDirection(0);
	delay(1000);
	car->setDirection(-255);
	delay(1000);
	car->setDirection(255);
	delay(1000);
}


void setPwmFrequencies() {
	int divisor = 256;
	setPwmFrequency(config.PINS_LOWER_LEFT.ENABLE, divisor);
	setPwmFrequency(config.PINS_LOWER_RIGHT.ENABLE, divisor);
	setPwmFrequency(config.PINS_UPPER_RIGHT.ENABLE, divisor);
	setPwmFrequency(config.PINS_UPPER_LEFT.ENABLE, divisor);
}
