#ifndef ALUNO_H
#define ALUNO_H

#include <iostream>
#include "Curso.h"
#include "Disciplina.h"
#include "DisciplinasCursadas.h"

using namespace std;

class Aluno
{
	private:
		string nome;
		int matricula;
		long long cpf;
		string data_nascimento;
		char sexo;
		int bolsista;
		float nota;
		Curso *curso;
		DisciplinasCursadas *listDisciplinaCursada[QUANT_DISC];
		
	public:
		string getNome();
		int getMatricula();
		long long getCpf();
		string getData_nascimento();
		char getSexo();
		int getBolsista();
		float getNota();
		Curso getCurso();
		DisciplinasCursadas getDisciplinasCursadas();
		
		void setNome(string nome);
		void setMatricula (int matricula);
		void setCpf(long long cpf);
		void setData_nascimento(string data_nascimento);
		void setSexo(char sexo);
		void setBolsista(int bolsista);
		void setNota(float nota);
		void SetCurso(Curso *curso);
		void SetListDisciplinasCursadas(DisciplinasCursadas *listDisciplinaCursada[QUANT_DISC]);

		Aluno();
		~Aluno();
		
		void imprimir_informacoes();
};

#endif
