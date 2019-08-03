#include <iostream>

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
  Trabalhador *t[2];

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

      t[0] = new TrabalhadorPorHora(nome, valor_hora);

      std::cout << "Nome: " << t[0]->getNome() << std::endl << "Salario semanal: " << t[0]->calculaPagamentoSemanal(horas) <<
      std::endl;
      }

      break;
      case 2:
      {
      std::cout << "Digite o nome: ";
      getline(std::cin, nome);
      std::cout << "Digite o valor do salario mensal: ";
      std::cin >> salario;

      t[1] = new TrabalhadorA(nome, salario);

      std::cout << "Nome: " << t[1]->getNome() << std::endl << "Salario semanal: " << t[1]->calculaPagamentoSemanal() <<
      std::endl;
      }

      break;
      case 0:
      return 1;
    }
  }

  return 0;
}
