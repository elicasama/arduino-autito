#ifndef SRC_DEVICES_DCMOTOR_H_
#define SRC_DEVICES_DCMOTOR_H_

	#include "../utils/globals.h"

	namespace devices {
		class DcMotor {
			// ----
			public:
			// ----
			DcMotor(short enablePin, short control1Pin, short control2Pin);
			virtual ~DcMotor();

			void start();
			void stop();

			// -----
			private:
			// -----
			short enablePin;
			short control1Pin;
			short control2Pin;
		};
	}

#endif
