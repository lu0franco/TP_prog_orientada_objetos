// Sensor.cpp
#include "Sensor.h" //incluimos el header

Sensor::Sensor(const String& tipo) : magnitud(tipo), valor(0) {}

float Sensor::leerMedicion() const { return valor; }
const String& Sensor::getMagnitud() const { return magnitud; }

SensorUltrasonidoReal::SensorUltrasonidoReal(int trig, int echo)
  : Sensor("Distancia (cm)"), pinTrig(trig), pinEcho(echo) {
  pinMode(pinTrig, OUTPUT);
  pinMode(pinEcho, INPUT);
}

void SensorUltrasonidoReal::leer() {
  digitalWrite(pinTrig, LOW);
  delayMicroseconds(2);
  digitalWrite(pinTrig, HIGH);
  delayMicroseconds(10);
  digitalWrite(pinTrig, LOW);

  long duracion = pulseIn(pinEcho, HIGH, 30000); // 30 ms de duracion
  if (duracion == 0) {            // timeout -->eco no visto
    valor = -1;                   // marca de “fuera de rango”
  } else {
    valor = duracion * 0.034 / 2; // cm
    if (valor > 400) valor = -1;  // descarta > 4 m
  }
}