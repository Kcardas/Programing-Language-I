#include <iostream>

#include "Ginecologista.h"

Ginecologista::Ginecologista(){};

Ginecologista::Ginecologista(std::string nome, double altura, double peso) : Medico(nome, altura, peso){
  setEspecialidade(especialidade);
};

Ginecologista::~Ginecologista(){};

std::string Ginecologista::getEspecialidade(){
  return especialidade;
};

bool Ginecologista::getOcupado(){
  return ocupado;
};

void Ginecologista::setEspecialidade(std::string especialidade){
  this->especialidade = "Ginecologista";
};

void Ginecologista::setOcupado(bool ocupado){
  this->ocupado = ocupado;
};
