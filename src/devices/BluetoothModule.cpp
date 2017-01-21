#include "BluetoothModule.h"
using namespace devices;

BluetoothModule::BluetoothModule(BluetoothDefinition definition) {
	this->bt = new SoftwareSerial(definition.RECEIVE_PIN, definition.TRANSMIT_PIN);
}

BluetoothModule::~BluetoothModule() { }

void BluetoothModule::begin() {
	this->bt->begin(9600);
}

uint8_t* BluetoothModule::readPacket(int size) {
	if (this->bt->available() < size) return NULL;

	uint8_t* bytes = new uint8_t[size];

	for(int i=0; i < size; i++)
		bytes[i] = this->bt->read();

	this->clear();

	return bytes;
}

void BluetoothModule::clear() {
	while (this->bt->available() > 0) this->bt->read();
}
