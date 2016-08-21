#ifndef SRC_ROBOTS_CAR_H_
#define SRC_ROBOTS_CAR_H_

	#include "Config.h"
	#include "../utils/globals.h"
	#include "../devices/DcMotor.h"
	using namespace devices;

	namespace robots {
		class Car {
			// ----
			public:
			// ----
			Car(Config config);
			virtual ~Car();

			void start();

			// -----
			private:
			// -----
			DcMotor* lowerRightWheel;
			DcMotor* upperRightWheel;
			DcMotor* upperLeftWheel;
			DcMotor* lowerLeftWheel;
		};
	}

#endif
