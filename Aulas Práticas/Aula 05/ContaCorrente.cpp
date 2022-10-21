#include "ContaCorrente.h"

ContaCorrente::ContaCorrente(string agencia, string num_conta, string proprietario, float saldo, float limite) : Conta(agencia, num_conta, proprietario, saldo){
	setLimite(limite);
}

ContaCorrente::ContaCorrente()
{
}

ContaCorrente::~ContaCorrente()
{
}

float ContaCorrente::getLimite(){
	return limite;
}

void ContaCorrente::setLimite(float limite){
	this->limite = (limite >=0) ? limite : 0;
}

void ContaCorrente::imprimir_extratoCC(){
	this->imprimir_extrato();
	cout << "Limite: R$" << limite << endl;
}
