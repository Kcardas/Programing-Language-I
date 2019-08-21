#include <iostream>
#include <sstream>

#include "Medico.h"

Medico::Medico(){};

Medico::Medico(std::string nome, double altura, double peso){
  setNome(nome);
  setAltura(altura);
  setPeso(peso);
};

std::string Medico::getNome(){
  return nome;
};

double Medico::getAltura(){
  return altura;
};

double Medico::getPeso(){
  return peso;
};

void Medico::setNome(std::string nome){
  this->nome = nome;
};

void Medico::setAltura(double altura){
  this->altura = altura;
};

void Medico::setPeso(double peso){
  this->peso = peso;
};

std::string Medico::toString(){
  std::stringstream sstr;

  sstr << "Nome: " << getNome() << std::endl << "Altura: " << getAltura() << "m" << std::endl
  << "Peso: " << getPeso() << "Kg" << std::endl;

  return sstr.str();
};

std::string Medico::getEspecialidade(){return 0;};

bool Medico::getOcupado(){return 0;};
