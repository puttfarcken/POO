#include "pessoa.hpp"
#include <string.h>

#include <string>
using namespace std;
#include <iostream>

Pessoa::Pessoa(string nome, string endereco, string telefone){
  this -> nome = nome;
  this -> endereco = endereco;
  this -> telefone = telefone;
}

void Pessoa::setNome(string nome){
  this -> nome = nome;
}

string Pessoa::getNome(){
  return this-> nome;
}

void Pessoa::setEndereco(string endereco){
  this -> endereco = endereco;
}

string Pessoa::getEndereco(){
  return this-> endereco;
}

void Pessoa::setTelefone(string telefone){
  this -> telefone = telefone;
}

string Pessoa::getTelefone(){
  return this->telefone;
}

void Pessoa::incluirPessoa(string nome, string endereco, string telefone){
    pessoa.push_back(Pessoa(nome, endereco, telefone));
    cout << "\n" << nome << " " << "adicionado com sucesso."<< endl;
}

void Pessoa::listaPessoas(){
  for(int i=0; i<pessoa.size(); i++){
    pessoa[i].imprimePessoas();
  }
}

void Pessoa::imprimePessoas(){
  cout << "------------------" << endl;
  cout << "Nome: " + nome << endl;
  cout << "Endereço: " + endereco << endl;
  cout << "Telefone: " + telefone << endl;
}

void Pessoa::atualizarPessoa(string nome, string novoNome, string novoTelefone, string novoEndereco){
   for(int i=0; i<pessoa.size(); i++){
     if (nome == pessoa[i].getNome()){
       pessoa[i].setNome(novoNome);
       pessoa[i].setTelefone(novoTelefone);
       pessoa[i].setEndereco(novoEndereco);
     }
  }
}