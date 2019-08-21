#include <iostream>
#include <fstream>
#include <string.h>

#include "Salvar.h"

Salvar::Salvar() {
	// TODO Auto-generated constructor stub

}

void Salvar::recoverFile() {
	std::ifstream file;
	char buffer[500];

	file.open("Teste.txt");

	if(!file.is_open()){
		return;
	}

	while(true){
		file.getline(buffer, 200);

		for(int i=0; ; i++){
			if(buffer[i+1]== '\0'){
				buffer[i+1] = '\n';
				buffer[i+2] = '\0';
				break;
			}
		}

		strcat(this->data, buffer);
		if (file.bad() | file.eof() | file.fail() )
		  break;
	}

	file.close();

	return;
}

void Salvar::saveFile() {
	std::ofstream file;

	file.open("back_up.txt");

	if(!file.is_open()){
		return;
	}

	for(int i=0; this->data[i] != '\0'; i++){
		file << data[i];
	}

	file.close();
}

char* Salvar::getData() {
	return this->data;
}

Salvar::~Salvar() {
	delete data;
}
