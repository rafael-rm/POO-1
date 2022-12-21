#include "Tecnico.h"

Tecnico::Tecnico()
{
}

Tecnico::~Tecnico()
{
}



Funcionario *Tecnico::getNovoTecnico(){
	return novoTecnico;
}

string Tecnico::getCargoTecnico(){
	return cargoTecnico;
}



void Tecnico::setNovoTecnico(Funcionario *novoTecnico) {
	this->novoTecnico = novoTecnico;
}

void Tecnico::setCargoTecnico(){
	cargoTecnico = "Tecnico";
}

void Tecnico::imprimeFuncionario(){
	
	cout << "Cargo: " << cargoTecnico << endl;
	Funcionario::imprimeFuncionario();
	
}
