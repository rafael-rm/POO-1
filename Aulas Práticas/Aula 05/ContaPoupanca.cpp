#include "ContaPoupanca.h"

ContaPoupanca::ContaPoupanca()
{
	mes_juros = JANEIRO;
}

ContaPoupanca::~ContaPoupanca()
{
}

MesJuros ContaPoupanca::getMes_juros(){
	return mes_juros;
}

void ContaPoupanca::setMes_juros(MesJuros mes_juros){
	this->mes_juros = mes_juros;
}

void ContaPoupanca::imprimir_extratoCP(){
	this->imprimir_extrato();
	cout << "Mes do juros: " << mes_juros << endl;
}
