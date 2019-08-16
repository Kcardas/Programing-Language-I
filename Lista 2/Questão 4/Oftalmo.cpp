#include <iostream>

#include "Oftalmo.h"

Oftalmo::Oftalmo(std::string nome, double altura, double peso, std::string especialidade) : Medico(nome, altura, peso){
  setEspecialidade(especialidade);
};

Oftalmo::~Oftalmo(){};

std::string Oftalmo::getEspecialidade(){
  return especialidade;
};

bool Oftalmo::getOcupado(){
  return ocupado;
};

void Oftalmo::setEspecialidade(std::string especialidade){
  this->especialidade = especialidade;
};

void Oftalmo::setOcupado(bool ocupado){
  this->ocupado = ocupado;
};
