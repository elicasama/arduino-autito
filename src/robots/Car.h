#ifndef SRC_ROBOTS_CAR_H_
#define SRC_ROBOTS_CAR_H_

	#include "Config.h"
	#include "../utils/globals.h"
	#include "WheelPair.h"

	namespace robots {
		class Car {
			// ----
			public:
			// ----
			Car(Config config);
			virtual ~Car();

			void start();
			void stop();

			// -----
			private:
			// -----

			WheelPair* frontWheelPair;
			WheelPair* backWheelPair;
		};
	}

#endif
