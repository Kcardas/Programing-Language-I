#ifndef FUNCIONARIO_FUNCIONARIO_H
#define FUNCIONARIO_FUNCIONARIO_H

class Funcionario{
protected:
  std::string nome;
  std::string matricula;
  int tipo;
public:
  Funcionario();
  Funcionario(std::string, std::string);
  std::string getNome();
  std::string getMatricula();
  int getTipo();
  void setTipo(int);
  void setNome(std::string);
  void setMatricula(std::string);
  virtual double calculaSalario() = 0;
};

#endif
