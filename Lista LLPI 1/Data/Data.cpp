#include <iostream>
#include <string>
#include "Data.h"

using namespace std;

Data::Data(){};

Data::Data(int dia, int mes, int ano){
  if(dia < 1 || dia > 31){
    this->dia = 01;
  }else{
    this->dia = dia;
  }
  if(mes < 1 || mes >12){
    this->mes = 01;
  }else{
    this->mes = mes;
  }
  if(ano < 1){
    this->ano = 01;
  }else{
    this->ano = ano;
  }
};

int Data::GetDia(){
  return dia;
};

void Data::SetDia(int dia){
  if(dia < 1 || dia > 31){
    this->dia = 01;
  }else{
    this->dia = dia;
  }
};

int Data::GetMes(){
  return mes;
};

void Data::SetMes(int mes){
  if(mes < 1 || mes >12){
    this->mes = 01;
  }else{
    this->mes = mes;
  }
};

int Data::GetAno(){
  return ano;
};

void Data::SetAno(int ano){
  if(ano < 1){
    this->ano = 01;
  }else{
    this->ano = ano;
  }
};

int Data::Compare(Data data){
  if(data.GetAno() < this->ano){
    return 1;
  }else if(data.GetAno() > this->ano){
    return -1;
  }else{
    if(data.GetMes() < this->mes){
      return 1;
    }else if(data.GetMes() > this->mes){
      return -1;
    }else{
      if(data.GetDia() < this->dia){
        return 1;
      }else if(data.GetDia() > this->dia){
        return -1;
      }else return 0;
    }
  }
};

string Data::GetMesExtenso(){
  switch(this->mes){
    case 1:
    return ("Janeiro");
    break;
    case 2:
    return ("Fevereiro");
    break;
    case 3:
    return ("Marco");
    break;
    case 4:
    return ("Abril");
    break;
    case 5:
    return ("Maio");
    break;
    case 6:
    return ("Junho");
    break;
    case 7:
    return ("Julho");
    break;
    case 8:
    return ("Agosto");
    break;
    case 9:
    return ("Setembro");
    break;
    case 10:
    return ("Outubro");
    break;
    case 11:
    return ("Novembro");
    break;
    case 12:
    return ("Dezembro");
    break;
    default:
    return 0;
  }
};

bool Data::IsBissexto(){
  if(this->ano % 4 == 0|| this->ano % 400 == 0){
    return true;
  }else{
    return false;
  }
};
