#include <iostream>
#include <string>
#include "Data.h"

using namespace std;

int main(){
  int dia, mes, ano, numeroDeAvancos;

  cout << "Digite o dia, o mes e o ano: ";
  cin >> dia >> mes >> ano;

  Data data = Data(dia, mes, ano);

  cout << data.GetDia() << "/" << data.GetMes() << "/" << data.GetAno() << endl;

  data.SetDia(dia);
  data.SetMes(mes);
  data.SetAno(ano);

  data = Data(dia, mes, ano);

  cout << data.GetDia() << "/" << data.GetMes() << "/" << data.GetAno() << endl;

  cout << "Digite quantos dias queres avançar: ";
  cin >> numeroDeAvancos;

  system("sleep 1");
  system("Clear");

  while(numeroDeAvancos){
    cout << data.GetDia() << "/" << data.GetMes() << "/" << data.GetAno() << endl;
    data.avancaData();
    system("sleep 1");
    system("clear");
    numeroDeAvancos--;
  }

}
