#ifndef MEDICO_MEDICO_H
#define MEDICO_MEDICO_H

class Medico{
private:
  std::string nome;
  double altura, peso;
public:
  Medico();
  Medico(std::string, double, double);
  std::string getNome();
  double getAltura();
  double getPeso();
  void setNome(std::string);
  void setAltura(double);
  void setPeso(double);
};

#endif
