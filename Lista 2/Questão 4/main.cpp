#include <iostream>
#include <vector>

#include "includer.h"

int main(){

  std::vector<Medico *> myVector;
  std::string nome;

  Oftalmo *oftalmo = new Oftalmo("João", 1.75, 70);
  oftalmo->setOcupado(true);

  myVector.push_back(oftalmo);

  Otorrino *otorrino = new Otorrino("Roberval", 1.60, 68);
  otorrino->setOcupado(false);

  myVector.push_back(otorrino);

  Cirurgiao *cirurgiao = new Cirurgiao("Maria", 1.68, 56);
  cirurgiao->setOcupado(false);

  myVector.push_back(cirurgiao);

  Ginecologista *ginecologista = new Ginecologista("Marta", 1.70, 57);
  ginecologista->setOcupado(true);

  myVector.push_back(ginecologista);

  for(auto &i: myVector){
    std::cout << i->toString() << "Especialidade: " << i->getEspecialidade() << std::endl;

    if(i->getOcupado()){
      std::cout << i->getNome() << " está ocupado com um paciente no momento, aguarde um pouco.\n";
    }else{
      std::cout << i->getNome() << " está pronto(a) para lhe atender.\n";
    }

    std::cout << "============================\n";
  }

  return 0;
}
