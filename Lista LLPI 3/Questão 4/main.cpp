#include <iostream>

#include "Sistema.h"
#include "Menu.h"

int main(){

  Sistema sistema;
  Menu menu;

  menu.menuPrincipal(&sistema);

  return 0;
}
