#include <iostream>

#include "Cirurgiao.h"

Cirurgiao::Cirurgiao(){};

Cirurgiao::Cirurgiao(std::string nome, double altura, double peso) : Medico(nome, altura, peso){
  setEspecialidade(especialidade);
};

Cirurgiao::~Cirurgiao(){};

std::string Cirurgiao::getEspecialidade(){
  return especialidade;
};

bool Cirurgiao::getOcupado(){
  return ocupado;
};

void Cirurgiao::setEspecialidade(std::string especialidade){
  this->especialidade = "Cirurgião";
};

void Cirurgiao::setOcupado(bool ocupado){
  this->ocupado = ocupado;
};
