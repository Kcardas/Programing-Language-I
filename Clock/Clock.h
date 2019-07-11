#include <iostream>

using namespace std;

class Clock{
  private:
    int hour;
    int minute;
    int second;
  public:
    int GetHour();
    void SetHour(int hour);
    int GetMinute();
    void SetMinute(int minute);
    int GetSecond();
    void SetSecond(int second);
    void SetClock(int hour, int minute, int second);
    void Clocking();//"avançaHorario()"
    Clock();
    Clock(int hour, int minute, int second);
};
