#ifndef CONTAINVESTIMENTO_H
#define CONTAINVESTIMENTO_H

#include "ContaCorrente.h"
#include "Investimento.h"

class ContaInvestimento : public ContaCorrente, public Investimento
{
	public:
		ContaInvestimento();
		~ContaInvestimento();
		
		void imprimir_extratoCI();
	protected:
};

#endif
