#include <iostream>
#include <sstream>

#include "Sistema.h"

Sistema::Sistema(){};

void Sistema::setFuncionario(std::string nome, std::string matricula, double salario){
  Assalariado *objeto = new Assalariado(nome, matricula, salario);

  funcionario.push_back(objeto);
};

void Sistema::setFuncionario(std::string nome, std::string matricula, double salario, double valor1, double valor2, int tipo){
  if(tipo == 2){
    Horista *objeto = new Horista(nome, matricula, valor1, valor2, salario);

    funcionario.push_back(objeto);
  }else if(tipo == 3){
    Comissionado *objeto = new Comissionado(nome, matricula, valor1, valor2, salario);

    funcionario.push_back(objeto);
  }
};

double Sistema::calculaValorTotal(){
  double total = 0;

  for(auto &i: funcionario){
    total += i->calculaSalario();
  }

  return total;
};

std::string Sistema::consultaSalario(std::string paramentro){
  std::stringstream sstr;

  for(auto &i: funcionario){
    if(paramentro == i->getNome() || paramentro == i->getMatricula()){
      sstr << "Salario do funcionario " << paramentro << ": " << i->calculaSalario() << std::endl;
      return sstr.str();
    }else{
      sstr << "Nao foi possivel achar o funcionario.\n";
    }
  }
  return sstr.str();
};
