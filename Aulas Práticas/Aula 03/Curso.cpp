#include "Curso.h"

Curso::Curso()
{
	for(int i = 0; i < QUANT_DISC; i++){
		listDisciplina[i] = NULL;
	}
}

Curso::~Curso()
{
}

string Curso::getNome(){
	return nome;
}

int Curso::getDuracao(){
	return duracao;
}

char Curso::getTurno(){
	return turno;
}

void Curso::getListDisciplina(Disciplina *listDisciplina[QUANT_DISC]){
		for(int i = 0; i < QUANT_DISC; i++){
		listDisciplina[i] = this->listDisciplina[i];
	}
}

void Curso::setNome(string nome){
	this->nome = nome;
}

void Curso::setDuracao(int duracao){
	this->duracao = (duracao > 0 && duracao < 4) ? duracao : 1;
}

void Curso::setTurno(char turno){
	this->turno = (turno == 'M' || turno == 'm' || turno == 'n' || turno == 'N' || turno == 'V' || turno == 'v') ? turno : 'M';
}

void Curso::setListDisciplina(Disciplina *listDisciplina[QUANT_DISC]){
	for(int i = 0; i < QUANT_DISC; i++){
		this->listDisciplina[i] = listDisciplina[i];
	}
}

void Curso::imprimir(){
	cout << "Curso: " << nome << endl;
	cout << "Turno: " << turno << endl;
	cout << "Duracao: " << duracao << endl;
	cout << "Disciplinas: " << endl;
	for(int i = 0; i < QUANT_DISC; i++){
		listDisciplina[i]->Disciplina::imprimir();
	}
}
