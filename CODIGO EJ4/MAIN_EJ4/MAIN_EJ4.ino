#include "Timer.h"

Timer cronometro;

void setup() {
  Serial.begin(9600);
  Serial.println("A=Start  D=Stop  R=Reset");
}

void loop() {
  cronometro.procesar();   // todo el trabajo
}