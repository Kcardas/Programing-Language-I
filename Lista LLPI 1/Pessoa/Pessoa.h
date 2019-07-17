#ifndef PESSOA_PESSOA_H
#define PESSOA_PESSOA_H

#include <iostream>
#include <string>

using namespace std;

class Pessoa{
private:
  string name;
  string phone;
  int age;
public:
  Pessoa();
  Pessoa(string);
  Pessoa(string name, int age, string phone);
  string getName();
  string getPhone();
  int getAge();
  void setName(string name);
  void setPhone(string phone);
  void setAge(int age);
};

#endif
