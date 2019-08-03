#include <iostream>

#include "Trabalhador.h"

Trabalhador::Trabalhador(){};

Trabalhador::Trabalhador(std::string nome){
  setNome(nome);
};

Trabalhador::Trabalhador(std::string nome, float salario){
  setNome(nome);
  setSalario(salario);
};

Trabalhador::~Trabalhador(){};

std::string Trabalhador::getNome(){
  return nome;
};

float Trabalhador::getSalario(){
  return salario;
};

void Trabalhador::setNome(std::string nome){
  this->nome = nome;
};

void Trabalhador::setSalario(float salario){
  this->salario = salario;
};

float Trabalhador::calculaPagamentoSemanal(){
  return 0;
};

float Trabalhador::calculaPagamentoSemanal(int horas){
  return 0;
};
