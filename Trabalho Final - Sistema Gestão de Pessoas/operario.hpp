#ifndef Operario_hpp
#define Operario_hpp

#include "empregado.hpp"

#include <iostream>
using namespace std;

#include <vector>


class Operario : public Empregado {
 public:

 Operario(string nome, string endereco, string telefone, int codigoSetor,float salarioBase, float valorProducao);
 Operario(){};

  void setValorProducao(float valorProducao);
  float getValorProducao();

  float calcularSalario();

  void incluirPessoa(string nome, string endereco, string telefone, int codigoSetor,float salarioBase, float valorProducao);
  void listaPessoas();
  void imprimePessoas();

 protected:

  float valorProducao;
  float static comissao;

  vector <Operario> operarios;
};

#endif