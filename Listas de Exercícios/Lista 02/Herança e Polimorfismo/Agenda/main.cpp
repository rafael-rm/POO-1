#include <iostream>
#include "Contatos.h"
#include "pessoaFisica.h"
#include "pessoaJuridica.h"
#include <locale>
#include <vector>
#include <fstream>
#include <string>

using namespace std;

void dadosContatos(Contatos *contatos){
	
	cout << endl << "Digite o nome do contato: ";
	string nome;
	cin.clear();
	fflush(stdin);
	getline(cin, nome);
	contatos->setnome(nome);
	cin.clear();
	fflush(stdin);
	cout << endl << "Digite o e-mail do contato: ";
	string email;
	getline(cin, email);
	contatos->setemail(email);
	cin.clear();
	fflush(stdin);
	
	cout << endl << "Digite o endere o do contato: ";
	string endereco;
	getline(cin, endereco);
	contatos->setendereco(endereco);
	cin.clear();
	fflush(stdin);
}

void dadosPessoaFisica(pessoaFisica *pessoaFisica){
	
	dadosContatos(pessoaFisica);
	cout << endl << "Digite o CPF do contato: ";
	string cpf;
	getline(cin, cpf);
	pessoaFisica->setcpf(cpf);
	cin.clear();
	fflush(stdin);
	
	cout << endl << "Digite a data de nascimento do contato: ";
	string dataNascimento;
	getline(cin,dataNascimento);
	pessoaFisica->setdataNascimento(dataNascimento);
	cin.clear();
	fflush(stdin);
	
	cout << endl << "Digite o estado civil do contato: ";
	string estadoCivil;
	getline(cin,estadoCivil);
	pessoaFisica->setestadoCivil(estadoCivil);
	cin.clear();
	fflush(stdin);
}

void dadosPessoaJuridica(pessoaJuridica *pessoaJuridica){
	
	dadosContatos(pessoaJuridica);
	cout << endl << "Digite o CNPJ do contato: ";
	string cnpj;
	getline(cin, cnpj);
	pessoaJuridica->setcnpj(cnpj);
	cin.clear();
	fflush(stdin);
	
	cout << endl << "Digite a inscri  o estadual do contato: ";
	string inscEstadual;
	getline(cin, inscEstadual);
	pessoaJuridica->setinscEstadual(inscEstadual);
	cin.clear();
	fflush(stdin);
	
	cout << endl << "Digite a raz o social do contato: ";
	string razaoSocial;
	getline(cin,razaoSocial);
	pessoaJuridica->setrazaoSocial(razaoSocial);
	cin.clear();
	fflush(stdin);
}

void cadastrarContatos(vector<Contatos *> &listContatos){
	int opcao;
	
	do{
		cout << endl << "\tCadastrar novo contato\t" << endl << endl;
		cout << endl << "[1]Pessoa fisica" << endl << "[2]Pessoa juridica" << endl << endl;
		cout << endl << "Escolha alguma opção: ";
		cin >> opcao;
		cin.clear();
		fflush(stdin);
		
		if(opcao < 1 || opcao > 2){
			cout << endl << "Opção invalida!! Favor entre com um opção válida!!" << endl << endl;
		}
		
		switch(opcao){
			case 1:{
				cout << endl << "\tCadastro de pessoa fisica\t" << endl;
				pessoaFisica *pf = new pessoaFisica();
				dadosPessoaFisica(pf);
				listContatos.push_back(pf);
				break;
			}
			case 2:{
				cout << endl << "\tCadastro de pessoa juridica\t" << endl;
				pessoaJuridica *pj = new pessoaJuridica();
				dadosPessoaJuridica(pj);
				listContatos.push_back(pj);
				break;
			}
		}
	}while(opcao < 1 || opcao > 2);
	
	cout << endl << "CONTATO CADASTRADO COM SUCESSO!!" << endl;
}

