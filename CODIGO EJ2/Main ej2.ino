#include "Sensor.h"
#include "Led.h"

SensorTemperatura temp;   // sensor SIMULADO
Led turquesa(3);  // frio
Led verde(4);     //nromal
Led rojo(5);      //calor

void setup() {
  Serial.begin(9600);
}

void loop() {
  temp.generarMedicion();          //simulamos valores de tempetura
  float t = temp.leerMedicion();

  turquesa.apagar();
  verde.apagar();
  rojo.apagar();

  if (t < 20)        turquesa.encender(); //frio
  else if (t <= 27)  verde.encender(); //normal
  else               rojo.encender(); //calor

  Serial.print(temp.getMagnitud());
  Serial.print(": ");
  Serial.println(t);
  delay(500);
}