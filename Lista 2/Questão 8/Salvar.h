#ifndef SALVAR_H
#define SALVAR_H

class Salvar {
private:
	char *data = new char[500];
public:
	Salvar();

	void recoverFile();
	void saveFile();

	char* getData();

	virtual ~Salvar();
};

#endif
