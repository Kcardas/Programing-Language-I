#ifndef HORISTA_HORISTA_H
#define HORISTA_HORISTA_H

#include "Funcionario.h"

class Horista : public Funcionario{
private:
  double salario;
  double salarioPorHora;
  double horasTrabalhadas;
public:
  Horista();
  Horista(std::string, std::string, double, double, double);
  double getSalarioPorHora();
  double getHorasTrabalhadas();
  double getSalario();
  void setSalario(double);
  void setSalarioPorHora(double);
  void setHorasTrabalhadas(double);
  double calculaSalario();
};

#endif
