#ifndef TRIANGULO_TRIANGULO_H
#define TRIANGULO_TRIANGULO_H

#include <iostream>
#include "FiguraGeo.h"

class Triangulo : public Figura{
public:
  Triangulo(){};
  virtual ~Triangulo(){};
  float calculaArea(float base, float altura){return (base * altura / 2);};
};

#endif
