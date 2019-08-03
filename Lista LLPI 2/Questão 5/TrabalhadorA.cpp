#include <iostream>

#include "Trabalhador.h"
#include "TrabalhadorA.h"

TrabalhadorA::TrabalhadorA(){};

TrabalhadorA::TrabalhadorA(std::string nome, float salario) : Trabalhador(nome, salario){};

TrabalhadorA::~TrabalhadorA(){};

float TrabalhadorA::calculaPagamentoSemanal(){

  return getSalario() / 4;
};
