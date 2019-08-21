#include <iostream>

#include "Salvar.h"

int main(){

  Salvar save;
	char *string;

	save.recoverFile();

	string = save.getData();

	for(int i=0; string[i] != '\0'; i++){
		std::cout << string[i] << std::flush;
	}

	save.saveFile();

  return 0;
}
