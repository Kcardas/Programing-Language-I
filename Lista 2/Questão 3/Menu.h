#ifndef MENU_MENU_H
#define MENU_MENU_H

#include <iostream>
#include <vector>

#include "Comissionado.h"
#include "Horista.h"
#include "Assalariado.h"

class Menu{
public:
  Menu(){};
  void menuConsulta(Sistema *sistema){
    std::string parametro;

    std::cout << "Digite o nome ou a matricula do funcionario: ";
    getline(std::cin, parametro);
    std::cout << sistema->consultaSalario(parametro);
    std::cout << "Total: " << sistema->calculaValorTotal() << std::endl;
  };
  void menuGetSalario(std::string nome, std::string matricula, Sistema *sistema){
    double salario;

    std::cout << "Digite o salario do funcionario: ";
    std::cin >> salario;
    sistema->setFuncionario(nome, matricula, salario);
  };
  void menuHoristaComissao(std::string nome, std::string matricula, double salario, Sistema *sistema, int tipo){
    double valor1, valor2;

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

    sistema->setFuncionario(nome, matricula, salario, valor1, valor2, tipo);
  }
};

#endif
