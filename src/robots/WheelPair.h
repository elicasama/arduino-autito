#ifndef SRC_ROBOTS_WHEELPAIR_H_
#define SRC_ROBOTS_WHEELPAIR_H_

	#include "Config.h"
	#include "../utils/globals.h"
	#include "../devices/DcMotor.h"
	using namespace devices;

	namespace robots {
		class WheelPair {
			// ----
			public:
			// ----
			WheelPair(WheelPins leftWheelPins, WheelPins rightWheelPins);
			virtual ~WheelPair();

			void setSpeed(int speed);
			void setDirection(int direction);

			// -----
			private:
			// -----
			DcMotor* leftWheel;
			DcMotor* rightWheel;
		};
	}

#endif
