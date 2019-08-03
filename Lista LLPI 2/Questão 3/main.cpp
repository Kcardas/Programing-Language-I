#include <iostream>

#include "Funcionario.h"
#include "Consultor.h"

using std::string;
using std::endl;
using std::cout;
using std::cin;

int main(){

  string nome, matricula, printer;
  float salario, percentual;

  cout << "Digite o nome: ";
  getline(cin, nome);
  cout << "Digite a matricula: ";
  getline(cin, matricula);
  cout << "Digite o salario: ";
  cin >> salario;

  Funcionario funcionario = Funcionario(nome, matricula, salario);

  printer = funcionario.toString();

  cout << "=================================\n" << printer;

  Consultor consultor = Consultor(nome, matricula, salario);

  printer = consultor.toStringConsultor();

  cout << "=================================\n" << printer;

  cout << "Salario com 10%: " << consultor.getSalario() << endl;

  cout << "Digite um percentual: ";
  cin >> percentual;

  cout << "Salario com " << percentual << "%: " << consultor.getSalario(percentual) << endl;

  return 0;
}
