#include "DisciplinasCursadas.h"

DisciplinasCursadas::DisciplinasCursadas()
{
	disc = NULL;
}

DisciplinasCursadas::~DisciplinasCursadas()
{
}

Disciplina *DisciplinasCursadas::getDisc(){
	return disc;
}

float DisciplinasCursadas::getNota(){
	return nota;
}

float DisciplinasCursadas::getFrequencia(){
	return frequencia;	
}

void DisciplinasCursadas::setDisc(Disciplina *disc){
	this->disc = disc;
}

void DisciplinasCursadas::setNota(float nota){
	this->nota = (nota >= 0 && nota <= 100) ? nota : 0;
}
void DisciplinasCursadas::setFrequencia(float frequencia){
	this->frequencia = (frequencia >= 0 && frequencia <= 100) ? frequencia : 0;
}

void DisciplinasCursadas::imprimir(){
	
}
