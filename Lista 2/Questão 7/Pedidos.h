#ifndef PEDIDOS_PEDIDOS_H
#define PEDIDOS_PEDIDOS_H

#include <iostream>

using namespace std;

class Pedidos{
private:
  int numero_Pedido;
  string descricao_Pedido;
  int quantidade_Pedido;
  float preco_Pedido;
public:
  Pedidos();
  Pedidos(int, string, int, float);
  int getNumeroPedido();
  string getDescricaoPedido();
  int getQuantidadePedido();
  float getPrecoPedido();
  void setNumeroPedido(int);
  void setDescricaoPedido(string);
  void setQuantidadePedido(int);
  void setPrecoPedido(float);
};

#endif
