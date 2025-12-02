#include "Led.h"

Led::Led(int p) : pin(p), estado(false) {
  pinMode(pin, OUTPUT);
  apagar();              // arranca apagado
}

void Led::encender() {
  digitalWrite(pin, HIGH);
  estado = true;
}

void Led::apagar() {
  digitalWrite(pin, LOW);
  estado = false;
}

void Led::toggle() {
  estado ? apagar() : encender();
}

bool Led::estaEncendido() const {
  return estado;
}