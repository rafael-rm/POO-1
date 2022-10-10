#include "Disciplina.h"

Disciplina::Disciplina()
{
	nome = "Default";
	creditos = 0;
	carga_horaria = 0;
}

Disciplina::~Disciplina()
{
}

string Disciplina::getNome(){
	return nome;
}

int Disciplina::getCarga_horaria(){
	return carga_horaria;
}

int Disciplina::getCreditos(){
	return creditos;
}

void Disciplina::setNome(string nome){
	this->nome = nome;
}

void Disciplina::setCarga_horaria(int carga_horaria){
	this->carga_horaria = (carga_horaria == 54 || carga_horaria == 72 || carga_horaria == 90) ? carga_horaria : 54;
	
	switch(this->carga_horaria){
		case 54:
			this->creditos = 3;
			break;
		case 72:
			this->creditos = 4;
			break;
		case 90:
			this->creditos =5;
			break;
	}
}

void Disciplina::imprimir(){
	cout << "Nome: " << nome << endl;
	cout << "Creditos: " << creditos << endl;
	cout << "Carga horaria: " << carga_horaria << endl;
}
