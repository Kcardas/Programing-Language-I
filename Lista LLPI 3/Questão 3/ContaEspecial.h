#ifndef CONTAESPECIAL_CONTAESPECIAL_H
#define CONTAESPECIAL_CONTAESPECIAL_H

#include "ContaCorrente.h"

class ContaEspecial : public ContaCorrente {
public:
  ContaEspecial();
  ContaEspecial(std::string, int, double, double);
  virtual ~ContaEspecial();
  
  double defineLimit();
};

#endif
