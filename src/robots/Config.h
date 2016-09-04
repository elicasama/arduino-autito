#ifndef SRC_ROBOTS_CONFIG_H_
#define SRC_ROBOTS_CONFIG_H_

	namespace robots {
		typedef struct {
			int NUMBER;
			int MIN_SPEED;
		} WheelDefinition;

		typedef struct {
			WheelDefinition WHEEL_UPPER_LEFT;
			WheelDefinition WHEEL_UPPER_RIGHT;
			WheelDefinition WHEEL_LOWER_LEFT;
			WheelDefinition WHEEL_LOWER_RIGHT;
		} Config;
	}

#endif
