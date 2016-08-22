#ifndef SRC_DEVICES_DCMOTOR_H_
#define SRC_DEVICES_DCMOTOR_H_

	#include "../utils/globals.h"

	namespace devices {
		class DcMotor {
			// ----
			public:
			// ----
			DcMotor(int enablePin, int control1Pin, int control2Pin);
			virtual ~DcMotor();

			void setSpeed(int speed);

			// -----
			private:
			// -----
			int enablePin;
			int control1Pin;
			int control2Pin;

			void goForward();
			void goReverse();
			void changeControlPins(bool control1, bool control2);
		};
	}

#endif
