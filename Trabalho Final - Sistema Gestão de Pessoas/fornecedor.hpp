#ifndef Fornecedor_hpp
#define Fornecedor_hpp

#include "pessoa.hpp"

#include <iostream>
using namespace std;
#include <vector>

class Fornecedor : public Pessoa {
 public:

  Fornecedor (string nome, string endereco, string telefone, float valorCredito, float valorDivida);
  Fornecedor(){}
  
  void setValorCredito(float valorCredito);
  float getValorCredito();

  void setValorDivida(float valorDivida);
  float getValorDivida();

  float obterSaldo ();

  void incluirPessoa(string nome, string endereco, string telefone, float valorCredito, float valorDivida);
  void listaPessoas();
  void imprimePessoas();  
  

 protected:
  float valorCredito;
  float valorDivida; 

  vector <Fornecedor> fornecedores;
};

#endif