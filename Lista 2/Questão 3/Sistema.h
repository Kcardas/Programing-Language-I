#ifndef SISTEMA_SISTEMA_H
#define SISTEMA_SISTEMA_H

#include <vector>

#include "Assalariado.h"
#include "Horista.h"
#include "Comissionado.h"

class Sistema{
private:
  std::vector<Funcionario *> funcionario;
public:
  Sistema();
  void setFuncionario(std::string, std::string, double);
  void setFuncionario(std::string, std::string, double, double, double, int);
  double calculaValorTotal();
  std::string consultaSalario(std::string);
};

#endif
