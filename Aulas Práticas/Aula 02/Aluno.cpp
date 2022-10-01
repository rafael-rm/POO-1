#include "Aluno.h"

Aluno::Aluno()
{
		nome = "Default";
		matricula = 0;
		cpf = 0;
		data_nascimento = "01/01/1900";
		sexo = 'M';
		bolsista = 2;
		nota = 0;
}

Aluno::~Aluno()
{
}

void Aluno::imprimir_informacoes(){
	
		cout << endl << endl << endl << "\tImprimir dados cadastrados\t" << endl << endl << endl;
		cout << "Nome: " << nome << endl;
		cout << "Matricula: " << matricula << endl;
		cout << "CPF: " << cpf << endl;
		cout << "Data de nascimento: " << data_nascimento << endl;
		cout << "Sexo: " << sexo << endl;
		
		switch(bolsista){
		case 1:
			cout << "Bolsista: Sim" << endl;
			break;
		
		case 2:
			cout << "Bolsista: Nao" << endl;
			break;
		
		case 3:
			cout << "Bolsista: Em processo" << endl;
			break;
			
		default:
			cout << "Bolsista: Erro" << endl;
			break;
		}
		
		cout << "Nota: " << nota << endl;
	
}
