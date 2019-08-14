#include <iostream>

#include "Conta.h"
#include "ContaEspecial.h"
#include "Menu.h"

int main(){

  std::string nomeCliente, numeroConta, printer;
  double salarioMensal, saldo, valor;
  int escolha, n = 1;
  Menu menu;
  IConta *conta[2];

  std::cout << "Digite o nome e o numero da conta:\n" << "  Nome: ";
  getline(std::cin, nomeCliente);
  std::cout << "  Conta: ";
  getline(std::cin, numeroConta);
  std::cout << "Digite o salario mensal e o saldo atual:\n" << "  Salario: ";
  std::cin >> salarioMensal;
  std::cout << "  Saldo: ";
  std::cin >> saldo;
  std::cout << "Sua conta é uma conta especial ou comum:\n  1-Comum\n  2-Especial\n";
  std::cin >> escolha;

  std::cout << "================================\n";

  if(escolha == 1){
    conta[0] = new Conta(nomeCliente, salarioMensal, numeroConta, saldo);
    std::cout << conta[0]->toString();
    std::cout << "==================================\n";
    menu.menuEspecial(conta[0]);
  }else if(escolha == 2){
    conta[1] = new ContaEspecial(nomeCliente, salarioMensal, numeroConta, saldo);
    std::cout << conta[1]->toString();
    std::cout << "==================================\n";
    menu.menuEspecial(conta[1]);
  };

  return 0;
}
