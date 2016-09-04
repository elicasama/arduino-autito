#include "main.h"

Car* car;

void setup() {
	car->setSpeed(255);
}

void loop() {
	car->setDirection(0);
	delay(1000);
	car->setDirection(-255);
	delay(1000);
	car->setDirection(255);
	delay(1000);
}

// TODO: Bluetooth Control
//
//#include <SoftwareSerial.h>
//SoftwareSerial BT(0, 1);
//// creates a "virtual" serial port/UART
//// connect BT module TX to D10
//// connect BT module RX to D11
//// connect BT Vcc to 5V, GND to GND
//void setup()
//{
//car = new Car(config);
//  // set digital pin to control as an output
//  pinMode(13, OUTPUT);
//  // set the data rate for the SoftwareSerial port
//  BT.begin(9600);
//  // Send test message to other device
//  BT.println("Hello from Arduino");
//}
//char a; // stores incoming character from other device
//void loop()
//{
//  if (BT.available())
//  // if text arrived in from BT serial...
//  {
//    a=(BT.read());
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
//    // you can add more "if" statements with other characters to add more commands
//  }
//}
