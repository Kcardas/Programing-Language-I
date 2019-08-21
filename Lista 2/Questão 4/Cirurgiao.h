#ifndef CIRURGIAO_CIRURGIAO_H
#define CIRURGIAO_CIRURGIAO_H

#include "Medico.h"

class Cirurgiao : public Medico{
private:
  std::string especialidade;
  bool ocupado;
public:
  Cirurgiao();
  Cirurgiao(std::string, double, double);
  virtual ~Cirurgiao();
  std::string getEspecialidade();
  bool getOcupado();
  void setEspecialidade(std::string);
  void setOcupado(bool);
};

#endif
