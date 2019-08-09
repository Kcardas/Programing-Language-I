#include <iostream>

#include "Sistema.h"
#include "Menu.h"

int main(){

  int n = 1;
  Sistema sistema;
  Menu menu;

  while(n){
    n = menu.menuPrincipal(&sistema);
  }

  return 0;
}
