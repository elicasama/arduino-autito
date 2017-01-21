#ifndef _autito_H_
#define _autito_H_

	#include "utils/globals.h"
	#include "config.h"
	#include "robots/Car.h"
	#include "devices/BluetoothModule.h"
	
	using namespace robots;

	typedef struct {
		uint8_t direction;
		uint8_t speed;
		uint8_t angle;
		uint8_t lightsAndButtons;
	} CarCommand;
#endif
