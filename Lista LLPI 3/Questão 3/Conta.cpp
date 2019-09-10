#include <iostream>

#include "Conta.h"

Conta::Conta(){};

Conta::Conta(std::string clientName, int number, double balance){
  setClientName(clientName);
  setNumber(number);
  setBalacne(balance);
};

Conta::~Conta(){};

std::string Conta::getClientName(){
  return clientName;
};

int Conta::getNumber(){
  return number;
};

double Conta::getBalance(){
  return balance;
};

void Conta::setClientName(std::string clientName){
  this->clientName = clientName;
};

void Conta::setNumber(int number){
  this->number = number;
};

void Conta::setBalacne(double balance){
  this->balance = balance;
};

void Conta::withdraw(double value){
  if(value <= balance){
    this->balance -= value;
  }else{
    std::cout << "Saldo insuficiente.\n";
  }
};

void Conta::deposit(double value){
  this->balance += value;
};
