
#include <iostream>
#include "Data.h"

using namespace std;

int main(){

  int dia, mes, ano;

  cout << "Digite a primeira data: ";

  cin >> dia >> mes >> ano;

  Data data1 = Data(dia, mes, ano);

  cout << "Digite a segunda data: ";

  cin >> dia >> mes >> ano;

  Data data2;

  data2.SetAno(ano);
  data2.SetMes(mes);
  data2.SetDia(dia);

  cout << "Data1: " << data1.GetDia() << "/" << data1.GetMes() << "(" << data1.GetMesExtenso() << ")" << "/" << data1.GetAno() << endl;
  cout << "Data2: " << data2.GetDia() << "/" << data2.GetMes() << "(" << data2.GetMesExtenso() << ")" << "/" << data2.GetAno() << endl;

  cout << data1.Compare(data2) << endl;

  if(data1.IsBissexto()){
    cout << "A primeira data eh ano bissexto\n";
  }else{
    cout << "A primeira data nao eh ano bissexto\n";
  }

  if(data2.IsBissexto()){
    cout << "A segunda data eh ano bissexto\n";
  }else{
    cout << "A segunda data nao eh ano bissexto\n";
  }

  return 0;
}
