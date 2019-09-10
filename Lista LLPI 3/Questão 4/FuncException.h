#ifndef FUNCEXCEPTION_FUNCEXCEPTION_H
#define FUNCEXCEPTION_FUNCEXCEPTION_H

#include <exception>

class FuncException : public std::exception{
public:
  const char *what() const throw(){
    return "Funcionario inexistente.\n";
  };
};

#endif
