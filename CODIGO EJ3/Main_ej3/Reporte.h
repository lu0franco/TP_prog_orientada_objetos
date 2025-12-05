#ifndef REPORTE_H
#define REPORTE_H

#include "Arduino.h"

struct Nodo {
  float valor;
  Nodo* sig;
};

class Reporte {
private:
  Nodo* cabeza;
  int cantidad;

public:
  Reporte();
  ~Reporte();               // libera memoria
  void agregar(float v);
  void enviarHistorico() const;
  void estadisticas() const;
};

#endif