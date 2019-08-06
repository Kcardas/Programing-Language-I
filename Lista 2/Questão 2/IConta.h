#ifndef ICONTA_ICONTA_H
#define ICONTA_ICONTA_H

class IConta{
public:
  virtual void sacar(double) = 0;
  virtual void depositar(double) = 0;
  virtual std::string getNomeCliente() = 0;
  virtual double getSalarioMensal() = 0;
  virtual std::string getNumeroConta() = 0;
  virtual double getSaldo() = 0;
  virtual double getLimite() = 0;
  virtual void setNomeCliente(std::string) = 0;
  virtual void setSalarioMensal(double) = 0;
  virtual void setNumeroConta(std::string) = 0;
  virtual void setSaldo(double) = 0;
  virtual void setLimite(double) = 0;
  virtual void definirLimite() = 0;
  virtual std::string toString() = 0;
};

#endif
