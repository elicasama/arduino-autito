#ifndef SRC_ROBOTS_CONFIG_H_
#define SRC_ROBOTS_CONFIG_H_

	namespace robots {
		typedef struct {
			int PIN_LOWER_RIGHT_E;
			int PIN_LOWER_RIGHT_I1;
			int PIN_LOWER_RIGHT_I2;

			int PIN_UPPER_RIGHT_E;
			int PIN_UPPER_RIGHT_I1;
			int PIN_UPPER_RIGHT_I2;

			int PIN_UPPER_LEFT_E;
			int PIN_UPPER_LEFT_I1;
			int PIN_UPPER_LEFT_I2;

			int PIN_LOWER_LEFT_E;
			int PIN_LOWER_LEFT_I1;
			int PIN_LOWER_LEFT_I2;
		} Config;
	}
#endif
