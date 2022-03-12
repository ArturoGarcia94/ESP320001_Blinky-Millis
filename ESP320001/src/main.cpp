#include <Arduino.h>

const int PinLed = 13; 

int ledState = LOW;

unsigned long previousMillis = 0;   

const long interval = 2500;



void setup() {
  pinMode(PinLed, OUTPUT);
}



void loop() {

  unsigned long currentMillis = millis();             //Mandas llamar al relojito millis que siempre se enciende cuando lo invocas

  if (currentMillis - previousMillis >= interval) {    //Debemos crear una comparativa con motivo de tener un resultado de referencia, si este resultado es mayor o igual a mi intervalo definido 
        //entonces se enciende
    previousMillis = currentMillis;                      // ai el valor referencia se pasa se regresa a cero el relojito

    if (ledState == LOW) {                                // se condiciona el encendido y apagado
      ledState = HIGH;
    } else {
      ledState = LOW;
    }
    digitalWrite(PinLed, ledState);                       // se ejecuta el encendido y apagado
  }
 
}

// Blinky with delay
 /*digitalWrite(PinLed,HIGH);
  delay(250);
   digitalWrite(PinLed,LOW);
    delay(250);*/