#include <iostream>

#include "Assalariado.h"

Assalariado::Assalariado(){};

Assalariado::Assalariado(std::string nome, std::string matricula, double salario) : Funcionario(nome, matricula){
  setSalario(salario);
  setTipo(1);
};

double Assalariado::getSalario(){
  return salario;
};

void Assalariado::setSalario(double salario){
  this->salario = salario;
};

double Assalariado::calculaSalario(){
  return getSalario();
};
