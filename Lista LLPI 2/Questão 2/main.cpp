#include <iostream>
#include <climits>
#include <limits>

#include "Pessoa.h"

using namespace std;

int main(){

  std::string rua, bairro, cidade, estado, cep;
  int numero, n = 0;
  std::string nome, telefone, object, barra_n_safado;
  Pessoa pessoa[3];

  while(n < 3){
    cout << "Digite o nome da pessoa 1: ";
    getline(cin, nome);

    cout << "Digite o telefone: ";
    getline(cin, telefone);

    cout << "Digite o endereco: \n" << "  Rua: ";
    getline(cin, rua);
    cout << "  Bairro: ";
    getline(cin, bairro);
    cout << "  Cidade: ";
    getline(cin, cidade);
    cout << "  Estado: ";
    getline(cin, estado);
    cout << "  CEP: ";
    getline(cin, cep);
    cout << "  Numero: ";
    cin >> numero;
    getline(cin, barra_n_safado);

    Endereco endereco = Endereco(rua, bairro, cidade, estado, cep, numero);

    if(n == 2) break;

    pessoa[n] = Pessoa(nome, endereco, telefone);

    n++;
  }

  Endereco endereco = Endereco(rua, bairro, cidade, estado, cep, numero);

  pessoa[2] = Pessoa(nome);
  pessoa[2].setTelefone(telefone);
  pessoa[2].setEndereco(endereco);

  cout << "================================\n";

  for(int i = 0; i < 3; i++){
    object = pessoa[i].toString();

    cout << object;
  }

  return 0;
}
