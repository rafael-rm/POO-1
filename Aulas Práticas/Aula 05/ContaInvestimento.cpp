#include "ContaInvestimento.h"

ContaInvestimento::ContaInvestimento()
{
}

ContaInvestimento::~ContaInvestimento()
{
}

void ContaInvestimento::imprimir_extratoCI(){
	this->imprimir_extratoCC();
	cout << "Tipo de investimento: " << tipo_investimento << endl;
	cout << "Saldo do investimento: R$" << saldo_investimento << endl;
}
