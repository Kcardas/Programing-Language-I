#include "Exemplo.h"

int main(){

  ExemploPai *exe[10];
  ExemploFilho1 exef1;
  ExemploFilho2 exef2;

  for(int i = 0; i < 10; i++){
    if(i%2 == 0){
      exe[i] = &exef1;
    }else{
      exe[i] = &exef2;
    }
  }

  for(auto &i: exe){
    i->polimorfismo();
  }

  return 0;
}