Contatos *buscarContato(vector<Contatos *> &listContatos){
	int op;
	
	do{
	cout << endl << "Deseja procurar por:" << endl << "[1]NOME" << endl << "[2]CPF" << endl << "[3]CNPJ" << endl;
	cout << endl << "Escolha uma opcao: ";
	cin >> op;
	cin.clear();
	fflush(stdin);
		switch (op)
		{
			case 1:{
				cout << endl << "Insira o nome que deseja buscar" << endl;
				string nome;
				getline(cin, nome);
				cin.clear();
				fflush(stdin);
				
				for(vector<Contatos *>::iterator it = listContatos.begin();it != listContatos.end();it++){
					if(nome == (*it)->getnome()){
						return (*it);
					}
				}
				return NULL;
			break;
			}
			case 2:{
				cout << endl << "Insira o CPF que deseja buscar" << endl;
				string cpf;
				getline(cin, cpf);
				cin.clear();
				fflush(stdin);
				
				for(vector<Contatos *>::iterator it = listContatos.begin();it != listContatos.end();it++){
					if(dynamic_cast<pessoaFisica*>(*it)){
						pessoaFisica *pf = dynamic_cast<pessoaFisica*>(*it);
						if(cpf == pf->getcpf()){
							return (*it);
						}
					}
				}
				return NULL;
			break;
			}
			case 3:{
				cout << endl << "Insira o CNPJ que deseja buscar" << endl;
				string cnpj;
				getline(cin, cnpj);
				cin.clear();
				fflush(stdin);
				
				for(vector<Contatos *>::iterator it = listContatos.begin();it != listContatos.end();it++){

					if(dynamic_cast<pessoaJuridica*>(*it)){
						pessoaJuridica *pj = dynamic_cast<pessoaJuridica*>(*it);
						if(cnpj == (pj)->getcnpj()){
							return (*it);
						}
					}
				}
				return NULL;
			break;            
			}

		}
	}while(op < 1 || op > 3);
	return NULL;

}

void informacoesContato(vector<Contatos *> &listContatos){
	Contatos *contatos = buscarContato(listContatos);
	
	if(contatos != NULL){
		if (dynamic_cast < pessoaFisica* > (contatos)){
			cout << "Pessoa física." << endl;
			pessoaFisica *pf = dynamic_cast < pessoaFisica* > (contatos);
		}
		
		else if(dynamic_cast < pessoaJuridica* > (contatos)){
			cout << "Pessoa Jur dica." << endl;
			pessoaJuridica *pj = dynamic_cast < pessoaJuridica* > (contatos);
		}
		
		contatos->imprimirDados();
	}
	
	else{
		cout << "Contato não encontrado!" << endl;
	}
}

bool removerContato(vector<Contatos *> &listContatos){
	Contatos *contato;
	int op;
	do{
	cout << endl << "Deseja remover por:" << endl << "[1]NOME" << endl << "[2]CPF" << endl << "[3]CNPJ" << endl;
	cout << endl << "Escolha uma opcao: ";
	cin >> op;
	cin.clear();
	fflush(stdin);
		switch (op)
		{
			case 1:{
				cout << endl << "Insira o nome que deseja remover" << endl;
				string nome;
				getline(cin, nome);
				cin.clear();
				fflush(stdin);
				
				for(vector<Contatos *>::iterator it = listContatos.begin();it != listContatos.end();it++){
					if(nome == (*it)->getnome()){
						listContatos.erase(it);
						return true;
					}
				}
				break;
			}
			
			case 2:{
				cout << endl << "Insira o CPF que deseja remover" << endl;
				string cpf;
				getline(cin, cpf);
				cin.clear();
				fflush(stdin);
				
				for(vector<Contatos *>::iterator it = listContatos.begin();it != listContatos.end();it++){
					contato = (*it);
					if(dynamic_cast<pessoaFisica*>(contato)){
						pessoaFisica *pf = dynamic_cast<pessoaFisica*>(contato);
						if((cpf == (pf)->getcpf())){
							listContatos.erase(it);
							return true;
						}
					}
				}
				break;
			}
			case 3:{
				cout << endl << "Insira o CNPJ que deseja remover" << endl;
				string cnpj;
				getline(cin, cnpj);
				cin.clear();
				fflush(stdin);
				
				for(vector<Contatos *>::iterator it = listContatos.begin();it != listContatos.end();it++){
					contato = (*it);
					if(dynamic_cast<pessoaJuridica*>(contato)){
						pessoaJuridica *pj = dynamic_cast<pessoaJuridica*>(contato);
						if((cnpj == (pj)->getcnpj())){
							listContatos.erase(it);
							return true;
						}
					}
				}
				break;            
			}	
		}
	}while(op < 1 || op > 3);
	
	return NULL;
}

