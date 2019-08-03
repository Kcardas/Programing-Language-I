#include <iostream>
#include <sstream>

#include "Consultor.h"

Consultor::Consultor(){};

Consultor::Consultor(string nome, string matricula, float salario){
  setNome(nome);
  setMatricula(matricula);
  setSalario(salario);
};

Consultor::~Consultor(){};

float Consultor::getSalario(){
  return salario * 1.1;
};

float Consultor::getSalario(float percentual){
  return salario * (1 + percentual/100);
};

string Consultor::toStringConsultor(){
  stringstream sstr;

  sstr << toString();

  return sstr.str();
}
