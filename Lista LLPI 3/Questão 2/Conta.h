#ifndef CONTA_CONTA_H
#define CONTA_CONTA_H

#include "IConta.h"

class Conta : public IConta{
private:
  std::string nomeCliente;
  double salarioMensal;
  std::string numeroConta;
  double saldo;
  double limite;
public:
  Conta();
  Conta(std::string, double, std::string, double);
  std::string getNomeCliente();
  double getSalarioMensal();
  std::string getNumeroConta();
  double getSaldo();
  double getLimite();
  void setNomeCliente(std::string);
  void setSalarioMensal(double);
  void setNumeroConta(std::string);
  void setSaldo(double);
  void setLimite(double);
  virtual void definirLimite();
  void sacar(double);
  void depositar(double);
  std::string toString();
};

#endif
