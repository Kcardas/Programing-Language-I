#include <iostream>
#include <sstream>

#include "Endereco.h"

using namespace std;

Endereco::Endereco(){};

Endereco::Endereco(string rua, string bairro, string cidade, string estado, string cep, int numero){
  setRua(rua);
  setBairro(bairro);
  setCidade(cidade);
  setEstado(estado);
  setCep(cep);
  setNumero(numero);
};

string Endereco::getRua(){
  return rua;
};

string Endereco::getBairro(){
  return bairro;
};

string Endereco::getCidade(){
  return cidade;
};

string Endereco::getEstado(){
  return estado;
};

string Endereco::getCep(){
  return cep;
};

int Endereco::getNumero(){
  return numero;
};

void Endereco::setRua(string rua){
  this->rua = rua;
};

void Endereco::setBairro(string bairro){
  this->bairro = bairro;
};

void Endereco::setCidade(string cidade){
  this->cidade = cidade;
};

void Endereco::setEstado(string estado){
  this->estado = estado;
};

void Endereco::setCep(string cep){
  this->cep = cep;
};

void Endereco::setNumero(int numero){
  this->numero = numero;
};

string Endereco::toString(){
  stringstream sstr;

  sstr << "  Rua: " << rua << std::endl << "  Bairro: " << bairro << endl << "  Cidade: " << cidade << endl << "  Estado: " << estado << endl
  << "  Cep: " << cep << endl << "  Numero: " << numero << endl;

  return sstr.str();
};
