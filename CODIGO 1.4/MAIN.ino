#include "Sensor.h"

SensorUltrasonidoReal dist(9, 10);

void setup() {
  Serial.begin(9600);
}

void loop() {
  dist.leer();
  Serial.print(dist.getMagnitud());
  Serial.print(": ");
  Serial.println(dist.leerMedicion());
  delay(500);
}
