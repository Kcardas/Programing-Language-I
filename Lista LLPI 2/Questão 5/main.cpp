#include <iostream>
#include <vector>

#include "Trabalhador.h"
#include "TrabalhadorA.h"
#include "TrabalhadorPorHora.h"

void MenuPrincipal(){
  std::cout << "Digite o numero corresponde a opção:\n" << "  1-Cadastrar trabalhador por hora.\n"
  << "  2-Cadastrar trabalhador por mês.\n" << "  0-Sair.\n";
}

int main(){

  std::string nome, barra_n_safado;
  float salario, valor_hora;
  int escolha, horas;

  while(1){
    MenuPrincipal();
    std::cin >> escolha;
    getline(std::cin, barra_n_safado);

    switch (escolha) {
      case 1:
      {
      std::cout << "Digite o nome: ";
      getline(std::cin, nome);
      std::cout << "Digite o valor recebido por hora: ";
      std::cin >> valor_hora;
      std::cout << "Digite as horas trabalhadas na semana: ";
      std::cin >> horas;

      TrabalhadorPorHora tPH = TrabalhadorPorHora(nome, valor_hora);

      std::cout << "Nome: " << tPH.getNome() << std::endl << "Salario semanal: " << tPH.calculaPagamentoSemanal(horas) <<
      std::endl;
      }

      break;
      case 2:
      {
      std::cout << "Digite o nome: ";
      getline(std::cin, nome);
      std::cout << "Digite o valor do salario mensal: ";
      std::cin >> salario;

      TrabalhadorA tA = TrabalhadorA(nome, salario);

      std::cout << tA.getSalario() << std::endl;

      std::cout << "Nome: " << tA.getNome() << std::endl << "Salario semanal: " << tA.calculaPagamentoSemanal() <<
      std::endl;
      }

      break;
      case 0:
      return 1;
    }
  }

  return 0;
}
