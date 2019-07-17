#include <iostream>
#include "Despesas.h"
#include "ControleDeGastos.h"

using namespace std;

Despesas::Despesas(){};

Despesas::Despesas(double valor, string tipoDeGasto){
  setValor(valor);
  setTipoDeGasto(tipoDeGasto);
};

double Despesas::getValor(){
  return valor;
};

void Despesas::setValor(double valor){
  this->valor = valor;
};

string Despesas::getTipoDeGasto(){
  return tipoDeGasto;
};

void Despesas::setTipoDeGasto(string tipoDeGasto){
  this->tipoDeGasto = tipoDeGasto;
};

Despesas::~Despesas(){};

Controle::Controle(){
  for(int i = 0; i < 11; i++){
    despesas[i] = Despesas(0, "NULL");
  }
};

void Controle::setDespesas(double valor, string tipoDeGasto, int posicao){
  despesas[posicao].setValor(valor);
  despesas[posicao].setTipoDeGasto(tipoDeGasto);
};

double Controle::valorTotal(){
  double total = 0;
  for(int i = 0; i < 11; i++){
    total += despesas[i].getValor();
  }
  return total;
};

bool Controle::existeDespesaTipo(string tipoDeGasto){
  for(int i = 0; i < 11; i++){
    if(despesas[i].getTipoDeGasto() == tipoDeGasto){
      return true;
    }
  }
  return false;
};

Controle::~Controle(){};
