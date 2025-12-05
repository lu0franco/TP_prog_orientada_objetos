#include "Reporte.h"

Reporte::Reporte() : cabeza(nullptr), cantidad(0) {}

Reporte::~Reporte() {
  while (cabeza) {
    Nodo* t = cabeza;
    cabeza = cabeza->sig;
    delete t;
  }
}

void Reporte::agregar(float v) {
  Nodo* n = new Nodo{v, cabeza};
  cabeza = n;
  cantidad++;
}

void Reporte::enviarHistorico() const {
  Serial.println("--- Historico ---");
  Nodo* act = cabeza;
  while (act) {
    Serial.println(act->valor);
    act = act->sig;
  }
  Serial.println("-----------------");
}

void Reporte::estadisticas() const {
  if (!cabeza) { Serial.println("Sin datos"); return; }

  float minVal = cabeza->valor;
  float maxVal = cabeza->valor;
  float sum    = 0;

  Nodo* act = cabeza;
  while (act) {
    sum += act->valor;
    if (act->valor < minVal) minVal = act->valor;
    if (act->valor > maxVal) maxVal = act->valor;
    act = act->sig;
  }

  Serial.print("Min: "); Serial.println(minVal);
  Serial.print("Max: "); Serial.println(maxVal);
  Serial.print("Promedio: "); Serial.println(sum / cantidad);
}