#include "ContaCorrente.h"

ContaCorrente::ContaCorrente(){};

ContaCorrente::ContaCorrente(std::string clientName, int number, double balance, double salary) : Conta(clientName, number, balance){
  setSalary(salary);
  setLimit(0);
  defineLimit();
};

ContaCorrente::~ContaCorrente(){};

double ContaCorrente::getSalary(){
  return salary;
};

int ContaCorrente::getLimit(){
  return limit;
};

void ContaCorrente::setSalary(double salary){
  this->salary = salary;
};

void ContaCorrente::setLimit(int limit){
  this->limit = limit;
};

double ContaCorrente::defineLimit(){
  setLimit(2*getSalary());

  return limit;
};
