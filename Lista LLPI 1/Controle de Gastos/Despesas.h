#ifndef DESPESAS_DESPESAS_H
#define DESPESAS_DESPESAS_H

#include <iostream>

using namespace std;

class Despesas{
private:
  double valor;
  string tipoDeGasto;
public:
  Despesas();
  Despesas(double, string);
  double getValor();
  void setValor(double);
  string getTipoDeGasto();
  void setTipoDeGasto(string);
  virtual ~Despesas();
};

#endif
