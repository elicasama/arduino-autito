#define E1 3 // enable
#define I1 4 // control pin 1
#define I2 2 // control pin 2

#define E2 9
#define I21 8
#define I22 7

#define E3 11
#define I31 12
#define I32 13

#define E4 10
#define I41 6
#define I42 5

void setup() {
	for (int i = 1 ; i<=13 ; i++)
		pinMode(i, OUTPUT);
}

void loop() {
	digitalWrite(13, HIGH);

	digitalWrite(E1, HIGH); // motors on
	digitalWrite(E2, HIGH);
	digitalWrite(E3, HIGH);
	digitalWrite(E4, HIGH);
	digitalWrite(I1, HIGH); // forward
	digitalWrite(I21, HIGH);
	digitalWrite(I31, HIGH);
	digitalWrite(I41, HIGH);
	digitalWrite(I2, LOW);
	digitalWrite(I22, LOW);
	digitalWrite(I32, LOW);
	digitalWrite(I42, LOW);

	delay(1000);

	digitalWrite(E1, LOW); // stop
	digitalWrite(E2, LOW);
	digitalWrite(E3, LOW);
	digitalWrite(E4, LOW);

	delay(1000);

	digitalWrite(E1, HIGH); // on again
	digitalWrite(E2, HIGH);
	digitalWrite(E3, HIGH);
	digitalWrite(E4, HIGH);
	digitalWrite(I1, LOW); // backwards
	digitalWrite(I21, LOW);
	digitalWrite(I21, LOW);
	digitalWrite(I31, LOW);
	digitalWrite(I41, LOW);
	digitalWrite(I2, HIGH);
	digitalWrite(I22, HIGH);
	digitalWrite(I32, HIGH);
	digitalWrite(I42, HIGH);

	delay(1000);

	digitalWrite(E1, LOW); // stop
	digitalWrite(E2, LOW);
	digitalWrite(E3, LOW);
	digitalWrite(E4, LOW);
	delay(1000);
}
