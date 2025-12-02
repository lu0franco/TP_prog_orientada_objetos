
#ifndef LED_H
#define LED_H

#include "Arduino.h"

class Led {
private:
  int pin;
  bool estado;

public:
  explicit Led(int p);   // constructor
  void encender();
  void apagar();
  void toggle();
  bool estaEncendido() const;
};

#endif