#ifndef QUADRADO_QUADRADO_H
#define QUADRADO_QUADRADO_H

#include <iostream>
#include "FiguraGeo.h"

class Quadrado : public Figura{
public:
  Quadrado(){};
  virtual ~Quadrado(){};
  float calculaArea(float base, float altura){return (base * altura);};
};

#endif
