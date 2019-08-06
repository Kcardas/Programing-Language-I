#include <iostream>
#include <sstream>

#include "Conta.h"

Conta::Conta(){};

Conta::Conta(std::string nomeCliente, double salarioMensal, std::string numeroConta, double saldo){
  setNomeCliente(nomeCliente);
  setSalarioMensal(salarioMensal);
  setNumeroConta(numeroConta);
  setSaldo(saldo);
  definirLimite();
};

std::string Conta::getNomeCliente(){
  return nomeCliente;
};

double Conta::getSalarioMensal(){
  return salarioMensal;
};

std::string Conta::getNumeroConta(){
  return numeroConta;
};

double Conta::getSaldo(){
  return saldo;
};

double Conta::getLimite(){
  return limite;
};

void Conta::setNomeCliente(std::string nomeCliente){
  this->nomeCliente = nomeCliente;
};

void Conta::setSalarioMensal(double salarioMensal){
  this->salarioMensal = salarioMensal;
};

void Conta::setNumeroConta(std::string numeroConta){
  this->numeroConta = numeroConta;
};

void Conta::setSaldo(double saldo){
  this->saldo = saldo;
};

void Conta::setLimite(double limite){
  this->limite = limite;
};

void Conta::definirLimite(){
  limite = 2 * salarioMensal;
};

void Conta::sacar(double saque){
  saldo -= saque;
};

void Conta::depositar(double deposito){
  saldo += deposito;
};

std::string Conta::toString(){
  std::stringstream sstr;

  sstr << "Conta:\n" << "  Nome: " << getNomeCliente() << std::endl << "  Numero da conta: " << getNumeroConta() << std::endl << "  Salario Mensal: " << getSalarioMensal()
  << std::endl << "  Saldo: " << getSaldo() << std::endl << "  Limite: " << getLimite() << std::endl;

  return sstr.str();
};
