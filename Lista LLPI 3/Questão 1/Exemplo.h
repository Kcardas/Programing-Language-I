#ifndef EXEMPLO_EXEMPLO_H
#define EXEMPLO_EXEMPLO_H

#include <iostream>

class ExemploPai {
public:
  virtual void polimorfismo(){};
};

class ExemploFilho1 : public ExemploPai {
public:
  void polimorfismo(){
    std::cout << "Classe ExemploFilho1 dentro de um array de ExemploPai.\n";
  };
};

class ExemploFilho2 : public ExemploPai {
public:
  void polimorfismo(){
    std::cout << "Classe ExemploFilho2 dentro de um array de ExemploPai.\n";
  };
};

#endif
