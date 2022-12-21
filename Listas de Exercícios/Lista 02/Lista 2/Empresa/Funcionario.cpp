#include "Funcionario.h"

Funcionario::Funcionario()
{
}
Funcionario::Funcionario(string nomeFuncionario,string dataAdmissao,string departamento){
	setNomeFuncionario(nomeFuncionario);
	setDataAdmissao(dataAdmissao);
	setDepartamento(departamento);
}
Funcionario::~Funcionario()
{
}

string Funcionario::getNomeFuncionario(){
	return nomeFuncionario;
}

string Funcionario::getDataAdmissao(){
	return dataAdmissao;
}

string Funcionario::getDepartamento(){
	return departamento;
}

float Funcionario::getSalario(){
	return salario;
}

void Funcionario::setNomeFuncionario(string nomeFuncionario){
	this->nomeFuncionario = nomeFuncionario;
}

void Funcionario::setDataAdmissao(string dataAdmissao){
	this->dataAdmissao = dataAdmissao;
}

void Funcionario::setDepartamento(string departamento){
	this->departamento = departamento;
}

void Funcionario::setSalario(float salario){
	this->salario = salario;
}

void Funcionario::imprimeFuncionario(){
	
	cout << "Nome: " << nomeFuncionario << endl;
	cout << "Data de Admissão: " << dataAdmissao << endl;
	cout << "Departamento: " << departamento << endl;
	cout << "Salário: R$ " << salario << endl;	
}

