#ifndef POUPANCA_POUPANCA_H
#define POUPANCA_POUPANCA_H

#include "Conta.h"

class Poupanca : public Conta{
private:
  int variation;
  double incomeTax;
public:
  Poupanca();
  Poupanca(std::string, int, double, int, double);
  virtual ~Poupanca();

  int getVariation();
  double getIncomeTax();

  void setVariation(int);
  void setIncomeTax(double);

  double revenue();
};

#endif
