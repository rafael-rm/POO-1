#ifndef ALUNO_H
#define ALUNO_H

#include <iostream>

using namespace std;

class Aluno
{
	public:
		
		string nome;
		int matricula;
		long long cpf;
		string data_nascimento;
		char sexo;
		int bolsista;
		float nota;

		Aluno();
		~Aluno();
		
		void imprimir_informacoes();
};

#endif
