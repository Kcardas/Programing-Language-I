#include <iostream>

#include "Medico.h"

Medico::Medico(){};

Medico::Medico(std::string nome, double altura, double peso){
  setNome(std::string nome);
  setAltura(double altura);
  setPeso(double peso);
}
