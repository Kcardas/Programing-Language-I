#include <iostream>

#include "ContaEspecial.h"

ContaEspecial::ContaEspecial(){};

ContaEspecial::ContaEspecial(std::string nomeCliente, double salarioMensal, std::string numeroConta, double saldo) :
Conta(nomeCliente, salarioMensal, numeroConta, saldo) {
  definirLimite();
};

void ContaEspecial::definirLimite(){
  setLimite(getSalarioMensal() * 3);
};
