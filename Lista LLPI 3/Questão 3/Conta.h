#ifndef CONTA_CONTA_H
#define CONTA_CONTA_H


#include <iostream>

class Conta{
protected:
  std::string clientName;
  int number;
  double balance;
public:
  Conta();
  Conta(std::string, int, double);
  virtual ~Conta();

  std::string getClientName();
  int getNumber();
  double getBalance();

  void setClientName(std::string);
  void setNumber(int);
  void setBalacne(double);

  void withdraw(double);
  void deposit(double);

  virtual double revenue(){return 0;};
};

#endif
