#include "operario.hpp"

float Operario::comissao = 0.10;

Operario::Operario(string nome, string endereco, string telefone, int codigoSetor,float salarioBase, float valorProducao){
  this -> nome = nome;
  this -> endereco = endereco;
  this -> telefone = telefone;
  this -> codigoSetor = codigoSetor;
  this -> salarioBase = salarioBase;
  this -> valorProducao = valorProducao;
};

void Operario::setValorProducao(float valorProducao){
  this -> valorProducao = valorProducao;
}

float Operario::getValorProducao(){
  return this -> valorProducao;
}

float Operario::calcularSalario(){
  float adicionalComissao;
  adicionalComissao = valorProducao * comissao;
  return salarioBase + adicionalComissao;
} 

void Operario::incluirPessoa(string nome, string endereco, string telefone, int codigoSetor,float salarioBase, float valorProducao){
  operarios.push_back(Operario(nome, endereco, telefone, codigoSetor, salarioBase, valorProducao));
  cout << "\n" << nome << " " << "Operário adicionado com sucesso."<< endl;
}

void Operario::listaPessoas(){
  for(int i=0; i<operarios.size(); i++){
  operarios[i].imprimePessoas();
  }
}

void Operario::imprimePessoas(){
  cout << "------------------" << endl;
  cout << "Nome: " + nome << endl;
  cout << "Endereço: " + endereco << endl;
  cout << "Telefone: " + telefone << endl;
  cout << "Código Setor: " + to_string(codigoSetor) << endl;
  cout << "Salário Base: " + to_string(salarioBase) << endl;
  cout << "valor Produção: " + to_string(valorProducao) << endl;
  cout << "Salário FInal: " + to_string(calcularSalario()) << endl;
}
