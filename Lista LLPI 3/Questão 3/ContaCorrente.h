#ifndef CONTACORRENTE_CONTACORRENTE_H
#define CONTACORRENTE_CONTACORRENTE_H

#include "Conta.h"

class ContaCorrente : public Conta{
protected:
  double salary;
  int limit;
public:
  ContaCorrente();
  ContaCorrente(std::string, int, double, double);
  virtual ~ContaCorrente();

  double getSalary();
  int getLimit();

  void setSalary(double);
  void setLimit(int);

  virtual double defineLimit();
};

#endif
