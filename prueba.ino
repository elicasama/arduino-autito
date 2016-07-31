// código de test:
#define E1 3  // Enable Pin for motor 1
#define I1 2     // Control pin 1 for motor 1
#define I2 4     // Control pin 2 for motor 1

#define E2 9
#define I21 8
#define I22 7

#define E3 11
#define I31 12
#define I32 13

#define E4 10
#define I41 5
#define I42 6

void setup()
   {
        for (int i = 1 ; i<=13 ; i++)                     // Inicializamos los pines
          pinMode( i, OUTPUT);
   }
void loop()
   {   digitalWrite(13, HIGH);
        digitalWrite(E1, HIGH);     // Activamos Motor1
        digitalWrite(E2, HIGH);
        digitalWrite(E3, HIGH);
        digitalWrite(E4, HIGH);
        digitalWrite(I1, HIGH);     // Arrancamos
        digitalWrite(I21, HIGH);
        digitalWrite(I31, HIGH);
        digitalWrite(I41, HIGH);
        digitalWrite(I2, LOW);
        digitalWrite(I22, LOW);
        digitalWrite(I32, LOW);
        digitalWrite(I42, LOW);
        
        delay(1000);

        digitalWrite(E1, LOW);      // Paramos Motor 1
        digitalWrite(E2, LOW);
        digitalWrite(E3, LOW);
        digitalWrite(E4, LOW);
        delay(1000);
        digitalWrite(E1, HIGH);     // Activamos Motor1
        digitalWrite(E2, HIGH);
        digitalWrite(E3, HIGH);
        digitalWrite(E4, HIGH);

        digitalWrite(I1, LOW);      // Arrancamos con cambio de direccion
        digitalWrite(I21, LOW);
        digitalWrite(I21, LOW);
        digitalWrite(I31, LOW);
        digitalWrite(I41, LOW);
        digitalWrite(I2, HIGH);
        digitalWrite(I22, HIGH);
        digitalWrite(I32, HIGH);
        digitalWrite(I42, HIGH);
        delay(1000);

        digitalWrite(E1, LOW);      // Paramos Motor 1
        digitalWrite(E2, LOW);
        digitalWrite(E3, LOW);
        digitalWrite(E4, LOW);
        delay(1000);
  }
