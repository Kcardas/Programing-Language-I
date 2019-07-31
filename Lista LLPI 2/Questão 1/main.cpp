#include <iostream>
#include "Restaurante.h"

using namespace std;

int main(){
  Restaurante restaurante = Restaurante();

  int numero_Pedido, quantidade_Pedido, numero_Mesa, i = 1;
  float preco_Pedido, total;
  string descricao_Pedido;

  while(i){
    cout << "Qual o pedido e para qual mesa?\n";
    cin >> numero_Pedido >> numero_Mesa;
    cout << "Descrição do pedido?\n";
    cin >> descricao_Pedido;
    cout << "A quantidade e o preço?\n";
    cin >> quantidade_Pedido >> preco_Pedido;

    restaurante.addPedido(numero_Pedido, descricao_Pedido, quantidade_Pedido, preco_Pedido, numero_Mesa);

    total = restaurante.calculaTotalRestaurante();

    cout << "O total a pagar: " << total << endl << "Continuar? ";
    cin >> i;

    cout << "Deseja zerar uma mesa?\n";
    cin >> i;
  }

}
