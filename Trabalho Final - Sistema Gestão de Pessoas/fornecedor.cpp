#include "fornecedor.hpp"

Fornecedor::Fornecedor (string nome, string endereco, string telefone, float valorCredito, float valorDivida){
  this -> nome = nome;
  this -> endereco = endereco;
  this -> telefone = telefone;
  this -> valorCredito = valorCredito;
  this -> valorDivida = valorDivida;
}

void Fornecedor::setValorCredito(float valorCredito){
  this-> valorCredito = valorCredito;
}

float Fornecedor::getValorCredito(){
  return this -> valorCredito;
}

void Fornecedor::setValorDivida(float valorDivida){
  this -> valorDivida = valorDivida;
}

float Fornecedor::getValorDivida(){
  return this -> valorDivida;
}

float Fornecedor::obterSaldo(){
  return valorCredito - valorDivida;
}

void Fornecedor::incluirPessoa(string nome, string endereco, string telefone, float valorCredito, float valorDivida){
  fornecedores.push_back(Fornecedor(nome, endereco, telefone, valorCredito, valorDivida));
  cout << "\n" << nome << " " << "Fornecedor adicionado com sucesso."<< endl;
}

void Fornecedor::listaPessoas(){
  for(int i=0; i<fornecedores.size(); i++){
  fornecedores[i].imprimePessoas();
  }
}

void Fornecedor::imprimePessoas(){
  cout << "------------------" << endl;
  cout << "Nome: " + nome << endl;
  cout << "Endereço: " + endereco << endl;
  cout << "Telefone: " + telefone << endl;
  cout << "Saldo: " << to_string(obterSaldo()) << endl;
}