#ifndef DATA_DATA_H
#define DATA_DATA_H

#include <iostream>
#include <string>

using namespace std;

class Data{
private:
  int dia;
  int mes;
  int ano;
public:
  int GetDia();
  void SetDia(int dia);
  int GetMes();
  void SetMes(int mes);
  int GetAno();
  void SetAno(int ano);
  int Compare(Data data);
  string GetMesExtenso();
  bool IsBissexto();
  Data();
  Data(int dia, int mes, int ano);
};

#endif
