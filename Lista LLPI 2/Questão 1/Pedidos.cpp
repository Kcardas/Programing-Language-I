#include <iostream>
#include "Pedidos.h"

using namespace std;

Pedidos::Pedidos(){};

Pedidos::Pedidos(int numero_Pedido, string descricao_Pedido, int quantidade_Pedido, float preco_Pedido){
  setNumeroPedido(numero_Pedido);
  setDescricaoPedido(descricao_Pedido);
  setQuantidadePedido(quantidade_Pedido);
  setPrecoPedido(preco_Pedido);
};

int Pedidos::getNumeroPedido(){
  return numero_Pedido;
};

string Pedidos::getDescricaoPedido(){
  return descricao_Pedido;
};

int Pedidos::getQuantidadePedido(){
  return quantidade_Pedido;
};

float Pedidos::getPrecoPedido(){
  return preco_Pedido;
};

void Pedidos::setNumeroPedido(int numero_Pedido){
  this->numero_Pedido = numero_Pedido;
};

void Pedidos::setDescricaoPedido(string descricao_Pedido){
  this->descricao_Pedido = descricao_Pedido;
};

void Pedidos::setQuantidadePedido(int quantidade_Pedido){
  this->quantidade_Pedido = quantidade_Pedido;
};

void Pedidos::setPrecoPedido(float preco_Pedido){
  this->preco_Pedido = preco_Pedido;
};
