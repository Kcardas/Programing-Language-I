#include <iostream>
#include "Restaurante.h"

using namespace std;

Restaurante::Restaurante(){};

void Restaurante::addPedido(int numero_Pedido, string descricao_Pedido, int quantidade_Pedido, float preco_Pedido, int numero_Mesa){
  for(auto &i: mesas){
    if(i.getNumeroMesa() == numero_Mesa){
      if(i.comparaPedido(numero_Pedido)){
        i.addQuantidadePedido(numero_Pedido);
      }else{
        i.addPedido(numero_Pedido, descricao_Pedido, quantidade_Pedido, preco_Pedido);
      }
    }
  };

  Mesa mesa = Mesa();

  mesa.setNumeroMesa(numero_Mesa);

  mesa.addPedido(numero_Pedido, descricao_Pedido, quantidade_Pedido, preco_Pedido);

  mesas.push_back(mesa);
};

float Restaurante::calculaTotalRestaurante(){
  float total = 0;

  for(auto &i: mesas){
    total += i.calculaTotal();
  }

  return total;
};

void Restaurante::zeraPedidosMesa(int numero_Mesa){
  mesas[numero_Mesa].zeraPedidos();
};
