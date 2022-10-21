#ifndef CONTA_H
#define CONTA_H

#include <string.h>
#include <iostream>

using namespace std;

class Conta
{
	protected:
		string agencia;
		string num_conta;
		string proprietario;
		float saldo;
		
	public:
		bool sacar(float valor);
		bool depositar(float valor);
		void imprimir_extrato();
		
		string getAgencia();
		string getNum_conta();
		string getProprietario();
		float getSaldo();
		
		void setAgencia(string agencia);
		void setNum_conta(string num_conta);
		void setProprietario(string proprietario);
		float setSaldo(float saldo);
		
		Conta(string agencia, string num_conta, string proprietario, float saldo);
		Conta();
		~Conta();
};

#endif
