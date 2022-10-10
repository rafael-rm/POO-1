#ifndef CURSO_H
#define CURSO_H

#include "Disciplina.h"
#include "DisciplinasCursadas.h"

#define QUANT_DISC 3

#include <iostream>

class Curso
{
	private:
		string nome;
		int duracao;
		char turno;
		Disciplina *listDisciplina[QUANT_DISC];
	public:
		string getNome();
		int getDuracao();
		char getTurno();
		void getListDisciplina(Disciplina *listDisciplina[QUANT_DISC]);
		
		void setNome(string nome);
		void setDuracao(int duracao);
		void setTurno(char turno);
		void setListDisciplina(Disciplina *listDisciplina[QUANT_DISC]);
		
		void imprimir();
		
		Curso();
		~Curso();
	protected:
};

#endif
