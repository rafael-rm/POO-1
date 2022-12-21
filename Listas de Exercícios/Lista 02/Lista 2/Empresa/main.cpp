#include <iostream>


#include "Gerente.h"
#include "Empresa.h"
#include "Analista.h"
#include "Tecnico.h"
#include "Funcionario.h"
#include <vector>
#include <string>

using namespace std;

void limpa();
Empresa *CadastroEmpresa(vector<Funcionario *> &quadroFuncionario);
void CadastroPessoa(Funcionario *novoFuncionario);
void CadastroGerente(Gerente *novoGerente);
void CadastroAnalista(Analista *novoAnalista);
void CadastroTecnico(Tecnico *novoTecnico);
void Menu(vector<Funcionario *> &quadroFuncionario, Empresa *empresa);


int main(int argc, char** argv) {
	setlocale(LC_ALL, "");
	system("chcp 1252 > nul");
	
	vector<Funcionario*> quadroFuncionario;
	Empresa *empresa = CadastroEmpresa(quadroFuncionario);
	
	
	
	return 0;
}

void limpa(){
	cin.clear();
	fflush(stdin);
}

Empresa *CadastroEmpresa(vector<Funcionario *> &quadroFuncionario){
	Empresa *empresaCadastrada = new Empresa();
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
	
	Menu(quadroFuncionario, empresaCadastrada);
	
	return empresaCadastrada;
}

void CadastroPessoa(Funcionario *novoFuncionario){

	string nome;
	string dataAdmissao;
	string departamento;

	cout << "Cadastrar pessoa: " << endl << endl;
	cout << "Nome: ";	
	getline(cin, nome);
	limpa();
	novoFuncionario->setNomeFuncionario(nome);
	    
	cout << "Data de adimissão (xx/xx/xxxx): ";
	getline(cin, dataAdmissao);
	limpa();
	novoFuncionario->setDataAdmissao(dataAdmissao);
	   
	    
	cout << "Departamento: ";
	getline(cin, departamento);
	limpa();
	novoFuncionario->setDepartamento(departamento);
	
	cout << "Informe o salario: RS";
	float salario;
	cin >> salario;
	limpa();
	novoFuncionario->setSalario(salario);
	
	}

void CadastroGerente(Gerente *novoGerente){
	
	cout << "*******CADASTRO DE NOVO GERENTE********" << endl << endl;
	CadastroPessoa(novoGerente);
	novoGerente->setCargoGerente();
}

void CadastroAnalista(Analista *novoAnalista){
	
	cout << "*******CADASTRO DE NOVO ANALISTA********" << endl << endl;
	CadastroPessoa(novoAnalista);
	novoAnalista->setCargoAnalista();
}

void CadastroTecnico(Tecnico *novoTecnico){
	
	cout << "*******CADASTRO DE NOVO TECNICO********" << endl << endl;
	CadastroPessoa(novoTecnico);
	novoTecnico->setCargoTecnico();
}

void Menu(vector<Funcionario *> &quadroFuncionario, Empresa *empresa){
	
	int menu;
	
	do{
	
		cout << "Escolha uma Opção:" << endl;
		cout << "[1] - Cadastrar Funcionario" << endl << "[2]-Dar aumento" << endl << "[3]-Imprimir" << endl << "[0]-Sair:";		
		cin >> menu;
		limpa();
		switch(menu){
			case 1:{
				int op;
				cout << "***Escolha a Função***" << endl;
				cout << "[1] - Gerente" << endl << "[2] - Analista" << endl << "[3] - Tecnico" << endl << "[0] - Sair" << endl;
				cin >> op;
				limpa();
				switch(op){
					case 1:{
						Gerente *novoGerente = new Gerente();
						CadastroGerente(novoGerente);
						quadroFuncionario.push_back(novoGerente);
						break;
					}
					case 2:{
						Analista *novoAnalista = new Analista();
						CadastroAnalista(novoAnalista);
						quadroFuncionario.push_back(novoAnalista);
						break;
					}
					case 3:{
						Tecnico *novoTecnico = new Tecnico();
						quadroFuncionario.push_back(novoTecnico);
						break;
					}
					case 0:{
						break;
					}
					default:{
						cout << "Opção Invalida!" << endl << endl;
						break;
					}
				}
				break;
			}
			case 2:{
				
				for(vector<Funcionario*>::iterator it = quadroFuncionario.begin(); it != quadroFuncionario.end(); it++){
					if(dynamic_cast<Gerente*>(*it)){
						float novoSalario = (*it)->getSalario() * 0.15f;
						novoSalario = novoSalario + (*it)->getSalario();
						(*it)->setSalario(novoSalario);
					
					}
					else{
						float novoSalario = (*it)->getSalario() * 0.10f;
						novoSalario = novoSalario + (*it)->getSalario();
						(*it)->setSalario(novoSalario);
					}
				}
				break;
			}
			case 3:{
				cout << "********QUADRO DE FUNCIONARIOS********"<< endl;
				for(vector<Funcionario*>::iterator it = quadroFuncionario.begin(); it != quadroFuncionario.end(); it++){
					(*it)->imprimeFuncionario();
				}
				break;
			}
			case 0:{
				cout << "Obrigado!" << endl << endl;
				break;
			}
			default:{
				cout << "Opção Invalida!" << endl << "Tente Novamente!" << endl << endl;
				break;
			}
		}
		
	}while(menu != 0);
	
	
}



