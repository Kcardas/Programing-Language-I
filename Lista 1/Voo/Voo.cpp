

#include <iostream>
#include "Voo.h"
#include "Data.h"
#include "Clock.h"

using namespace std;

Voo::Voo(int flightNumber, int dia, int mes, int ano, int hour, int minute, int second){
  for(auto &i: sits){
    i = false;
  }

  this->flightNumber = flightNumber;

  dataVoo = Data(dia, mes, ano);
  clockVoo = Clock(hour, minute, second);

};

int Voo::getFlightNumber(){
  return flightNumber;
};

void Voo::getClock(){
  cout << clockVoo.GetHour() << ":" << clockVoo.GetMinute() << ":" << clockVoo.GetSecond() << endl;
};

Data Voo::getData(){
  return dataVoo;
};

void Voo::nextSit(){
  for(int i = 0; i < 100; i++){
    if(!sits[i]){
      cout << "Proximo assento eh: " << i+1 << endl;
    }else if(i == 99){
      cout << "Nao ha assentos disponiveis!\n";
    }
  }
};

bool Voo::verify(int i){
  if(sits[i]){
    return true;
  }else{
    return false;
  }
};

bool Voo::ocupy(int i){
  if(!sits[i]){
    sits[i] = true;
    return true;
  }else{
    return false;
  }
};

int Voo::vagueSits(){
  int counter = 0;
  for(int i = 0; i < 100; i++){
    if(!sits[i]){
      counter++;
    }
  }
  return counter;
};
