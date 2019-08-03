#ifndef FIGURAGEO_FIGURAGEO_H
#define FIGURAGEO_FIGURAGEO_H

#include <iostream>

class Figura{
public:
  Figura(){};
  virtual float calculaArea(float){return 0;};
  virtual float calculaArea(float, float){return 0;};
};

#endif
