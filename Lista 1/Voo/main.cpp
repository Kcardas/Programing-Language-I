#include <iostream>
#include "Voo.h"
#include "Data.h"
#include "Clock.h"

using namespace std;

int main(){
  int hour, minute, second, flightNumber;
  int dia, mes, ano, i;

  Data dataVoo;

  cout << "Digite o numero do voo: ";
  cin >> flightNumber;
  cout << "Agora a hora (Com um espaço entre as horas, minutos e segundos): ";
  cin >> hour >> minute >> second;
  cout << "E a data(Com um espaço entre o dia, mes e ano): ";
  cin >> dia >> mes >> ano;

  Voo voo = Voo(flightNumber, dia, mes, ano, hour, minute, second);
  dataVoo = voo.getData();

  cout << "Numero de voo: " << voo.getFlightNumber() << endl;
  cout << "Data do voo: " << dataVoo.GetDia() << "/" << dataVoo.GetMes() << "/" << dataVoo.GetAno() << endl;
  cout << "Hora do voo: ";
  voo.getClock();

  voo.nextSit();

  cout << "Digite um numero do assento entre 1 a 100 que desejas ocupar: ";
  cin >> i;

  if(voo.ocupy(i-1)){
    cout << "Operação foi bem sucedida!\n";
  }else{
    cout << "Este assento ja esta ocupado!\n";
  }

  cout << "Digite um numero do assento entre 1 a 100 para verificar se ele esta livre: ";
  cin >> i;

  if(voo.verify(i-1)){
    cout << "Este assento esta ocupado.\n";
  }else{
    cout << "Este assento esta livre.\n";
  }

  cout << "O numero de cadeiras vagas sao: " << voo.vagueSits() << endl;

  cout << "Digite um numero do assento entre 1 a 100 que desejas ocupar: ";
  cin >> i;

  if(voo.ocupy(i-1)){
    cout << "Operação foi bem sucedida!\n";
  }else{
    cout << "Este assento ja esta ocupado!\n";
  }

  cout << "Digite um numero do assento entre 1 a 100 para verificar se ele esta livre: ";
  cin >> i;

  if(voo.verify(i-1)){
    cout << "Este assento esta ocupado.\n";
  }else{
    cout << "Este assento esta livre.\n";
  }

  cout << "O numero de cadeiras vagas sao: " << voo.vagueSits() << endl;

  return 0;
}
