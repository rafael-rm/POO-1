#ifndef GERENTE_H
#define GERENTE_H

#include "Funcionario.h"

class Gerente : public Funcionario
{
	protected:
		
		Funcionario *novoGerente;
		string cargoGerente;
		
	public:
		Gerente();
		
		~Gerente();
	
		
		Funcionario *getNovoGerente();
		string getCargoGerente();
		
		
		void setNovoGerente(Funcionario *novoGerente);
		void setCargoGerente();
		void imprimeFuncionario();
};

#endif
