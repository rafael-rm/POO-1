#include "Empresa.h"

Empresa::Empresa()
{
}

Empresa::~Empresa()
{
}

string Empresa:: getNomeE(){
	return nome;
}

string Empresa:: getCnpj(){
	return cnpj;
}
vector<Funcionario*> Empresa::getQuadroFuncionario(){
	return quadroFuncionario;
}
		
void Empresa:: setNomeE(string nome){
	this->nome = nome;	
}

void Empresa:: setCnpj(int cnpj){
	this->cnpj = cnpj;
}

void Empresa::setQuadroFuncionario(vector<Funcionario*> &quadroFuncionario){
	this->quadroFuncionario = quadroFuncionario;
}


