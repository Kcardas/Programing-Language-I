#include <iostream>

#include "Horista.h"

Horista::Horista(){};

Horista::Horista(std::string nome, std::string matricula, double salarioPorHora, double horasTrabalhadas, double salario) : Funcionario(nome, matricula){
  setSalarioPorHora(salarioPorHora);
  setHorasTrabalhadas(horasTrabalhadas);
  setSalario(salario);
};

double Horista::getSalarioPorHora(){
  return salarioPorHora;
};

double Horista::getHorasTrabalhadas(){
  return horasTrabalhadas;
};

double Horista::getSalario(){
  return salario;
};

void Horista::setSalario(double salario){
  this->salario = salario;
};

void Horista::setSalarioPorHora(double salarioPorHora){
  this->salarioPorHora = salarioPorHora;
};

void Horista::setHorasTrabalhadas(double horasTrabalhadas){
  this->horasTrabalhadas = horasTrabalhadas;
};

double Horista::calculaSalario(){
  double horas_extras;

  if(horasTrabalhadas <= 40){
    return salario;
  }else{
    horas_extras = (horasTrabalhadas - 40) * 1.5;
    return (salarioPorHora * (40 + horas_extras)) + salario;
  }
};
