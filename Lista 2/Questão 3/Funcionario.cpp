#include <iostream>

#include "Funcionario.h"

Funcionario::Funcionario(){};

Funcionario::Funcionario(std::string nome, std::string matricula){
  setNome(nome);
  setMatricula(matricula);
};

std::string Funcionario::getNome(){
  return nome;
};

std::string Funcionario::getMatricula(){
  return matricula;
};

void Funcionario::setNome(std::string nome){
  this->nome = nome;
};

void Funcionario::setMatricula(std::string matricula){
  this->matricula = matricula;
};
