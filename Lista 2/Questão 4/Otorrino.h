#ifndef OTORRINO_OTORRINO_H
#define OTORRINO_OTORRINO_H

#include "Medico.h"

class Otorrino : public Medico {
private:
  std::string especialidade;
  bool ocupado;
public:
  Otorrino();
  Otorrino(std::string, double, double);

  std::string getEspecialidade();
  bool getOcupado();

  void setEspecialidade(std::string);
  void setOcupado(bool);

  virtual ~Otorrino();
};

#endif
