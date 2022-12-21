#ifndef ANALISTA_H
#define ANALISTA_H

#include "Funcionario.h"

class Analista : public Funcionario
{
	protected:
		
		Funcionario *novoAnalista;
		string cargoAnalista;
		
	public:
		Analista();
		~Analista();
		
	
		Funcionario *getNovoAnalista();
		string getCargoAnalista();
		
		
		void setNovoAnalista(Funcionario *novoAnalista);
		void setCargoAnalista();
		void imprimeFuncionario();

};

#endif
