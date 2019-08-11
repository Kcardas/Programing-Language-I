#include <iostream>

#include "Valida.h"

int main(){

  Valida valida;

  int numero;

  std::cout << "Digite um numero: ";
  std::cin >> numero;

  valida.validaNumero(numero);

  return 0;
}
