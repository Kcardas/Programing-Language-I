#include <iostream>

#include "ValorAcima.h"

void ValorAcima::valorAcimaException(int numero){
  try{
    if(numero > 100 && numero < 1000){
      throw 2;
    }
  }

  catch(int x){
    std::cout << "ERROR: " << x << std::endl;
  }
};
