#include <iostream>
#include "Clock.h"

using namespace std;

int main(){

  int hour, minute, second, n = 60;

  cout << "Digite as horas os minutos e os segundos com um espaço entre eles.(Essa entrada irá testar todos os metodos da classe): ";

  cin >> hour >> minute >> second;

  Clock a1 = Clock(hour, minute, second);

  system("clear");

  a1.SetClock(hour, minute, second);

  a1.SetHour(hour);
  a1.SetMinute(minute);
  a1.SetSecond(second);

  cout << "Starting: " << endl;

  system("sleep 2");

  system("clear");

  while (n) {
    cout << "Couting\n";
    cout << a1.GetHour() << ":" << a1.GetMinute() << ":" << a1.GetSecond() << endl;
    a1.Clocking();
    system("sleep 1");
    system("clear");
    n--;
  }

  cout << "Finished!\n";

  system("sleep 1");

  system("clear");

  return 0;
}
