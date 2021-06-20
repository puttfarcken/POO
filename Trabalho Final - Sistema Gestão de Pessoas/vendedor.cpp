#include "vendedor.hpp"

float Vendedor::comissao = 0.10;

Vendedor::Vendedor(string nome, string endereco, string telefone, int codigoSetor,float salarioBase, float valorVendas){
  this -> nome = nome;
  this -> endereco = endereco;
  this -> telefone = telefone;
  this -> codigoSetor = codigoSetor;
  this -> salarioBase = salarioBase;
  this -> valorVendas = valorVendas;
}

void Vendedor::setValorVendas(float valorVendas){
  this -> valorVendas = valorVendas;
}

float Vendedor::getValorVendas(){
  return this -> valorVendas;
}

float Vendedor::calcularSalario(){
  float adicionalComissao;
  adicionalComissao = valorVendas * comissao;
  return salarioBase + adicionalComissao;
}

void Vendedor::incluirPessoa(string nome, string endereco, string telefone, int codigoSetor,float salarioBase, float valorVendas){
  vendedores.push_back(Vendedor(nome, endereco, telefone, codigoSetor, salarioBase, valorVendas));
  cout << "\n" << nome << " " << "Vendedor adicionado com sucesso."<< endl;
}

void Vendedor::listaPessoas(){
  for(int i=0; i<vendedores.size(); i++){
  vendedores[i].imprimePessoas();
  }
}

void Vendedor::imprimePessoas(){
  cout << "------------------" << endl;
  cout << "Nome: " + nome << endl;
  cout << "Endereço: " + endereco << endl;
  cout << "Telefone: " + telefone << endl;
  cout << "Código Setor: " + to_string(codigoSetor) << endl;
  cout << "Salário Base: " + to_string(salarioBase) << endl;
  cout << "valor Vendas: " + to_string(valorVendas) << endl;
  cout << "Salário Final: " + to_string(calcularSalario()) << endl;
}