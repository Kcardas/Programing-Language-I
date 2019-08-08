#ifndef FUNCIONARIO_FUNCIONARIO_H
#define FUNCIONARIO_FUNCIONARIO_H

class Funcionario{
protected:
  std::string nome;
  std::string matricula;
public:
  Funcionario();
  Funcionario(std::string, std::string);
  std::string getNome();
  std::string getMatricula();
  void setNome(std::string);
  void setMatricula(std::string);
  virtual double calculaSalario() = 0;
};

#endif
