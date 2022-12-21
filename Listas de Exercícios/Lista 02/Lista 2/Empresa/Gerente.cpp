#include "Gerente.h"

Gerente::Gerente()
{
}

Gerente::~Gerente()
{
}

Funcionario *Gerente::getNovoGerente(){
	return novoGerente;
}

string Gerente::getCargoGerente(){
	return cargoGerente;
}

void Gerente::setNovoGerente(Funcionario *novoGerente){
	this->novoGerente = novoGerente;
}

void Gerente::setCargoGerente(){
	cargoGerente = "Gerente";
}

void Gerente::imprimeFuncionario(){
	
	cout << "Cargo: " << cargoGerente << endl;
	Funcionario::imprimeFuncionario();
	
}
