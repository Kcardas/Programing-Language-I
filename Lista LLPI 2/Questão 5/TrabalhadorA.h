#ifndef TRABALHADORA_TRABALHADORA_H
#define TRABALHADORA_TRABALHADORA_H

class TrabalhadorA : public Trabalhador{
private:
  std::string nome;
  float salario;
public:
  TrabalhadorA();
  TrabalhadorA(std::string, float);
  virtual ~TrabalhadorA();
  float calculaPagamentoSemanal();
};

#endif
