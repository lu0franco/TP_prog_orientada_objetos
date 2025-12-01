#include "Sensor.h"

//defino sensores
SensorTemperatura temp; 
SensorLuz luz;
SensorUltrasonido dist;

void setup() {
  Serial.begin(9600);
//genero las mediciones simuladas
  temp.generarMedicion();
  luz.generarMedicion();
  dist.generarMedicion();
//printeo datos
  Serial.print(temp.getMagnitud()+ ": "); Serial.println(temp.leerMedicion());
  Serial.print(luz.getMagnitud() + ": "); Serial.println(luz.leerMedicion());
  Serial.print(dist.getMagnitud() + ": "); Serial.println(dist.leerMedicion());
}

void loop() {

}