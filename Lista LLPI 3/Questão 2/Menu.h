#ifndef MENU_MENU_H
#define MENU_MENU_H

#include "Conta.h"
#include "ContaEspecial.h"

class Menu{
public:
  Menu(){};
  void menuEspecial(Conta *conta){
    int escolha, n = 1;
    double valor;

    while(n){
      std::cout << "1-Sacar\n2-Depositar\n0-Sair\n";
      std::cin >> escolha;

      switch(escolha){
        case 1:
          std::cout << "Qual o valor do saque: ";
          std::cin >> valor;
          conta->sacar(valor);
          std::cout << "Seu saldo agora é de " << conta->getSaldo() << std::endl;
          break;
        case 2:
        std::cout << "Qual o valor do deposito: ";
        std::cin >> valor;
        conta->depositar(valor);
        std::cout << "Seu saldo agora é de " << conta->getSaldo() << std::endl;
        break;
        case 0:
        n = 0;
        break;
        default:
        std::cout << "Digite uma opção valida!\n";
        break;
      }
    }
  }
};

#endif
