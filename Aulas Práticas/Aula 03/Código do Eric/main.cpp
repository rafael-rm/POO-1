#include <iostream>
#include <locale>

#include "Aluno.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
		
	setlocale(LC_ALL, "");
	system("chcp 1252 > nul");
	
	int quantAlunos;
	
	cout << "     				Cadastro de alunos" << endl << endl;
	
	cout << "Entre com a quantidade de aluno a cadastrar: ";
	cin >> quantAlunos;
	cin.clear();
	fflush(stdin);
	cout << endl;
	
	Aluno *listAlunos[quantAlunos];
	
	for(int i=0; i<quantAlunos; i++){
		listAlunos[i] = NULL;
	}
	
	for(int i=0; i<quantAlunos; i++){
		
		Aluno *aluno = new Aluno();		
		
		cout << "Entre com a matrícula do aluno: ";
		int matricula;
		cin >> matricula;
		aluno->setMatricula(matricula);
		cin.clear();
		fflush(stdin);
		cout << endl;
		
		cout << "Entre com o nome do aluno: ";
		string nome;
		getline(cin, nome);
		aluno->setNome(nome);
		cin.clear();
		fflush(stdin);
		cout << endl;
		
		cout << "Entre com o cpf do aluno: ";
		long cpf;
		cin >> cpf;
		aluno->setCpf(cpf);
		cin.clear();
		fflush(stdin);
		cout << endl;
		
		cout << "Entre com a data de nascimento do aluno: ";
		string dataNasc;
		getline(cin, dataNasc);
		aluno->setDataNasc(dataNasc);
		cin.clear();
		fflush(stdin);
		cout << endl;
		
		cout << "Entre com a sexo do aluno (M/F): ";
		char sexo;
		cin >> sexo;
		aluno->setSexo(sexo);
		cin.clear();
		fflush(stdin);
		cout << endl;
		
		int bolsista;
		
		do{
			cout << "O aluno é bolsista (1 - sim / 2 - não / 3 - em processo): ";
			cin >> bolsista;
			cin.clear();
			fflush(stdin);
			cout << endl;
			
			if(bolsista < 0 || bolsista > 3)
				cout << "Opção invalida! Favor, entrar com uma opção correta para bolsista!" << endl;
			
		}while(bolsista < 0 || bolsista > 3);
	
		aluno->setBolsista(bolsista);
		
		cout << "Aluno " << aluno->getNome() << " cadastrado com sucesso!" << endl << endl;
		
		listAlunos[i] = aluno;
	}
	
	for(int i=0; i<quantAlunos; i++){
		Aluno *aluno = listAlunos[i];
		aluno->imprimirInformacoesAluno();
	}
	

	for(int i=0; i<quantAlunos; i++){
		delete(listAlunos[i]);
	}

	return 0;
}
