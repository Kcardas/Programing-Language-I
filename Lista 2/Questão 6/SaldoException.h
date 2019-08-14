#ifndef SALDOEXCEPTION_SALDOEXCEPTION_H
#define SALDOEXCEPTION_SALDOEXCEPTION_H

#include <exception>

class SaldoException : public std::exception{
public:
  const char *what() const throw(){
    return "Saldo insuficiente.\n";
  };
};

#endif
