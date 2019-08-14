#include <iostream>
#include "Mesa.h"

using namespace std;

Mesa::Mesa(){};

int Mesa::getNumeroMesa(){
  return numero_Mesa;
};

void Mesa::setNumeroMesa(int numero_Mesa){
  this->numero_Mesa = numero_Mesa;
};

void Mesa::addPedido(int numero_Pedido, string descricao_Pedido, int quantidade_Pedido, float preco_Pedido){
  Pedidos pedido = Pedidos(numero_Pedido, descricao_Pedido, quantidade_Pedido, preco_Pedido);

  pedidos.push_back(pedido);
};

void Mesa::zeraPedidos(){
  pedidos.clear();
};

bool Mesa::comparaPedido(int numero_Pedido){
  for(auto &i: pedidos){
    if(i.getNumeroPedido() == numero_Pedido){
      return true;
    }
  }

  return false;
};

void Mesa::addQuantidadePedido(int numero_Pedido){

  for(auto &i: pedidos){
    if(i.getNumeroPedido() == numero_Pedido){
      i.setQuantidadePedido(i.getQuantidadePedido() + 1);
    }
  };
};

float Mesa::calculaTotal(){
  float total = 0;

  for(auto &i: pedidos){
    total += i.getPrecoPedido() * i.getQuantidadePedido();
  }

  return total;
};
