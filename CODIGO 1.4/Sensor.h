#ifndef SENSOR_H
#define SENSOR_H

#include "Arduino.h"

class Sensor {
protected:
  float valor;
  String magnitud;

public:
  Sensor(const String& tipo);
  float leerMedicion() const;
  const String& getMagnitud() const;
};

class SensorUltrasonidoReal : public Sensor {
private:
  int pinTrig;
  int pinEcho;

public:
  SensorUltrasonidoReal(int trig, int echo);
  void leer();          // lectura real (no simulada)
};

#endif