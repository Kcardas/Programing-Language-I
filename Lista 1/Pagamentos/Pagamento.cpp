#include <iostream>
#include <string>
#include "Pagamento.h"
#include "Controle.h"

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
    if(!pagamentos[i].getValorPagamento()){
      pagamentos[i].setValorPagamento(valorPagamento);
      pagamentos[i].setNomeFuncionario(nomeFuncionario);
      break;
    }
  }
};

double Controle::calculaPagamentos(){
  double some = 0;
  for(int i = 0; i < 50; i ++){
    some+=pagamentos[i].getValorPagamento();
  }
  return some;
};

bool Controle::existePagamentoFuncionario(string nomeFuncionario){
  for(int i = 0; i < 50; i++){
    if(pagamentos[i].getNomeFuncionario() == nomeFuncionario){
      return true;
    }
  }
  return false;
};
