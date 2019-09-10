#include "ContaEspecial.h"

ContaEspecial::ContaEspecial(){};

ContaEspecial::ContaEspecial(std::string clientName, int number, double balance, double salary) : ContaCorrente(clientName, number, balance, salary) {};

ContaEspecial::~ContaEspecial(){};

double ContaEspecial::defineLimit(){
  setLimit(4*getSalary());

  return limit;
};
