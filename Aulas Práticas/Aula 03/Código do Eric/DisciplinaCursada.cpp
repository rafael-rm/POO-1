#include "DisciplinaCursada.h"

DisciplinaCursada::DisciplinaCursada()
{
	disc = NULL;
}

DisciplinaCursada::~DisciplinaCursada()
{
}

Disciplina * DisciplinaCursada::getDisc(){
	return disc;
}

float DisciplinaCursada::getNota(){
	return nota;
}

float DisciplinaCursada::getFrequencia(){
	return frequencia;
}
		
void DisciplinaCursada::setDisc(Disciplina *disc){
	this->disc = disc;
}

void DisciplinaCursada::setNota(float nota){
	this->nota = (nota >= 0 && nota <= 100) ? nota : 0;
}

void DisciplinaCursada::setFrequencia(float frequencia){
	this->frequencia = (frequencia >= 0 && frequencia <= 100) ? frequencia : 0;
}
