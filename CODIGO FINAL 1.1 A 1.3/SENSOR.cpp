// Sensor.cpp
#include "Sensor.h" //incluimos el header

Sensor::Sensor(String tipo) { //constructor, el string tipo asigna magnitud
  magnitud = tipo;
  valor = 0; //se inicializa en 0
}

void Sensor::generarMedicion() {
  valor = random(0, 100);  // se le da un valor random para testear
}

float Sensor::leerMedicion() {
  return valor; //se lee el valor medido
}

String Sensor::getMagnitud() {
  return magnitud; //se devuelve la magnitud

}

// ----- SensorTemperatura -----
SensorTemperatura::SensorTemperatura() : Sensor("Temperatura (°C)") {}

void SensorTemperatura::generarMedicion() {
  valor = random(15, 35);  // Simula temp ambiente
}

// ----- SensorLuz -----
SensorLuz::SensorLuz() : Sensor("Luz (0-100)") {}

void SensorLuz::generarMedicion() {
  valor = random(0, 100);  // Simula % de luz
}

// ----- SensorUltrasonido -----
SensorUltrasonido::SensorUltrasonido() : Sensor("Distancia (cm)") {}

void SensorUltrasonido::generarMedicion() {
  valor = random(2, 200);  // Simula distancia en cm
}