#ifndef ASSALARIADO_ASSALARIADO_H
#define ASSALARIADO_ASSALARIADO_H

#include "Funcionario.h"

class Assalariado : public Funcionario{
private:
  double salario;
public:
  Assalariado();
  Assalariado(std::string, std::string, double);
  double getSalario();
  void setSalario(double);
  double calculaSalario();
};

#endif
