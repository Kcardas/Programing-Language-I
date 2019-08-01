#ifndef PESSOA_PESSOA_H
#define PESSOA_PESSOA_H

#include "Endereco.h"

class Pessoa{
private:
  std::string nome;
  Endereco endereco;
  std::string telefone;
public:
  Pessoa();
  Pessoa(std::string);
  Pessoa(std::string, Endereco, std::string);
  std::string getNome();
  Endereco getEndereco();
  std::string getTelefone();
  void setNome(std::string);
  void setEndereco(Endereco);
  void setTelefone(std::string);
  std::string toString();
};

#endif
