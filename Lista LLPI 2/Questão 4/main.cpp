#include <iostream>

#include "Circulo.h"
#include "Quadrado.h"
#include "Triangulo.h"

using std::endl;
using std::cout;
using std::cin;

int main(){

  float base, altura, raio;
  int escolha;
  Figura *fig[3];

  while(1){
    cout << "Digite o numero referente a opção: \n" << "  1-Calcular area de um quadrado.\n"
    << "  2-Calcular area de um triangulo.\n" << "  3-Calcular area de um circulo.\n" << "  0-Sair\n";
    cin >> escolha;
    switch(escolha){
      case 1:
      cout << "Digite a base e a altura: ";
      cin >> base >> altura;
      cout << "Area = ";

      fig[0] = new Quadrado;

      cout << fig[0]->calculaArea(base, altura) << endl;

      break;
      case 2:
      cout << "Digite a base e a altura: ";
      cin >> base >> altura;
      cout << "Area = ";

      fig[1] = new Triangulo;

      cout << fig[1]->calculaArea(base, altura) << endl;
      break;
      case 3:
      cout << "Digite o raio: ";
      cin >> raio;
      cout << "Area = ";

      fig[2] = new Circulo;

      cout << fig[2]->calculaArea(raio) << endl;
      break;
      case 0:
      return 1;
    }
  }

  return 0;
}
