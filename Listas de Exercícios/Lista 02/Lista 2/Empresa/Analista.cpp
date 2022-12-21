#include "Analista.h"

Analista::Analista()
{
}

Analista::~Analista()
{
}

Funcionario* Analista::getNovoAnalista(){
	return novoAnalista;
}

string Analista::getCargoAnalista(){
	return cargoAnalista;
}


void Analista::setNovoAnalista(Funcionario *novoAnalista){
	this->novoAnalista = novoAnalista;
}

void Analista::setCargoAnalista(){
	cargoAnalista = "Analista";
}

void Analista::imprimeFuncionario(){
	
	cout << "Cargo: " << cargoAnalista << endl;
	Funcionario::imprimeFuncionario();
	
}
