#ifndef PAGAMETO_PAGAMENTO_H
#define PAGAMETO_PAGAMENTO_H

#include <iostream>
#include <string>

using namespace std;

class Pagamento{
private:
  string nomeFuncionario;
  double valorPagamento;
public:
  Pagamento();
  Pagamento(string nomeFuncionario, double valorPagamento);
  string getNomeFuncionario();
  double getValorPagamento();
  void setNomeFuncionario(string);
  void setValorPagamento(double);
};

#endif
