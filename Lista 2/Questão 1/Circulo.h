#ifndef CIRCULO_CIRCULO_H
#define CIRCULO_CIRCULO_H

#include <iostream>
#include "FiguraGeo.h"

class Circulo : public Figura{
public:
  Circulo(){};
  virtual ~Circulo(){};
  float calculaArea(float raio){return (3.14159 * raio * raio);};
};

#endif
