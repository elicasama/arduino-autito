#include "main.h"

Car* car;
RemoteCarController* controller;

void setup() {
	car = new Car(config);
	controller = new RemoteCarController(car, config);
	controller->begin();
}

void loop() {
	controller->update();
}
