#ifndef EMPRESA_H
#define EMPRESA_H
#include "Funcionario.h"
#include <iostream>
#include <vector>


using namespace std;

class Empresa
{
	private:
		string nome;
		string cnpj;
		vector<Funcionario*> quadroFuncionario;
	public:
		
		string getNomeE();
		string getCnpj();
		vector<Funcionario*> getQuadroFuncionario();
		
		void setNomeE(string nome);
		void setCnpj(int cnpj);
		void setQuadroFuncionario(vector<Funcionario*> &quadroFuncionario);
		
		Empresa();
		~Empresa();
	protected:
};

#endif
