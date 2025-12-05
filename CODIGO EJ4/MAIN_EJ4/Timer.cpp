#include "Timer.h"

Timer::Timer() : inicio(0), acumulado(0), corriendo(false) {}

void Timer::start() {
  if (!corriendo) {
    inicio = millis();
    corriendo = true;
  }
}

void Timer::stop() {
  if (corriendo) {
    acumulado += millis() - inicio;
    corriendo = false;
  }
}

void Timer::reset() {
  acumulado = 0;
  inicio = millis();
  corriendo = false;
}

void Timer::procesar() {
  if (Serial.available()) {
    char c = Serial.read();
    if (c == 'A') start();
    if (c == 'D') stop();
    if (c == 'R') reset();
  }

  if (corriendo) {
    unsigned long ahora = millis();
    unsigned long trans = (acumulado + (ahora - inicio)) / 1000;
    Serial.print("Tiempo: ");
    Serial.print(trans);
    Serial.println(" s");
  }
}