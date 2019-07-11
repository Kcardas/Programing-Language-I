#include <iostream>
#include <string>
#include "Pagamento.h"

using namespace std;

Pagamento::Pagamento(){
  nomeFuncionario = "NULL";
  valorPagamento = 0;
};

Pagamento::Pagamento(string nomeFuncionario, double valorPagamento){
  this->nomeFuncionario = nomeFuncionario;
  this->valorPagamento = valorPagamento;
};

string Pagamento::getNomeFuncionario(){
  return nomeFuncionario;
};

double Pagamento::getValorPagamento(){
  return valorPagamento;
};

void Pagamento::setNomeFuncionario(string nomeFuncionario){
  this->nomeFuncionario = nomeFuncionario;
};

void Pagamento::setValorPagamento(double valorPagamento){
  this->valorPagamento = valorPagamento;
};

Controle::Controle(){
  for(auto &i:pagamentos){
    i = Pagamento();
  }
};

void Controle::setPagamentos(string nomeFuncionario, double valorPagamento){
  for(int i = 0; i < 50; i++){
    if(!pagamentos[i].valorPagamento){
      pagamentos[i].valorPagamento = valorPagamento;
      pagamentos[i].setNomeFuncionario(nomeFuncionario);
      break;
    }
  }
};

double Controle::calculaPagamentos(){
  double some = 0;
  for(int i = 0; i < 50; i ++){
    some+=pagamentos[i].valorPagamento;
  }
  return some;
};

bool Controle::existePagamentoFuncionario(string nomeFuncionario){
  for(int i = 0; i < 50; i++){
    if(pagamentos[i].nomeFuncionario == nomeFuncionario){
      return true;
    }else {
      return false;
    }
  }
};
