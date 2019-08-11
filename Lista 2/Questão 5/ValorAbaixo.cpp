#include <iostream>

#include "ValorAbaixo.h"

void ValorAbaixo::valorAbaixoException(int numero){
  try{
    if(numero <= 0){
      throw 1;
    }
  }

  catch(int x){
    std::cout << "ERROR: " << x << std::endl;
  }
};
