#include <iostream>

#include "ValorMuitoAcima.h"

void ValorMuitoAcima::valorMuitoAcimaException(int numero){
  try{
    if(numero >= 1000){
      throw 3;
    }
  }

    catch(int x){
      std::cout << "ERROR: " << x << std::endl;
    }
  };
