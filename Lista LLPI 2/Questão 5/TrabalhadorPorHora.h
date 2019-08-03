#ifndef TRABALHADORPORHORA_TRABALHADORPORHORA_H
#define TRABALHADORPORHORA_TRABALHADORPORHORA_H

class TrabalhadorPorHora : public Trabalhador{
private:
  std::string nome;
  float valor_hora;
public:
  TrabalhadorPorHora();
  TrabalhadorPorHora(std::string, float);
  virtual ~TrabalhadorPorHora();
  float getValorHora();
  void setValorHora(float);
  float calculaPagamentoSemanal(int);
};

#endif
