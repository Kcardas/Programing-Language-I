#ifndef COMISSIONADO_COMISSIONADO_H
#define COMISSIONADO_COMISSIONADO_H

#include "Funcionario.h"

class Comissionado : public Funcionario{
private:
  double salario;
  double vendaSemanais;
  double percentualComissao;
public:
  Comissionado();
  Comissionado(std::string, std::string, double, double, double);
  double getVendaSemanais();
  double getPercentualComissao();
  double getSalario();
  void setSalario(double);
  void setVendaSemanais(double);
  void setPercentualComissao(double);
  double calculaSalario();
};

#endif
