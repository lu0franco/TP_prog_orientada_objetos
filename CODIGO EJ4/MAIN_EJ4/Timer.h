#ifndef TIMER_H
#define TIMER_H

#include "Arduino.h"

class Timer {
private:
  unsigned long inicio;
  unsigned long acumulado;
  bool corriendo;

public:
  Timer();
  void start();      // A
  void stop();       // D
  void reset();      // R
  void procesar();   // para llmar dentro de void loop
};

#endif