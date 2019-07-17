#include <iostream>
#include <string>
#include "Empregado.h"

using namespace std;

int main(){
  string name, surname;
  double salaryPerMonth;

  cout << "Digite o nome, o sobrenome e o salaraio do funcionario 1: ";
  cin >> name >> surname >> salaryPerMonth;

  Empregado empregado1 = Empregado(name, surname, salaryPerMonth);

  cout << "Digite o nome, o sobrenome e o salaraio do funcionario 2: ";
  cin >> name >> surname >> salaryPerMonth;

  Empregado empregado2 = Empregado();

  empregado2.setName(name);
  empregado2.setSurname(surname);
  empregado2.setSalarayPerMonth(salaryPerMonth);

  cout << "Nome do funcionario 1: " << empregado1.getName() << " " << empregado1.getSurname() << endl;
  cout << "Salario mensal: " << empregado1.getSalaryPerMonth() << endl;
  cout << "Salario anual: " << empregado1.getSalaryPerMonth()*12 << endl;
  cout << "Aumento salarial de 10%: " << empregado1.getSalaryPerMonth()*1.1 <<  endl;
  cout << "Nome do funcionario 2: " << empregado2.getName() << " " << empregado2.getSurname() << endl;
  cout << "Salario mensal: " << empregado2.getSalaryPerMonth() << endl;
  cout << "Salario anual: " << empregado2.getSalaryPerMonth()*12 << endl;
  cout << "Aumento salarial de 10%: " << empregado2.getSalaryPerMonth()*1.1 <<  endl;


return 0;
}
