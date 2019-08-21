#ifndef GINECOLOGISTA_GINECOLOGISTA_H
#define GINECOLOGISTA_GINECOLOGISTA_H

#include "Medico.h"

class Ginecologista : public Medico{
private:
  std::string especialidade;
  bool ocupado;
public:
  Ginecologista();
  Ginecologista(std::string, double, double);
  virtual ~Ginecologista();
  std::string getEspecialidade();
  bool getOcupado();
  void setEspecialidade(std::string);
  void setOcupado(bool);
};

#endif
