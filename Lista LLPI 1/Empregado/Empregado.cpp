#include <iostream>
#include <string>
#include "Empregado.h"

using namespace std;

Empregado::Empregado(){};

Empregado::Empregado(string name, string surname, double salaryPerMonth){
  this->name = name;
  this->surname = surname;
  setSalarayPerMonth(salaryPerMonth);
};

Empregado::~Empregado(){};

string Empregado::getName(){
  return name;
};

string Empregado::getSurname(){
  return surname;
};

double Empregado::getSalaryPerMonth(){
  return salaryPerMonth;
};

void Empregado::setName(string name){
  this->name = name;
};

void Empregado::setSurname(string surname){
  this->surname = surname;
};

void Empregado::setSalarayPerMonth(double salaryPerMonth){
  if(salaryPerMonth < 0){
    this->salaryPerMonth = 0;
  }else{
    this->salaryPerMonth = salaryPerMonth;
  }
};
