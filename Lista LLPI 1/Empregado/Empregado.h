#ifndef EMPREGADO_EMPREGADO_H
#define EMPREGADO_EMPREGADO_H

#include <iostream>
#include <string>

using namespace std;

class Empregado{
private:
  string name;
  string surname;
  double salaryPerMonth;
public:
  Empregado();
  Empregado(string, string, double);
  virtual ~Empregado();
  string getName();
  string getSurname();
  double getSalaryPerMonth();
  void setName(string);
  void setSurname(string);
  void setSalarayPerMonth(double);
};

#endif
