#ifndef CONSULTOR_CONSULTOR_H
#define CONSULTOR_CONSULTOR_H

#include "Funcionario.h"

class Consultor : protected Funcionario{
public:
  Consultor();
  Consultor(string, string, float);
  virtual ~Consultor();
  float getSalario();
  float getSalario(float percentual);
  string toStringConsultor();
};

#endif