/*
Contatos* metodoOrdenar(vector<Contatos*>& listContatos) {
	
	int cont = 0;
	
	while(listContatos[cont] != NULL){
		cont++;
	}
	Contatos *aux;
	Contatos *vetor[cont];
	int f = 0, j = cont;
	cout << endl << "METODO DE ORDENAÇÃO: " << endl;
	
	for(int i = 0; i < cont;i++){		
		vetor[i] = NULL;
	}
	
	for (int i = 0; i < cont;i++){
		Contatos *contato = listContatos[i];
		if(dynamic_cast<pessoaFisica*>(contato)){
			if(f == 0){	
				f++;
			}
			else{
				while(vetor[f] == NULL){
					vetor[i] = contato;
					f++;
				}
			}
		}
		else{
			if(j == 100){
				vetor[j] = contato;
				j--;
			}
			else{
				while(vetor[j] == NULL){
					vetor[j] = contato;
					j--;
				}
			}
		}		
	}
	
	for(int i = 0; i < cont;i++){
		listContatos[i] = vetor[i];
	}
	
	cout << endl;
	
	for(int i = 0; i < 100;i++){
		Contatos *contato = listContatos[i];
		vetor[i] = listContatos[i];
	}
	
	for (int i = 0; i < 100;i++){
		for(int j = i + 1; j < 100; j++){
			if(vetor[i] > vetor[j]){
				aux = vetor[i];
				vetor[i] = vetor[j];
				vetor[j] = aux;
			}
		}
	}
	
	cout << endl;
	
	for(int i = 0; i < 100;i++){
		
		cout << vetor[i] << endl;
	}
	
	cout << endl;
}
*/

int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "");
	int opcao;
	vector<Contatos *>listContatos;
	
	
	cout << endl << "\tBEM VINDO A AGENDA DE CONTATOS\t" << endl;
	do{
		do{
		cout << endl << "\tCadastro de contas\t" << endl << endl;
		cout << endl << "[1]Adicionar contato" << endl << "[2]Remover contato" << endl << "[3]Pesquisar contato" << endl << "[4]Ordenar contatos" << endl << endl;
		cout << endl << "Escolha alguma opção: ";
		cin >> opcao;
		cin.clear();
		fflush(stdin);
		
		if(opcao < 1 || opcao > 5){
			cout << endl << "Opção invalida!! Favor entre com um opção válida!!" << endl << endl;
		}
		
	}while(opcao < 1 || opcao > 4);
	
	switch(opcao){
		case 1:
			cadastrarContatos(listContatos);
			break;
		case 2:
			if(!listContatos.empty()){
				removerContato(listContatos);
			}
			else{
				cout << endl << "Nenhum contato foi criado ainda!!" << endl;
			} 
			break;
		case 3:
			if (!listContatos.empty()){
				informacoesContato(listContatos);
			}                                
			
			else{
				cout << endl << "Nenhum contato foi criado ainda!!" << endl;
			}          
		case 4:
			if (!listContatos.empty()){
				cout << endl << "CODIGO COMENTADO, FUNCAO COM ERRO" << endl;
				//metodoOrdenar(listContatos);
			}
			
			else{
				cout << endl << "Nenhum contato foi criado ainda!!" << endl;
			}   
			break;
	}
	}while(opcao != 4);
	
	return 0;
}
