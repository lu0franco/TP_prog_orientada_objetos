#include "Sensor.h"
#include "Reporte.h"

SensorTemperatura temp;
Reporte reporte;

void setup() {
  Serial.begin(9600);
  Serial.println("Comandos: h (histórico) | e (estadísticas)");
}

void loop() {
  if (Serial.available()) {
    char c = Serial.read();
    if (c == 'h') reporte.enviarHistorico();
    if (c == 'e') reporte.estadisticas();
  }

  temp.generarMedicion();
  float t = temp.leerMedicion();
  reporte.agregar(t);

  Serial.println(t);   // eco para ver que llega
  delay(1000);
}