#ifndef SRC_ROBOTS_CONFIG_H_
#define SRC_ROBOTS_CONFIG_H_

	namespace robots {
		typedef struct {
			int ENABLE;
			int CONTROL1;
			int CONTROL2;
		} WheelPins;

		typedef struct {
			WheelPins PINS_LOWER_RIGHT;
			WheelPins PINS_UPPER_RIGHT;
			WheelPins PINS_UPPER_LEFT;
			WheelPins PINS_LOWER_LEFT;
		} Config;
	}

#endif
