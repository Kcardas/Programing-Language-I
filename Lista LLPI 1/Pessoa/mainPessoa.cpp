#include <iostream>
#include <string>
#include "Pessoa.h"

using namespace std;

int main(){

  string name, phone;
  int age;

  cout << "Digite o nome, a idade e o numero(sem espaço) da primeira pessoa: ";
  cin >> name >> age >> phone;

  Pessoa pessoa1 = Pessoa();

  pessoa1.setName(name);
  pessoa1.setAge(age);
  pessoa1.setPhone(phone);

  cout << "Digite o nome, a idade e o numero(sem espaço) da segunda pessoa: ";
  cin >> name >> age >> phone;

  Pessoa pessoa2 = Pessoa(name, age, phone);

  cout << "Nome da pessoa1: " << pessoa1.getName() << endl;
  cout << "Idade da pessoa1: " << pessoa1.getAge() << endl;
  cout << "Numero da pessoa1: " << pessoa1.getPhone() << endl;
  cout << "Nome da pessoa2: " << pessoa2.getName() << endl;
  cout << "Idade da pessoa2: " << pessoa2.getAge() << endl;
  cout << "Numero da pessoa2: " << pessoa2.getPhone() << endl;

  cout << "Digite o nome, a idade e o numero(sem espaço) da terceira pessoa: ";
  cin >> name >> age >> phone;

  Pessoa pessoa3 = Pessoa(name);

  pessoa3.setAge(age);
  pessoa3.setPhone(phone);

  cout << "Nome da pessoa3: " << pessoa3.getName() << endl;
  cout << "Idade da pessoa3: " << pessoa3.getAge() << endl;
  cout << "Numero da pessoa3: " << pessoa3.getPhone() << endl;

  return 0;
}
