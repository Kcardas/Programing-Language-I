#include <iostream>

#include "Comissionado.h"

Comissionado::Comissionado(){};

Comissionado::Comissionado(std::string nome, std::string matricula, double vendaSemanais, double percentualComissao, double salario) : Funcionario(nome, matricula){
  setVendaSemanais(vendaSemanais);
  setPercentualComissao(percentualComissao);
  setSalario(salario);
  setTipo(3);
};

double Comissionado::getVendaSemanais(){
  return vendaSemanais;
};

double Comissionado::getPercentualComissao(){
  return percentualComissao;
};

double Comissionado::getSalario(){
  return salario;
};

void Comissionado::setSalario(double salario){
  this->salario = salario;
};

void Comissionado::setVendaSemanais(double vendaSemanais){
  this->vendaSemanais = vendaSemanais;
};

void Comissionado::setPercentualComissao(double percentualComissao){
  this->percentualComissao = percentualComissao;
};

double Comissionado::calculaSalario(){
  return (salario + (percentualComissao/100 * vendaSemanais));
};
