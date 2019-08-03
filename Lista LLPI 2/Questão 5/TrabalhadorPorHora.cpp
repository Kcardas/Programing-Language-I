#include <iostream>

#include "Trabalhador.h"
#include "TrabalhadorPorHora.h"

TrabalhadorPorHora::TrabalhadorPorHora(){};

TrabalhadorPorHora::TrabalhadorPorHora(std::string nome, float valor_hora) : Trabalhador(nome){
  setValorHora(valor_hora);
};

TrabalhadorPorHora::~TrabalhadorPorHora(){};

float TrabalhadorPorHora::getValorHora(){
  return valor_hora;
};

void TrabalhadorPorHora::setValorHora(float valor_hora){
  this->valor_hora = valor_hora;
};

float TrabalhadorPorHora::calculaPagamentoSemanal(int horas){
  float horas_extras, valor;

  if(horas <= 40){
    return valor_hora * horas;
  }else{
    horas_extras = (horas - 40) * 1.5;
    return valor_hora * (40 + horas_extras);
  }
};
