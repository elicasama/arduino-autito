#include "main.h"

void setPwmFrequencies();
Car* car;

void setup() {
	setPwmFrequencies();
	car = new Car(config);
}

void loop() {
	car->start();
	delay(2000);
	car->stop();
	delay(2000);
}


void setPwmFrequencies() {
	int divisor = 256;
	setPwmFrequency(config.PINS_LOWER_LEFT.ENABLE, divisor);
	setPwmFrequency(config.PINS_LOWER_RIGHT.ENABLE, divisor);
	setPwmFrequency(config.PINS_UPPER_RIGHT.ENABLE, divisor);
	setPwmFrequency(config.PINS_UPPER_LEFT.ENABLE, divisor);
}
