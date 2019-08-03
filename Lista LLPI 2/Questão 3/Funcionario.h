#ifndef FUNCIONARIO_FUNCIONARIO_H
#define FUNCIONARIO_FUNCIONARIO_H

using std::endl;
using std::string;
using std::stringstream;

class Funcionario{
protected:
  std::string matricula;
  std::string nome;
  float salario;
public:
  Funcionario();
  Funcionario(string, string, float);
  virtual ~Funcionario();
  std::string getMatricula();
  std::string getNome();
  virtual float getSalario();
  void setMatricula(std::string);
  void setNome(std::string);
  void setSalario(float);
  string toString();
};

#endif
