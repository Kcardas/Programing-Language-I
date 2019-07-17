#include <iostream>
#include "Pessoa.h"

using namespace std;

Pessoa::Pessoa(){};

Pessoa::Pessoa(string name){
  this->name = name;
}

Pessoa::Pessoa(string name, int age, string phone){
  this->name = name;
  this->age = age;
  this->phone = phone;
};

string Pessoa::getName(){
  return name;
};

string Pessoa::getPhone(){
  return phone;
};

int Pessoa::getAge(){
  return age;
};

void Pessoa::setName(string name){
  this->name = name;
};

void Pessoa::setPhone(string phone){
  this->phone = phone;
};

void Pessoa::setAge(int age){
  this->age = age;
};
