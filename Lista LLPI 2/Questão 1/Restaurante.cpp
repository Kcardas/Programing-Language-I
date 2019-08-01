#include <iostream>
#include "Restaurante.h"

using namespace std;

Restaurante::Restaurante(){};

bool Restaurante::addPedido(int numero_Pedido, string descricao_Pedido, int quantidade_Pedido, float preco_Pedido, int numero_Mesa){
  for(auto &i: mesas){
    if(i.getNumeroMesa() == numero_Mesa){
      if(i.comparaPedido(numero_Pedido)){
        i.addQuantidadePedido(numero_Pedido);
        return true;
      }else{
        i.addPedido(numero_Pedido, descricao_Pedido, quantidade_Pedido, preco_Pedido);
        return true;
      }
    }
  };

  Mesa mesa = Mesa();

  mesa.setNumeroMesa(numero_Mesa);

  mesa.addPedido(numero_Pedido, descricao_Pedido, quantidade_Pedido, preco_Pedido);

  mesas.push_back(mesa);

  return false;
};

float Restaurante::calculaTotalRestaurante(){
  float total = 0;

  for(auto &i: mesas){
    total += i.calculaTotal();
  }

  return total;
};

void Restaurante::zeraPedidosMesa(int numero_Mesa){


  for(auto &i: mesas){
    if(i.getNumeroMesa() == numero_Mesa){
      i.zeraPedidos();
    }
  }
};
