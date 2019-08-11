#include <iostream>

#include "Valida.h"
#include "ValorAbaixo.h"
#include "ValorAcima.h"
#include "ValorMuitoAcima.h"

void Valida::validaNumero(int numero){

  ValorAbaixo x;
  ValorAcima y;
  ValorMuitoAcima z;

  x.valorAbaixoException(numero);
  y.valorAcimaException(numero);
  z.valorMuitoAcimaException(numero);

};
