#ifndef MANTERDADOS_H
#define MANTERDADOS_H

#include <vector>

#include "Conta.h"

class ManterDados
{
	
	private:
		
		void lerDadosContaPoupanca(vector<Conta *> &listConta);
		void lerDadosContaCorrente(vector<Conta *> &listConta);
		void lerDadosContaInvestimento(vector<Conta *> &listConta);
		
		void gravarDadosContaPoupanca(vector<Conta *> listConta);
		void gravarDadosContaCorrente(vector<Conta *> listConta);
		void gravarDadosContaInvestimento(vector<Conta *> listConta);
	
	public:
		
		ManterDados();
		~ManterDados();
		
		void lerDadosContas(vector<Conta *> &listConta);
		void gravarDadosContas(vector<Conta *> listConta);
		
		
		
	protected:
};

#endif
