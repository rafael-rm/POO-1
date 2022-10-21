#ifndef CONTACORRENTE_H
#define CONTACORRENTE_H

#include "Conta.h"

class ContaCorrente : public Conta
{
	private:
		float limite;
		
	public:
		float getLimite();
		
		void setLimite(float limite);
		
		void imprimir_extratoCC();
		
		ContaCorrente(string agencia, string num_conta, string proprietario, float saldo, float limite);
		ContaCorrente();
		~ContaCorrente();
	protected:
};

#endif
