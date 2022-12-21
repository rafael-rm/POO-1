#include "Funcionario.h"
#include <iostream>
#include <string>

using namespace std;

void limpa();

int main(int argc, char** argv) {
	setlocale(LC_ALL, "");
	system("chcp 1252 > nul");
	
	const int quantidade = 10;
	Funcionario funcionarios[quantidade];
	
	Empresa *empresaCadastrada;
	empresaCadastrada = new Empresa();
	cout << "Digite o nome da empresa: "; 
	string nome;
	getline(cin, nome);
	limpa();
	empresaCadastrada->setNomeE(nome);
	
	cout << "Digite o cnpj da empresa: "; 
	int cnpj;
	cin >> cnpj;
	limpa();
	empresaCadastrada->setCnpj(cnpj);
	
	float salario;
	string data_admissao;
	string departamento;
		
	for(int i = 0; i < quantidade; i++){
		cout << "Cadastrar pessoa " << i+1 << ": ";
		cout << "Nome: ";
		getline(cin, nome);
	    limpa();
	    funcionarios[i].setNome(nome);
	    
	    cout << "Salário: ";
		cin >> salario;
	    limpa();
	    funcionarios[i].setSalario(salario);
	    
	    cout << "Data de adimissão (xx/xx/xxxx): ";
		getline(cin, data_admissao);
	    limpa();
	    funcionarios[i].setData_admissao(data_admissao);
	    
	    
	    cout << "Departamento: ";
		getline(cin, departamento);
	    limpa();
	    funcionarios[i].setDepartamento(departamento);
	    
	    funcionarios[i].setEmpresa(empresaCadastrada);
	}
	
	cout << "Digite o departamento que deseja dar um aumento: ";
	string departamentoAumento;
	getline(cin, departamentoAumento);
	limpa();
	
	for(int i = 0; i < quantidade; i++){
		departamento = funcionarios[i].getDepartamento();
		if(departamento == departamentoAumento)	{
			salario = funcionarios[i].getSalario();
			salario += salario *0.10f;
			funcionarios[i].setSalario(salario);
			cout << funcionarios[i].getNome() << "\t" << funcionarios[i].getSalario();
		}	
	}
	
	cout << "Os aumentos foram dados com sucesso!";
	system("pause");
	return 0;
}

void limpa(){
	cin.clear();
	fflush(stdin);
}
