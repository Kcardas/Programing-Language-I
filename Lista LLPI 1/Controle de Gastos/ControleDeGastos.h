#ifndef CONTROLEDEGASTOS_CONTROLEDEGASTOS_H
#define CONTROLEDEGASTOS_CONTROLEDEGASTOS_H

#include <iostream>
#include "Despesas.h"

using namespace std;

class Controle{
private:
  Despesas despesas[11];
public:
  Controle();
  void setDespesas(double, string, int);
  double valorTotal();
  bool existeDespesaTipo(string);
  virtual ~Controle();
};

#endif
