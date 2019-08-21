#include <iostream>

#include "Otorrino.h"

Otorrino::Otorrino(){};

Otorrino::Otorrino(std::string nome, double altura, double peso) : Medico(nome, altura, peso){
  setEspecialidade(especialidade);
};

Otorrino::~Otorrino(){};

std::string Otorrino::getEspecialidade(){
  return especialidade;
};

bool Otorrino::getOcupado(){
  return ocupado;
};

void Otorrino::setEspecialidade(std::string especialidade){
  this->especialidade = "Otorrino";
};

void Otorrino::setOcupado(bool ocupado){
  this->ocupado = ocupado;
};
