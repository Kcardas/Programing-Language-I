#include <iostream>
#include <string>
#include "Pagamento.h"
#include "Controle.h"

using namespace std;

int main(){
  string nomeFuncionario;
  double valorPagamento;

  cout << "Digite o nome e o valor do pagamento ao funcionario(testara a classe pagamento): ";
  cin >> nomeFuncionario >> valorPagamento;

  Pagamento pagamento = Pagamento(nomeFuncionario, valorPagamento);

  pagamento.setNomeFuncionario(nomeFuncionario);
  pagamento.setValorPagamento(valorPagamento);

  cout << "Nome: " << pagamento.getNomeFuncionario() << endl << "Valor: " << pagamento.getValorPagamento() << endl;

  Controle controlePagamento = Controle();

  cout << "Defina dois pagamentos no controle de pagamentos.\n";
  cout << "Digite nome e o valor do pagamento: ";
  cin >> nomeFuncionario >> valorPagamento;
  controlePagamento.setPagamentos(nomeFuncionario, valorPagamento);
  cout << "Digite outro nome e o valor do pagamento: ";
  cin >> nomeFuncionario >> valorPagamento;
  controlePagamento.setPagamentos(nomeFuncionario, valorPagamento);

  cout << "Digite um nome de um funcionario para procura-lo no controle de pagamentos: ";
  cin >> nomeFuncionario;

  if(controlePagamento.existePagamentoFuncionario(nomeFuncionario)){
    cout << nomeFuncionario << " existe no controle de pagamentos\n";
  }else{
    cout << nomeFuncionario << " nao existe no controle de pagamentos\n";
  }

  cout << "O valor total a pagar: " << controlePagamento.calculaPagamentos() << endl;

  return 0;
}
