#include <iostream>

#include "includer.h"
#include "Menu.h"

void MenuPoupanca(Conta *conta){
  std::cout << "Sua renda ao final do mês será de: R$ " << conta->revenue() << std::endl;
};

int main(){

  std::string nomeCliente, printer;
  double salarioMensal, saldo, taxaRendimento;
  int escolha, n = 1, variacao, numeroConta;
  Menu menu;
  Conta *conta[3];

  std::cout << "Digite o nome e o numero da conta:\n" << "  Nome: ";
  getline(std::cin, nomeCliente);
  std::cout << "  Conta: ";
  std::cin >> numeroConta;
  std::cout << "Digite o salario mensal e o saldo atual:\n" << "  Salario: ";
  std::cin >> salarioMensal;
  std::cout << "  Saldo: ";
  std::cin >> saldo;
  std::cout << "Sua conta é uma conta corrente, especial ou poupança:\n  1-Comum\n  2-Especial\n  3-Poupança.\n";
  std::cin >> escolha;

  std::cout << "================================\n";

  switch(escolha){
    case 1:
    conta[0] = new ContaCorrente(nomeCliente, numeroConta, saldo, salarioMensal);
    //std::cout << conta[0]->toString();
    std::cout << "==================================\n";
    menu.menuEspecial(conta[0]);
    break;
    case 2:
    conta[1] = new ContaEspecial(nomeCliente, numeroConta, saldo, salarioMensal);
    //std::cout << conta[1]->toString();
    std::cout << "==================================\n";
    menu.menuEspecial(conta[1]);
    break;
    case 3:
    std::cout << "Digite a variação da sua conta:\n 51-Poupança comum.\n 1-Poupança legado.\n";
    std::cin >> variacao;
    std::cout << "Digite a taxa de rendimento ao mês: ";
    std::cin >> taxaRendimento;
    conta[2] = new Poupanca(nomeCliente, numeroConta, saldo, variacao, taxaRendimento);
    MenuPoupanca(conta[2]);
    break;
    default:
    std::cout << "Digite uma opção válida!\n";
    break;
  }

  return 0;
}
