#include <Arduino.h>

#define PinADC 34
#define Resolucion 3.3/4095

int rADC = 0;
int voltaje = 0; 

void setup() {
Serial.begin(9600);

analogReadResolution(12);
analogSetPinAttenuation(PinADC, ADC_11db);

}

void loop() {
 rADC = analogRead(PinADC);

 Serial.print("Valor: ");
 Serial.println(rADC);

 Serial.print("Voltaje: ");
 Serial.println(rADC*Resolucion);
}