#include "Conta.h"

Conta::Conta(string agencia, string num_conta, string proprietario, float saldo){
	setAgencia(agencia);
	setNum_conta(num_conta);
	setProprietario(proprietario);
	setSaldo(saldo);
}

Conta::Conta()
{
	agencia = "0000-0";
	num_conta = "000000-0";
	proprietario = "DEFAULT";
	saldo = 0.0;
}

Conta::~Conta()
{
}

string Conta::getAgencia(){
	return agencia;
}

string Conta::getNum_conta(){
	return num_conta;
}

string Conta::getProprietario(){
	return proprietario;
}

float Conta::getSaldo(){
	return saldo;
}

void Conta::setAgencia(string agencia){
	this->agencia = agencia;
}

void Conta::setNum_conta(string num_conta){
	this->num_conta = num_conta;
}

void Conta::setProprietario(string proprietario){
	this->proprietario = proprietario;
}

float Conta::setSaldo(float saldo){
	this->saldo = (saldo >= 0) ? saldo : 0;
}

bool Conta::sacar(float valor){
	if (saldo >= valor){
		saldo -= valor;
		return true;
	}
	else{
		return false;
	}
}

bool Conta::depositar(float valor){
	if (valor > 0 ){
		saldo += valor;
		return true;
	}
	else {
		return false;
	}
}

void Conta::imprimir_extrato(){
	cout << "\n\t\tImprimindo extrato\n\n";
	cout << "Agencia: " << agencia << endl;
	cout << "Numero da Conta: " << num_conta << endl;
	cout << "Proprietario: " << proprietario << endl;
	cout << "Saldo: R$" << saldo << endl;
}
