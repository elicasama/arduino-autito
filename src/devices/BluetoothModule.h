#ifndef SRC_DEVICES_BLUETOOTHMODULE_H_
#define SRC_DEVICES_BLUETOOTHMODULE_H_

	#include "../utils/globals.h"
	#include "../Config.h"
	#include <SoftwareSerial.h>

	namespace devices {
		class BluetoothModule {
			// ----
			public:
			// ----
			BluetoothModule(BluetoothDefinition definition);
			virtual ~BluetoothModule();

			void begin();
			uint8_t* readPacket(int size);
			void clear();

			// -----
			private:
			// -----
			SoftwareSerial* bt;
		};
	}

#endif
