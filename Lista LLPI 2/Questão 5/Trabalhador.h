#ifndef TRABALHADOR_TRABALHADOR_H
#define TRABALHADOR_TRABALHADOR_H

class Trabalhador{
private:
  std::string nome;
  float salario;
public:
  Trabalhador();
  Trabalhador(std::string);
  Trabalhador(std::string, float);
  virtual ~Trabalhador();
  std::string getNome();
  float getSalario();
  void setNome(std::string);
  void setSalario(float);
  virtual float calculaPagamentoSemanal();
};

#endif
