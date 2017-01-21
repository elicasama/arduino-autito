#include "main.h"

Car* car;
BluetoothModule* bluetooth;

void setup() {
	car = new Car(config);
	bluetooth = new BluetoothModule(config.BLUETOOTH);
	bluetooth->begin();
}

void loop() {
	uint8_t* bytes = bluetooth->readPacket(sizeof(CarCommand));
	if (bytes == NULL) return;

	CarCommand* command = (CarCommand*) bytes;

	if (command->direction == 243 || command->speed == 0) {
		car->setSpeed(0);
	} else {
		int sign = command->direction == 241 ? 1 : -1;
		car->setSpeed(command->speed * sign);

		int direction = command->angle == 88
			? 0
			: map(command->angle, 65, 110, -255, 255);
		car->setDirection(direction);
	}

	delete bytes;
}
