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
	int divisor = 64;
	setPwmFrequency(config.PIN_LOWER_RIGHT_E, divisor);
	setPwmFrequency(config.PIN_UPPER_RIGHT_E, divisor);
	setPwmFrequency(config.PIN_UPPER_LEFT_E, divisor);
	setPwmFrequency(config.PIN_LOWER_LEFT_E, divisor);
}
