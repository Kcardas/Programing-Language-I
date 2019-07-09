
#ifndef VOO_VOO_H
#define VOO_VOO_H

#include <iostream>
#include "Data.h"
#include "Clock.h"

using namespace std;

class Voo{
private:
  bool sits[100];
  Data dataVoo;
  Clock clockVoo;
  int flightNumber;
public:
  Voo();
  Voo(int flightNumber, int dia, int mes, int ano, int hour, int second, int minute);
  Data getData();
  void getClock();
  int getFlightNumber();
  void nextSit();
  bool verify(int i);
  bool ocupy(int i);
  int vagueSits();
};

#endif
