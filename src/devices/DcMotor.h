#ifndef SRC_DEVICES_DCMOTOR_H_
#define SRC_DEVICES_DCMOTOR_H_

	#include "../utils/globals.h"
	#include <AFMotor.h>

	namespace devices {
		class DcMotor {
			// ----
			public:
			// ----
			DcMotor(int motorNumber);
			virtual ~DcMotor();

			void setSpeed(int speed);

			// -----
			private:
			// -----
			AF_DCMotor motor;
		};
	}

#endif
