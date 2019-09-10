#ifndef ORCAMENTOEXCEPTION_ORCAMENTOEXCEPTION_H
#define ORCAMENTOEXCEPTION_ORCAMENTOEXCEPTION_H

#include <exception>

class OrcamentoException : public std::exception{
public:
  const char *what() const throw(){
    return "Orçamento insuficiente.\n";
  };
};

#endif
