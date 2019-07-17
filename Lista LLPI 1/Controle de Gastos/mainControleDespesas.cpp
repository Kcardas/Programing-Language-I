#include <iostream>
#include "Despesas.h"
#include "ControleDeGastos.h"

using namespace std;

int main(){

  double valor;
  int posicao;
  string tipoDeGasto;

  Controle controle = Controle();

  cout << "Digite a posição (de 0 ate 10) no vetor que desejas add uma despesa, o valor dela e o seu tipo: ";
  cin >> posicao >> valor >> tipoDeGasto;

  controle.setDespesas(valor, tipoDeGasto, posicao);

  cout << "A despesa total sera de: " << controle.valorTotal() << endl;

  cout << "Digite um tipo de gasto para procurar uma despesa: ";
  cin >> tipoDeGasto;

  if(controle.existeDespesaTipo(tipoDeGasto)){
    cout << "Existe esse tipo de despesa.\n";
  }else{
    cout << "Não existe esse tipo de despesa.\n";
  }

  cout << "Digite outra posição (de 0 ate 10) no vetor que desejas add uma despesa, o valor dela e o seu tipo: ";
  cin >> posicao >> valor >> tipoDeGasto;

  controle.setDespesas(valor, tipoDeGasto, posicao);

  cout << "A despesa total sera de: " << controle.valorTotal() << endl;

  cout << "Digite um tipo de gasto para procurar uma despesa: ";
  cin >> tipoDeGasto;

  if(controle.existeDespesaTipo(tipoDeGasto)){
    cout << "Existe esse tipo de despesa.\n";
  }else{
    cout << "Não existe esse tipo de despesa.\n";
  }

  return 0;
}
