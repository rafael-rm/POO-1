#include "ContaInvestimento.h"

ContaInvestimento::ContaInvestimento()
{
}

ContaInvestimento::ContaInvestimento(string agencia, string numConta, string proprietario, float saldo, float limite, TipoInvestimento tipoInvestimento, float saldoInvestimento) : ContaCorrente(agencia, numConta, proprietario, saldo, limite), Investimento(tipoInvestimento, saldoInvestimento){
	
}
	
	
ContaInvestimento::~ContaInvestimento()
{
	
}

void ContaInvestimento::imprimirExtratoCI(){
	
	imprimirExtrato();
	cout << "Tipo Investimento: " << tipoInvestimento << endl;
	cout << "Saldo Investimento: " << saldoInvestimento << endl;
	
}
