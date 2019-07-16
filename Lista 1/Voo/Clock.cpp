#include <iostream>
#include "Clock.h"

Clock::Clock(){}

Clock::Clock(int hour, int minute, int second){
  if(hour > 24){
    this->hour = 00;
  }else{
    this->hour = hour;
  }
  if(minute > 59){
    this->minute = 00;
  }else{
    this->minute = minute;
  }
  if(second > 59){
    this->second = 00;
  }else{
    this->second = second;
  }
};

int Clock::GetHour(){
  return hour;
};

void Clock::SetHour(int hour){
  if(hour > 24){
    this->hour = 00;
  }else{
    this->hour = hour;
  }
};

int Clock::GetMinute(){
  return minute;
};

void Clock::SetMinute(int minute){
  if(minute > 59){
    this->minute = 00;
  }else{
    this->minute = minute;
  }
};

int Clock::GetSecond(){
  return second;
};

void Clock::SetSecond(int second){
  if(second > 59){
    this->second = 00;
  }else{
    this->second = second;
  }
};

void Clock::SetClock(int hour, int minute, int second){
  if(hour > 24){
    this->hour = 00;
  }else{
    this->hour = hour;
  }
  if(minute > 59){
    this->minute = 00;
  }else{
    this->minute = minute;
  }
  if(second > 59){
    this->second = 00;
  }else{
    this->second = second;
  }
};

void Clock::Clocking(){
  second++;
  if(second > 59){
    minute++;
    second = 0;
  }
  if(minute > 59){
    hour++;
    minute = 0;
  }
  if(hour > 23){
    hour = 0;
  }
};
