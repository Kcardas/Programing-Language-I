#ifndef PAGAMETO_PAGAMENTO_H
#define PAGAMETO_PAGAMENTO_H
#ifndef CONTROLE_CONTROLE_H
#define CONTROLE_CONTROLE_H

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

class Controle{
private:
  Pagamento pagamentos[50];
public:
  Controle();
  void setPagamentos();
  double calculaPagamentos(string nomeFuncionario,  double valorPagamento);
  bool existePagamentoFuncionario(string nomeFuncionario);
};

#endif
