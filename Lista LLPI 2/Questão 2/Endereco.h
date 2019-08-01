#ifndef ENDERECO_ENDERECO_H
#define ENDERECO_ENDERECO_H

using namespace std;

class Endereco{
private:
  string rua;
  string bairro;
  string cidade;
  string estado;
  string cep;
  int numero;
public:
  Endereco();
  Endereco(string, string, string, string, string, int);
  virtual ~Endereco(){};
  string getRua();
  string getBairro();
  string getCidade();
  string getEstado();
  string getCep();
  int getNumero();
  void setRua(string);
  void setBairro(string);
  void setCidade(string);
  void setEstado(string);
  void setCep(string);
  void setNumero(int);
  string toString();
};

#endif
