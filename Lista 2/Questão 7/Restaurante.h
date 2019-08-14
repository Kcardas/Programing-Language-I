#ifndef RESTAURANTE_RESTAURANTE_H
#define RESTAURANTE_RESTAURANTE_H

#include "Mesa.h"

using namespace std;

class Restaurante{
private:
  vector<Mesa> mesas;
public:
  Restaurante();
  bool addPedido(int, string, int, float, int);
  float calculaTotalRestaurante();
  void zeraPedidosMesa(int);
};

#endif
