#ifndef Administrador_hpp
#define Administrador_hpp

#include "empregado.hpp"

#include <iostream>
using namespace std;

#include <vector>

class Administrador : public Empregado {
 public:
 
 Administrador(string nome, string endereco, string telefone, int codigoSetor,float salarioBase, float ajudaDeCusto);
 Administrador(){};

 void setAjudaDeCusto(float ajudaDeCusto);
 float getAjudaDeCusto();

 float calcularSalario();

 void incluirPessoa(string nome, string endereco, string telefone, int codigoSetor,float salarioBase, float ajudaDeCusto);
 void listaPessoas();
 void imprimePessoas();

 protected:

  float ajudaDeCusto;

  vector <Administrador> administradores;

};

#endif