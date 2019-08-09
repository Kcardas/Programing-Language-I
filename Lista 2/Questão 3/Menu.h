#ifndef MENU_MENU_H
#define MENU_MENU_H

#include <iostream>
#include <vector>

#include "Sistema.h"

class Menu{
public:
  Menu(){};
  void menuConsulta(Sistema *sistema){
    std::string parametro, pega_endl;

    getline(std::cin, pega_endl);

    std::cout << "Digite o nome ou a matricula do funcionario: ";
    getline(std::cin, parametro);
    std::cout << sistema->consultaSalario(parametro);
    std::cout << "Total: " << sistema->calculaValorTotal() << std::endl;
  };
  void menuGetSalario (Sistema *sistema){
    double salario;
    std::string nomematricula[2];

    menuNomeMatricula(nomematricula);

    std::cout << "Digite o salario do funcionario: ";
    std::cin >> salario;
    sistema->setFuncionario(nomematricula[0], nomematricula[1], salario);

    menuConsulta(sistema);
  };
  void menuHoristaComissao(Sistema *sistema, int tipo){
    double salario,valor1, valor2;
    std::string nomematricula[2];

    menuNomeMatricula(nomematricula);

    std::cout << "Digite o salario do funcionario: ";
    std::cin >> salario;

    if(tipo == 2){
      std::cout << "Digite o salario por hora: ";
      std::cin >> valor1;
      std::cout << "Horas trabalhads: ";
      std::cin >> valor2;
    }else if(tipo == 3){
      std::cout << "Digite a quantia vendida: ";
      std::cin >> valor1;
      std::cout << "Percentual por venda: ";
      std::cin >> valor2;
    }

    sistema->setFuncionario(nomematricula[0], nomematricula[1], salario, valor1, valor2, tipo);

    menuConsulta(sistema);
  };

  void menuNomeMatricula(std::string nomematricula[]){
    std::string pega_endl;

    getline(std::cin, pega_endl);

    std::cout << "Digite o nome e matricula do funcionario: \n  Nome: ";
    getline(std::cin, nomematricula[0]);
    std::cout << "  Matricula: ";
    getline(std::cin, nomematricula[1]);
  };

  void menuPrincipal(Sistema *sistema){
    int escolha, n = 1;

    while(n){
      LOTO:std::cout << "Qual o tipo de salario do funcionario:\n  1-Assalariado\n  2-Horista\n  3-Comissionado\n  0-Sair\n";
      std::cin >> escolha;

      switch(escolha){
        case 1:
        menuGetSalario(sistema);
        break;
        case 2:
        menuHoristaComissao(sistema, escolha);
        break;
        case 3:
        menuHoristaComissao(sistema, escolha);
        break;
        case 0:
        n = 0;
        break;
        default:
        std::cout << "Digite uma opção válida.\n";
        goto LOTO;
        break;
      }
    }
  };
};

#endif
