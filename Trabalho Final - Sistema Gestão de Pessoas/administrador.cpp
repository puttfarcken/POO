#include "administrador.hpp"

Administrador::Administrador(string nome, string endereco, string telefone, int codigoSetor,float salarioBase, float ajudaDeCusto){
  this -> nome = nome;
  this -> endereco = endereco;
  this -> telefone = telefone;
  this -> codigoSetor = codigoSetor;
  this -> salarioBase = salarioBase;
  this -> ajudaDeCusto = ajudaDeCusto;
}

void Administrador::setAjudaDeCusto(float ajudaDeCusto){
  this -> ajudaDeCusto = ajudaDeCusto;
}

float Administrador::getAjudaDeCusto(){
  return this -> ajudaDeCusto;
}

float Administrador::calcularSalario(){
  float desconto;
  desconto = salarioBase * imposto;
  return (salarioBase - desconto) + ajudaDeCusto;
}

void Administrador::incluirPessoa(string nome, string endereco, string telefone, int codigoSetor,float salarioBase, float ajudaDeCusto){
  administradores.push_back(Administrador(nome, endereco, telefone, codigoSetor, salarioBase, ajudaDeCusto));
  cout << "\n" << nome << " " << "Administrador adicionado com sucesso."<< endl;
}

void Administrador::listaPessoas(){
  for(int i=0; i<administradores.size(); i++){
  administradores[i].imprimePessoas();
  }
}
void Administrador::imprimePessoas(){
  cout << "------------------" << endl;
  cout << "Nome: " + nome << endl;
  cout << "Endereço: " + endereco << endl;
  cout << "Telefone: " + telefone << endl;
  cout << "Código Setor: " + to_string(codigoSetor) << endl;
  cout << "Salário Base: " + to_string(salarioBase) << endl;
  cout << "Ajuda de Custo: " + to_string(ajudaDeCusto) << endl;
  cout << "Salário FInal: " + to_string(calcularSalario()) << endl;
}