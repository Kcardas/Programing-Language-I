#ifndef CONTAESPECIAL_CONTAESPECIAL_H
#define CONTAESPECIAL_CONTAESPECIAL_H

#include "Conta.h"

class ContaEspecial : public Conta{
private:
  std::string nomeCliente;
  double salarioMensal;
  std::string numeroConta;
  double saldo;
  double limite;
public:
  ContaEspecial();
  ContaEspecial(std::string, double, std::string, double);
  void definirLimite();
};

#endif
