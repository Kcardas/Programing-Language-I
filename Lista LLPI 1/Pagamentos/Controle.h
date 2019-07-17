#ifndef CONTROLE_CONTROLE_H
#define CONTROLE_CONTROLE_H

#include <iostream>
#include <string>
#include "Pagamento.h"

using namespace std;

class Controle{
private:
  Pagamento pagamentos[50];
public:
  Controle();
  void setPagamentos(string nomeFuncionario, double valorPagamento);
  double calculaPagamentos();
  bool existePagamentoFuncionario(string nomeFuncionario);
};

#endif
