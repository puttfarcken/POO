#ifndef Vendedor_hpp
#define Vendedor_hpp

#include "empregado.hpp"

#include <iostream>
using namespace std;

#include <vector>

class Vendedor : public Empregado {
 public:

   Vendedor(string nome, string endereco, string telefone, int codigoSetor,float salarioBase, float valorVendas);
   Vendedor(){}

  void setValorVendas(float valorVendas);
  float getValorVendas();

  float calcularSalario();

  void incluirPessoa(string nome, string endereco, string telefone, int codigoSetor,float salarioBase, float valorVendas);
  void listaPessoas();
  void imprimePessoas();

 protected:

  float valorVendas;
  float static comissao;

  vector <Vendedor> vendedores;

};

#endif