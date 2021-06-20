#ifndef Empregado_hpp
#define Empregado_hpp

#include "pessoa.hpp"

#include <iostream>
using namespace std;

#include <vector>

class Empregado : public Pessoa {
 public:

 Empregado(string nome, string endereco, string telefone, int codigoSetor,float salarioBase);
 Empregado(){};

  void setCodigoSetor(int codigoSetor);
  int getCodigoSetor();

  void setSalarioBase(float salarioBase);
  float getSalarioBase();

  virtual float calcularSalario(); 

  void incluirPessoa(string nome, string endereco, string telefone, int codigoSetor, float salarioBase);
  void listaPessoas();
  void imprimePessoas();  

 protected:

  int codigoSetor;
  float salarioBase;
  float static imposto;

  vector <Empregado> empregados;
};

#endif