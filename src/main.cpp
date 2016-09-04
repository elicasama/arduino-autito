#include "main.h"

Car* car;

//void setup() {
//	car = new Car(config);
//	car->setSpeed(1);
//}
//
//void loop() {
//
//}

// TODO: Bluetooth Control

#include <SoftwareSerial.h>
SoftwareSerial BT(A0, A1);
// creates a "virtual" serial port/UART
// connect BT module TX to D10
// connect BT module RX to D11
// connect BT Vcc to 5V, GND to GND
void setup()
{
  car = new Car(config);
  // set digital pin to control as an output
  pinMode(13, OUTPUT);

  Serial.begin(9600);
  Serial.println("HOLA MUNDO");
  // set the data rate for the SoftwareSerial port
  BT.begin(9600);
  // Send test message to other device
  BT.println("Hello from Arduino");
}
char a; // stores incoming character from other device
void loop()
{
  if (BT.available() == 4)
  // if text arrived in from BT serial...
  {
	int direction = BT.read();
	int speed = BT.read();
	int angle = BT.read();
	int lightsAndButtons = BT.read();

//	Serial.print("direction ");
//	Serial.print(direction);
//	Serial.print("speed ");
//	Serial.print(speed);
//	Serial.print(" angle");
//	Serial.println(angle);

	int sign = direction > 1 ? 1 : -1;
	car->setSpeed(speed * sign);
	int dir = angle < 88 ? -255 : 255;
	if (angle == 88) dir = 0;
	car->setDirection(dir);

	//
//    if (a=='1')
//    {
//      car->setSpeed(255);
//      BT.println("LED on");
//    }
//    if (a=='2')
//    {
//      car->setSpeed(0);
//      digitalWrite(13, LOW);
//      BT.println("LED off");
//    }
//    if (a=='?')
//    {
//      BT.println("Send '1' to turn LED on");
//      BT.println("Send '2' to turn LED on");
//    }
    // you can add more "if" statements with other characters to add more commands
  }
}
