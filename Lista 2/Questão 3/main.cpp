#include <iostream>

#include "Sistema.h"
#include "Menu.h"

int main(){

  std::string nome, matricula, pega_endl;
  int escolha;
  double salario;
  Sistema sistema;
  Menu menu;

  while(1){
    std::cout << "Digite o nome e matricula do funcionario: \n  Nome: ";
    getline(std::cin, nome);
    std::cout << "  Matricula: ";
    getline(std::cin, matricula);

    LOTO:std::cout << "Qual o tipo de salario do funcionario:\n  1-Assalariado\n  2-Horista\n  3-Comissionado\n  0-Sair\n";
    std::cin >> escolha;

    switch(escolha){
      case 1:
      menu.menuGetSalario(nome, matricula, &sistema);
      getline(std::cin, pega_endl);
      menu.menuConsulta(&sistema);
      break;
      case 2:
      menu.menuHoristaComissao(nome, matricula, salario, &sistema, escolha);
      getline(std::cin, pega_endl);
      menu.menuConsulta(&sistema);
      break;
      case 3:
      menu.menuHoristaComissao(nome, matricula, salario, &sistema, escolha);
      getline(std::cin, pega_endl);
      menu.menuConsulta(&sistema);
      break;
      case 0:
      return 1;
      default:
      std::cout << "Digite uma opção válida.\n";
      goto LOTO;
      break;
    }
  }

  return 0;
}
