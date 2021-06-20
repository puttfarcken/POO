#include "empregado.hpp"

float Empregado::imposto = 0.15;

Empregado::Empregado(string nome, string endereco, string telefone, int codigoSetor, float salarioBase){
  this -> nome = nome;
  this -> endereco = endereco;
  this -> telefone = telefone;
  this -> codigoSetor = codigoSetor;
  this -> salarioBase = salarioBase;
}

void Empregado::setCodigoSetor(int codigoSetor){
  this -> codigoSetor = codigoSetor;
}

int Empregado::getCodigoSetor(){
  return this -> codigoSetor;
}

void Empregado::setSalarioBase(float salarioBase){
  this -> salarioBase = salarioBase;
}

float Empregado::getSalarioBase(){
  return this -> salarioBase;
}

float Empregado::calcularSalario(){
   float desconto;
   desconto = salarioBase * imposto;
   return salarioBase - desconto;
}

void Empregado::incluirPessoa(string nome, string endereco, string telefone, int codigoSetor, float salarioBase){
  empregados.push_back(Empregado(nome, endereco, telefone, codigoSetor, salarioBase));
  cout << "\n" << nome << " " << "Empregado adicionado com sucesso."<< endl;
}

void Empregado::listaPessoas(){
  for(int i=0; i<empregados.size(); i++){
  empregados[i].imprimePessoas();
  }
}

void Empregado::imprimePessoas(){
  cout << "------------------" << endl;
  cout << "Nome: " + nome << endl;
  cout << "Endereço: " + endereco << endl;
  cout << "Telefone: " + telefone << endl;
  cout << "Setor: " + to_string(codigoSetor)  << endl;
  cout << "Salário: " + to_string(salarioBase)  << endl;
  cout << "Salário liquído: " + to_string(calcularSalario()) << endl;
   
}

