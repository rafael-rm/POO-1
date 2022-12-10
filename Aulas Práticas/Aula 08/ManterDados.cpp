#include "ManterDados.h"
#include "ContaPoupanca.h"
#include "ContaInvestimento.h"
#include <fstream>
#include <cstdio>

using namespace std;

ManterDados::ManterDados(){
	
}

ManterDados::~ManterDados(){
	
}

void ManterDados::lerDadosContas(vector<Conta *> &listConta){
	lerDadosContaCorrente(listConta);
	lerDadosContaPoupanca(listConta);
	lerDadosContaInvestimento(listConta);
}

void ManterDados::gravarDadosContas(vector<Conta *> listConta){
	gravarDadosContaCorrente(listConta);
	gravarDadosContaPoupanca(listConta);
	gravarDadosContaInvestimento(listConta);
}
		
void ManterDados::lerDadosContaPoupanca(vector<Conta *> &listConta){
	ifstream arq;
	
	arq.open("ContasPoupanca.txt");
	
	if(arq.is_open()){
		while(!arq.eof()){
			
			string linha;
			getline(arq, linha);
			
			if(!linha.empty()){
				string agencia = linha;
				
				getline(arq, linha);
				string numConta = linha;

				getline(arq, linha);
				string proprietario = linha;
				
				getline(arq, linha);
				float saldo;
				sscanf(linha.c_str(), "%f", &saldo);
				
				getline(arq, linha);
			    MesAniversario mes;
			    sscanf(linha.c_str(), "%i", &mes);
			    
			    ContaPoupanca *cp = new ContaPoupanca(agencia, numConta, proprietario, saldo, mes);
			    
			    listConta.push_back(cp);
			}	
		}
	}
}

void ManterDados::lerDadosContaCorrente(vector<Conta *> &listConta){
	ifstream arq;
	
	arq.open("ContasCorrente.txt");
	
	if(arq.is_open()){
		while(!arq.eof()){
			
			string linha;
			getline(arq, linha);
			
			if(!linha.empty()){
				string agencia = linha;
				
				getline(arq, linha);
				string numConta = linha;

				getline(arq, linha);
				string proprietario = linha;
				
				getline(arq, linha);
				float saldo;
				sscanf(linha.c_str(), "%f", &saldo);
				
				getline(arq, linha);
			    float limite;
			    sscanf(linha.c_str(), "%f", &limite);
			    
			    ContaCorrente *cc = new ContaCorrente(agencia, numConta, proprietario, saldo, limite);
			    
			    listConta.push_back(cc);
			}	
		}
	}
}

void ManterDados::lerDadosContaInvestimento(vector<Conta *> &listConta){
	ifstream arq;
	
	arq.open("ContasInvestimento.txt");
	
	if(arq.is_open()){
		while(!arq.eof()){
			
			string linha;
			getline(arq, linha);
			
			if(!linha.empty()){
				string agencia = linha;
				
				getline(arq, linha);
				string numConta = linha;

				getline(arq, linha);
				string proprietario = linha;
				
				getline(arq, linha);
				float saldo;
				sscanf(linha.c_str(), "%f", &saldo);
				
				getline(arq, linha);
			    float limite;
			    sscanf(linha.c_str(), "%f", &limite);
			    
			    getline(arq, linha);
			    TipoInvestimento tipoInvestimento;
			    sscanf(linha.c_str(), "%i", &tipoInvestimento);
			    
			    getline(arq, linha);
				float saldoInvestimento;
				sscanf(linha.c_str(), "%f", &saldoInvestimento);
			    
			    ContaInvestimento *ci = new ContaInvestimento(agencia, numConta, proprietario, saldo, limite, tipoInvestimento, saldoInvestimento);
			    
			    listConta.push_back(ci);
			}	
		}
	}
}
		
void ManterDados::gravarDadosContaPoupanca(vector<Conta *> listConta){
	ofstream arq;
	
	arq.open("ContasPoupanca.txt", ios::trunc);
	
	if(arq.is_open()){
		for(vector<Conta *>::iterator it = listConta.begin(); it != listConta.end(); it++){
			if(dynamic_cast<ContaPoupanca *>(*it)){
				ContaPoupanca *cp = dynamic_cast<ContaPoupanca *>(*it);
				arq << cp->getAgencia() << endl;
				arq << cp->getNumConta() << endl;
				arq << cp->getProprietario() << endl;
				arq << cp->getSaldo() << endl; 
				arq << cp->getMes() << endl;
			}
		}
		
		arq.close();
	}
	
}

void ManterDados::gravarDadosContaCorrente(vector<Conta *> listConta){
	ofstream arq;
	
	arq.open("ContasCorrente.txt", ios::trunc);
	
	if(arq.is_open()){
		for(vector<Conta *>::iterator it = listConta.begin(); it != listConta.end(); it++){
			if(dynamic_cast<ContaCorrente *>(*it) && !dynamic_cast<ContaInvestimento *>(*it)){
				ContaCorrente *cc = dynamic_cast<ContaCorrente *>(*it);
				arq << cc->getAgencia() << endl;
				arq << cc->getNumConta() << endl;
				arq << cc->getProprietario() << endl;
				arq << cc->getSaldo() << endl; 
				arq << cc->getLimite() << endl;
			}
		}
		
		arq.close();
	}
}

void ManterDados::gravarDadosContaInvestimento(vector<Conta *> listConta){
	ofstream arq;
	
	arq.open("ContasInvestimento.txt", ios::trunc);
	
	if(arq.is_open()){
		for(vector<Conta *>::iterator it = listConta.begin(); it != listConta.end(); it++){
			if(dynamic_cast<ContaInvestimento *>(*it)){
				ContaInvestimento *ci = dynamic_cast<ContaInvestimento *>(*it);
				arq << ci->getAgencia() << endl;
				arq << ci->getNumConta() << endl;
				arq << ci->getProprietario() << endl;
				arq << ci->getSaldo() << endl; 
				arq << ci->getLimite() << endl;
				arq << ci->getTipoInvestimento() << endl;
				arq << ci->getSaldoInvestimento() << endl;
			}
		}
		
		arq.close();
	}
}
