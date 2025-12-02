// Sensor.h
#ifndef SENSOR_H
#define SENSOR_H

#include "Arduino.h"

class Sensor { 
protected: //datos en protected para poder acceder desde las clases hijas
  float valor;
  String magnitud;

public: //datos en public para poder acceder desde cualquier parte del programa
  Sensor(String tipo);
  virtual void generarMedicion(); /*se pasa a virtual void para poder apuntar al objeto real
  de la clase, separando las llamadas para cada hija o clase base (polimorfismo) */
  float leerMedicion();
  String getMagnitud();
};

// ===== CLASES HIJAS ===== 

class SensorTemperatura : public Sensor {
public:
  SensorTemperatura();
  void generarMedicion() override; /*con override nos aseguramos de redefinir el metodo virtual
  de la base*/
};

class SensorLuz : public Sensor {
public:
  SensorLuz();
  void generarMedicion() override;
};

class SensorUltrasonido : public Sensor {
public:
  SensorUltrasonido();
  void generarMedicion() override;
};
#endif