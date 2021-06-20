#ifndef Pessoa_hpp
#define Pessoa_hpp

#include <iostream>
using namespace std;

#include <vector>

class Pessoa {
  public:
    Pessoa (string nome, string endereco, string telefone);
    Pessoa (){};
   

    void setNome(string nome);
    string getNome();

    void setEndereco(string endereco);
    string getEndereco();

    void setTelefone(string telefone);
    string getTelefone();

    virtual void incluirPessoa (string nome, string endereco, string telefone);
    virtual void listaPessoas();
    virtual void imprimePessoas();

    void atualizarPessoa(string nome, string novoNome, string novoTelefone, string novoEndereco);


  protected:
    string nome;
    string endereco;
    string telefone;

    vector <Pessoa> pessoa;
 

};

#endif