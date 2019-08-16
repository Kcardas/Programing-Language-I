#ifndef OFTALMO_OFTALMO_H
#define OFTALMO_OFTALMO_H

#include "Medico.h"

class Oftalmo : public Medico{
private:
  std::string especialidade;
  bool ocupado;
public:
  Oftalmo(std::string, double, double, std::string);
  virtual ~Oftalmo();
  std::string getEspecialidade();
  bool getOcupado();
  void setEspecialidade(std::string);
  void setOcupado(bool);
};

#endif
