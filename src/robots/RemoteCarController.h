#ifndef SRC_ROBOTS_REMOTECARCONTROLLER_H_
#define SRC_ROBOTS_REMOTECARCONTROLLER_H_

	#include "../utils/globals.h"
	#include "Car.h"
	#include "../devices/BluetoothModule.h"

	namespace robots {
		typedef struct {
			uint8_t direction;
			uint8_t speed;
			uint8_t angle;
			uint8_t lightsAndButtons;
		} CarCommand;

		#define IDLE_STATE 243
		#define FORWARD_STATE 241
		#define MIN_ANGLE 65
		#define MID_ANGLE 88
		#define MAX_ANGLE 110

		class RemoteCarController {
			// ----
			public:
			// ----
			RemoteCarController(Car* car, Config config);
			virtual ~RemoteCarController();

			void begin();
			void update();

			// -----
			private:
			// -----
			int getSpeed(CarCommand* command);
			int getDirection(CarCommand* command);
			bool isIdle(CarCommand* command);
			bool isForward(CarCommand* command);

			Car* car;
			BluetoothModule* bluetooth;
		};
	}

#endif
