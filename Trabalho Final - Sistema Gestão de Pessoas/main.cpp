#include <iostream>
#include <string>
#include "pessoa.hpp"
#include "fornecedor.hpp"
#include "empregado.hpp"
#include "administrador.hpp"
#include "operario.hpp"
#include "vendedor.hpp"

using namespace std;


int main() {

  Pessoa p1;
  Fornecedor f1;
  Empregado emp1;
  Operario op1;
  Vendedor v1;
  Administrador adm1;

  int option = 1;
  string nomePessoa, enderecoPessoa, telefonePessoa, novoNome, novoTelefone, novoEndereco;
  float credito, divida, salarioBase, valorProducao, valorVendas, ajudaDeCusto;
  int codigoSetor;

  while (option != 0){
    cout << "\n-----------------------------------------" << endl;
    cout << "\n1-Incluir Pessoa: "<<endl;
    cout << "2-Atualizar Pessoa: "<<endl;
    cout << "3-Listas Pessoas: "<<endl;
    cout << "4-Incluir Fornecedores" << endl;
    cout << "5-Listar Fornecedores" << endl;
    cout << "6-Incluir Operários" << endl;
		cout << "7-Listar Operários" << endl;
    cout << "8-Incluir Vendedores" << endl;
    cout << "9-Listar Vendedores" << endl;
    cout << "10-Incluir Administradores" << endl;
    cout << "11-Listar Administradores" << endl;
    cout << "12-Listar Todos Empregados" << endl;
    cout << "0-Sair: " << endl;

    cin >> option;
    cout << "\n\n";

   switch(option){
     case 1:
      cout << "\nIncluir Pessoa:\n "<< endl;
			cout << "Informe Nome: " << endl;
			cin >> nomePessoa;
			cout << "Informe Endereço: " << endl;
      cin >> enderecoPessoa;
      cout << "Informe Telefone: " << endl;
      cin >> telefonePessoa;
      p1.incluirPessoa(nomePessoa, enderecoPessoa, telefonePessoa);
      break;

    case 2:
      cout << "\nAtualizar dados pessoa: "<< endl;
      cout << "Digite nome da pessoa: " << endl;
      cin >> nomePessoa;
      cout << "Digite novo nome: " << endl;
      cin >> novoNome;
      cout <<"Digite novo telefone: " << endl;
      cin >> novoTelefone;
      cout << "Digite novo endereço: " << endl;
      cin >> novoEndereco;
      p1.atualizarPessoa(nomePessoa, novoNome, novoTelefone, novoEndereco);
      
    break; 

    case 3:
      cout << "\nListar Pessoas: "<< endl;
      p1.listaPessoas();
    break;

    case 4:
      cout << "\nIncluir Fornecedor: "<< endl;
			cout << "Informe Nome: " << endl;
			cin >> nomePessoa;
			cout << "Informe Endereço: " << endl;
      cin >> enderecoPessoa;
      cout << "Informe Telefone: " << endl;
      cin >> telefonePessoa;
      cout << "Informe valor do crédito junto ao fornecedor: " << endl;
      cin >> credito;
      cout << "Informe valor da divída junto ao fornecedor: " << endl;
      cin >> divida;
      f1.incluirPessoa(nomePessoa, enderecoPessoa, telefonePessoa, credito, divida);
    break;

    case 5:
      cout << "\nListar Fornecedores: "<< endl;
      f1.listaPessoas();
    break;

    case 6:
      cout << "\nIncluir Operário: "<< endl;
			cout << "Informe Nome: " << endl;
			cin >> nomePessoa;
			cout << "Informe Endereço: " << endl;
      cin >> enderecoPessoa;
      cout << "Informe Telefone: " << endl;
      cin >> telefonePessoa;
      cout << "Informe o código do setor: " << endl;
      cin >> codigoSetor;
      cout << "Informe valor do salário base: " << endl;
      cin >> salarioBase;
      cout << "Informe valor da produção: " << endl;
      cin >> valorProducao;
      op1.incluirPessoa(nomePessoa, enderecoPessoa, telefonePessoa, codigoSetor, salarioBase, valorProducao);
    break;

    case 7:
      cout << "\nListar Operários: "<< endl;
      op1.listaPessoas();
    break;

    case 8:
      cout << "\nIncluir Vendedor: "<< endl;
			cout << "Informe Nome: " << endl;
			cin >> nomePessoa;
			cout << "Informe Endereço: " << endl;
      cin >> enderecoPessoa;
      cout << "Informe Telefone: " << endl;
      cin >> telefonePessoa;
      cout << "Informe o código do setor: " << endl;
      cin >> codigoSetor;
      cout << "Informe valor do salário base: " << endl;
      cin >> salarioBase;
      cout << "Informe valor das vendas: " << endl;
      cin >> valorVendas;
      v1.incluirPessoa(nomePessoa, enderecoPessoa, telefonePessoa, codigoSetor, salarioBase, valorVendas);
    break;

    case 9:
      cout << "\nListar Vendedores: "<< endl;
      v1.listaPessoas();

    case 10:
      cout << "\nIncluir Administrador: "<< endl;
			cout << "Informe Nome: " << endl;
			cin >> nomePessoa;
			cout << "Informe Endereço: " << endl;
      cin >> enderecoPessoa;
      cout << "Informe Telefone: " << endl;
      cin >> telefonePessoa;
      cout << "Informe o código do setor: " << endl;
      cin >> codigoSetor;
      cout << "Informe valor do salário base: " << endl;
      cin >> salarioBase;
      cout << "Informe valor da ajuda de custo: " << endl;
      cin >> ajudaDeCusto;
      adm1.incluirPessoa(nomePessoa, enderecoPessoa, telefonePessoa, codigoSetor, salarioBase, ajudaDeCusto);
    break;

    case 11:
      cout << "\nListar Administradores: "<< endl;
      adm1.listaPessoas();
    break;

    case 12:
      cout << "\nListar Empregados: "<< endl;
      op1.listaPessoas();
      v1.listaPessoas();
      adm1.listaPessoas();
    break;  
   }
  } 
};