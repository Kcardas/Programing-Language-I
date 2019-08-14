#ifndef MESA_MESA_H
#define MESA_MESA_H

#include "Pedidos.h"
#include <vector>

using namespace std;

class Mesa{
private:
  vector<Pedidos> pedidos;
  int numero_Mesa;
public:
  Mesa();
  virtual ~Mesa(){};
  int getNumeroMesa();
  void setNumeroMesa(int);
  bool comparaPedido(int);
  void addQuantidadePedido(int);
  void addPedido(int, string, int, float);
  void zeraPedidos();
  float calculaTotal();
};

#endif
