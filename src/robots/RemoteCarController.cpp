#include "RemoteCarController.h"
using namespace robots;

RemoteCarController::RemoteCarController(Car* car, Config config) {
	this->car = car;
	this->bluetooth = new BluetoothModule(config.BLUETOOTH);
	this->stopWhenIddle = config.STOP_WHEN_IDDLE;
	this->updateCount = 0;
	this->lastCommand = 0;
}

RemoteCarController::~RemoteCarController() {
	delete this->car;
	delete this->bluetooth;
}

void RemoteCarController::begin() {
	this->bluetooth->begin();
}

void RemoteCarController::update() {
	this->trackLastCommand();

	CarCommand* command = (CarCommand*) this->bluetooth->readPacket(
		sizeof(CarCommand)
	);
	if (command == NULL) return;

	this->lastCommand = this->updateCount;
	car->setSpeed(this->getSpeed(command));
	car->setDirection(this->getDirection(command));

	delete command;
}

int RemoteCarController::getSpeed(CarCommand* command) {
	int sign = this->isForward(command) ? 1 : -1;

	return this->isIdle(command)
		? 0
		: command->speed * sign;
}

int RemoteCarController::getDirection(CarCommand* command) {
	return command->angle == MID_ANGLE
		? 0
		: map(command->angle, MIN_ANGLE, MAX_ANGLE, -255, 255);
}

bool RemoteCarController::isIdle(CarCommand* command) {
	return command->direction == IDLE_STATE || command->speed == 0;
}

bool RemoteCarController::isForward(CarCommand* command) {
	return command->direction == FORWARD_STATE;
}

void RemoteCarController::trackLastCommand() {
	if (!this->stopWhenIddle) return;

	this->updateCount++;
	if (this->updateCount - this->lastCommand > MAX_IDDLE_TIME)
		car->reset();

	if (this->updateCount > MAX_TRACK_ITERATIONS) {
		this->updateCount = 0;
		this->lastCommand = 0;
	}

}
