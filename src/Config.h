#ifndef SRC_CONFIG_DEFINITION_H_
#define SRC_CONFIG_DEFINITION_H_

	typedef struct {
		int NUMBER;
		int MIN_SPEED;
	} WheelDefinition;

	typedef struct {
		int RECEIVE_PIN;
		int TRANSMIT_PIN;
	} BluetoothDefinition;

	typedef struct {
		WheelDefinition WHEEL_UPPER_LEFT;
		WheelDefinition WHEEL_UPPER_RIGHT;
		WheelDefinition WHEEL_LOWER_LEFT;
		WheelDefinition WHEEL_LOWER_RIGHT;
		BluetoothDefinition BLUETOOTH;
	} Config;

#endif
