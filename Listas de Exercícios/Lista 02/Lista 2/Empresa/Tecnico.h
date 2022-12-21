#ifndef TECNICO_H
#define TECNICO_H

#include "Funcionario.h"


class Tecnico : public Funcionario
{
	protected:
	
		Funcionario *novoTecnico;
		string cargoTecnico;
		
	public:
		Tecnico();
		~Tecnico();
		
	
		Funcionario *getNovoTecnico();
		string getCargoTecnico();
		
	
		void setNovoTecnico(Funcionario *novoTecnico);
		void setCargoTecnico();
		void imprimeFuncionario();

};

#endif
