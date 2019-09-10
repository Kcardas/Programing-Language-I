#include "Poupanca.h"

Poupanca::Poupanca(){};

Poupanca::Poupanca(std::string clientName, int number, double balance, int variation, double incomeTax) : Conta(clientName, number, balance) {
  setVariation(variation);
  setIncomeTax(incomeTax);
};

Poupanca::~Poupanca(){};

int Poupanca::getVariation(){
  return variation;
};

double Poupanca::getIncomeTax(){
  return incomeTax;
};

void Poupanca::setVariation(int variation){
  this->variation = variation;
};

void Poupanca::setIncomeTax(double incomeTax){
  this->incomeTax = incomeTax;
};

double Poupanca::revenue(){
  if(variation == 51){
    balance += balance * incomeTax;
    return balance;
  }else if(variation == 1){
    incomeTax += 0.5 * incomeTax;
    balance += balance * incomeTax;
    return balance;
  }

  return 0;
};
