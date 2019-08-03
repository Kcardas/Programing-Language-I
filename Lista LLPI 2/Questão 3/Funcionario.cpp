#include <iostream>
#include <sstream>

#include "Funcionario.h"

using std::endl;
using std::string;

Funcionario::Funcionario(){};

Funcionario::Funcionario(string nome, string matricula, float salario){
  setNome(nome);
  setSalario(salario);
  setMatricula(matricula);
};

Funcionario::~Funcionario(){};

string Funcionario::getMatricula(){
  return matricula;
};

string Funcionario::getNome(){
  return nome;
};

float Funcionario::getSalario(){
  return salario;
};

void Funcionario::setMatricula(string matricula){
  this->matricula = matricula;
};

void Funcionario::setNome(string nome){
  this->nome = nome;
};

void Funcionario::setSalario(float salario){
  this->salario = salario;
};

string Funcionario::toString(){
  stringstream sstr;

  sstr << "Nome: " << nome << endl << "Matricula: " << matricula << endl
  << "Salario: " << salario << endl;

  return sstr.str();
};
