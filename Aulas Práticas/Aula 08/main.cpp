#include <iostream>

#include "ContaInvestimento.h"
#include "ContaPoupanca.h"
#include "ManterDados.h"

#include <locale>
#include <vector>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void cadastrarConta(Conta *conta){
	cout << "Entre com a agencia da conta: ";	
	string agencia;
	getline(cin, agencia);
	conta->setAgencia(agencia);
	cin.clear();
	fflush(stdin);
	
	cout << "Entre com o número da conta: ";
	string numConta;
	getline(cin, numConta);
	conta->setNumConta(numConta);
	cin.clear();
	fflush(stdin);
	
	cout << "Entre com o proprietário da conta: ";
	string proprietario;
	getline(cin, proprietario);
	conta->setProprietario(proprietario);
	cin.clear();
	fflush(stdin);
	
	cout << "Entre com o saldo da conta: ";
	float saldo;
	cin >> saldo;
	conta->setSaldo(saldo);
	cin.clear();
	fflush(stdin);
}

void cadastrarContaCorrente(ContaCorrente *contaCorrente){

	cadastrarConta(contaCorrente);
	
	cout << "Entre com o limite da conta:";
	float limite;
	cin >> limite;
	contaCorrente->setLimite(limite);
	cin.clear();
	fflush(stdin);
	
	cout << "Conta corrente criada com sucesso!" << endl;
	
}

void cadastrarContaPoupanca(ContaPoupanca *cp){
	
	cadastrarConta(cp);
	
	int opcao;
	
	do{
		cout << "Entre com o mes de aniversario da conta" << endl;
		cout << "1 - Janeiro" << endl;
		cout << "2 - Fevereiro" << endl;
		cout << "3 - Março" << endl;
		cout << "4 - Abril" << endl;
		cout << "5 - Maio" << endl;
		cout << "6 - Junho" << endl;
		cout << "7 - Julho" << endl;
		cout << "8 - Agosto" << endl;
		cout << "9 - Setembro" << endl;
		cout << "10 - Outubro" << endl;
		cout << "11 - Novembro" << endl;
		cout << "12 - Dezembro" << endl;
		cout << "Entre com a opcao: ";
		cin >> opcao;
		
		if(opcao < 1 || opcao > 12)
			cout << "Opção invalida! Favor entrar com um mês valido." << endl;
		
	}while(opcao < 1 || opcao > 12);
	
	MesAniversario mes;
	
	switch(opcao){
		case 1:
			mes = JANEIRO;
			break;
		case 2:
			mes = FEVEREIRO;
			break;
		case 3:
			mes = MARCO;
			break;
		case 4:
			mes = ABRIL;
			break;
		case 5:
			mes = MAIO;
			break;
		case 6:
			mes = JUNHO;
			break;
		case 7:
			mes = JULHO;
			break;
		case 8:
			mes = AGOSTO;
			break;
		case 9:
			mes = SETEMBRO;
			break;
		case 10:
			mes = OUTUBRO;
			break;
		case 11:
			mes = NOVEMBRO;
			break;
		case 12:
			mes = DEZEMBRO;
			break;
	}
	
	cp->setMes(mes);
	
	cout << "Conta poupança criada com sucesso!" << endl;
}

void cadastrarContaInvestimento(ContaInvestimento * conta){
	
	cadastrarContaCorrente(conta);
	
	int opcao;
	
	do{
		cout << "Entre com o tipo de investimento" << endl;
		cout << "1 - CDB" << endl;
		cout << "2 - TESOURO DIRETO" << endl;
		cout << "3 - FUNDO DE AÇÕES" << endl;
		cout << "4 - FUNDO IMOBILIÁRIO" << endl;
		cout << "Entre com a opcao: ";
		cin >> opcao;
		cin.clear();
		fflush(stdin);
		
		if(opcao < 1 || opcao > 4)
			cout << "Opção invalida! Favor entrar com um tipo valido." << endl;
		
	}while(opcao < 1 || opcao > 4);
	
	TipoInvestimento tipo;
	
	switch(opcao){
		
		case 1:
				tipo = CDB;
				break;
		case 2:
				tipo = TESOURO;
				break;
		case 3:
				tipo = ACAO;
				break;
		case 4:
				tipo = IMOBILIARIO;
				break;
	}

	conta->setTipoInvestimento(tipo);
	
	cout << "Entre com o saldo do investimento: ";
	float saldoInvestimento;
	cin >> saldoInvestimento;
	conta->setSaldoInvestimento(saldoInvestimento);
	cin.clear();
	fflush(stdin);	
	
}

void cadastrarConta(vector<Conta *> &listConta){
	
	int opcao;
			
	do{
		cout << "		Cadastro de conta	"  << endl << endl;
		cout << "1 - Conta Corrente" << endl;
		cout << "2 - Conta Poupanca" << endl;
		cout << "3 - Conta Investimento" << endl;
	
		cout << "Entre com a opção: ";
		cin >> opcao;
		cin.clear();
		fflush(stdin);
		
		if(opcao < 1 || opcao > 3)
			cout << "Opção invalida! Favor entrar com uma opção do menu.";
		
	}while(opcao < 1 || opcao > 3);
	
	switch(opcao){
		case 1: {
			cout << "		Cadastro de Conta Corrente" << endl << endl;
			ContaCorrente *cc = new ContaCorrente();
			cadastrarContaCorrente(cc);
			listConta.push_back(cc);
			break;
		}
						
		case 2: {
			cout << "		Cadastro de Conta Poupança" << endl << endl;
			ContaPoupanca *cp = new ContaPoupanca();
			cadastrarContaPoupanca(cp);
			listConta.push_back(cp); 
			break;	
		}
		
		case 3: {
			cout << "		Cadastro de Conta Investimento" << endl << endl;
			ContaInvestimento *ci = new ContaInvestimento();
			cadastrarContaInvestimento(ci);
			listConta.push_back(ci);
			break;
		}
				
	}
	
}

Conta * buscarConta(vector<Conta *> &listConta){
		
	cout << "Entre com a agência da conta: ";
	string agencia;
	getline(cin, agencia);
	cin.clear();
	fflush(stdin);
	
	cout << "Entre com o número da conta: ";
	string numConta;
	getline(cin, numConta);
	cin.clear();
	fflush(stdin);
	
	for(vector<Conta *>::iterator it = listConta.begin(); it != listConta.end(); it++){
		if((agencia == (*it)->getAgencia()) && (numConta == (*it)->getNumConta())){
			return (*it);
		}
		
	}
	
	return NULL;
}

void extratoConta(vector<Conta *> &listConta){
	
	Conta * conta = buscarConta(listConta);
	
	if(conta != NULL){
		
		if(dynamic_cast<ContaInvestimento*>(conta)){
			cout << "Conta Investimento" << endl;
			ContaInvestimento *ci = dynamic_cast<ContaInvestimento*>(conta);
		}else if(dynamic_cast<ContaCorrente*>(conta)){
			cout << "Conta corrente" << endl;
		} else if(dynamic_cast<ContaPoupanca*>(conta)){
			cout << "Conta Poupança" << endl;
		}
		
		conta->imprimirExtrato();
	}else{
		cout << "Conta não encontrada!" << endl;
	}
	
}

void DepositarValor(vector<Conta *> &listConta){
	
	Conta * conta = buscarConta(listConta);
	
	if(conta != NULL){
		
		cout << "Entre com o valor a ser depositado:";
		float valor;
		cin >> valor;
		cin.clear();
		fflush(stdin);
		
		if(conta->depositar(valor))
			cout << "Valor " << valor << " depositado com sucesso na conta de " << conta->getProprietario() << endl;
		else
			cout << "Valor invalido para deposito" << endl;
	}else{
		cout << "Conta não encontrada!" << endl;
	}
	
}
				
void SacarValor(vector<Conta *> &listConta){
	Conta * conta = buscarConta(listConta);
	
	if(conta != NULL){
		
		cout << "Entre com o valor a ser sacado:";
		float valor;
		cin >> valor;
		cin.clear();
		fflush(stdin);
		
		if(conta->sacar(valor))
			cout << "Valor " << valor << " sacado com sucesso na conta de " << conta->getProprietario() << endl;
		else
			cout << "Valor invalido para sacar" << endl;
	}else{
		cout << "Conta não encontrada!" << endl;
	}
}

bool excluirConta(vector<Conta *> &listConta){
	
	cout << "Entre com a agência da conta: ";
	string agencia;
	getline(cin, agencia);
	cin.clear();
	fflush(stdin);
	
	cout << "Entre com o número da conta: ";
	string numConta;
	getline(cin, numConta);
	cin.clear();
	fflush(stdin);
	
	for(vector<Conta *>::iterator it = listConta.begin(); it != listConta.end(); it++){
		if((agencia == (*it)->getAgencia()) && (numConta == (*it)->getNumConta())){
			listConta.erase(it);
			return true;
		}
		
	}
	return false;
}

int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "");
	system("chcp 1252 > nul");
	
	vector<Conta *> listConta;
	ManterDados *md = new ManterDados();
	
	md->lerDadosContas(listConta);

	int opcao;
	
	do{
		
		do{
			cout << "		Cadastro de Contas		" << endl << endl;
			cout << "1 - Cadastrar conta" << endl;
			cout << "2 - Extrato de conta" << endl;
			cout << "3 - Depositar valor" << endl;
			cout << "4 - Sacar valor" << endl;
			cout << "5 - Excluir conta" << endl;
			cout << "6 - Sair" << endl;
			
			cout << "Entre com a opção: ";
			cin >> opcao;
			cin.clear();
			fflush(stdin);
			
			if (opcao < 1 || opcao > 6)
				cout << "Opção invalida! Favor entrar com uma opção do menu" << endl;
			
		}while (opcao < 1 || opcao > 6);
		
		switch(opcao){
			case 1:
				cadastrarConta(listConta);
				md->gravarDadosContas(listConta);
				break;
			case 2:
				cout << "Tam: " << listConta.size() << endl;
				if(!listConta.empty()){
					extratoConta(listConta);
				}else{
					cout << "Nenhuma conta foi cadastrada! Favor cadastar uma conta." << endl;
				}
				break;	
			case 3:
				if(!listConta.empty()){
					DepositarValor(listConta);	
				}else{
					cout << "Nenhuma conta foi cadastrada! Favor cadastar uma conta." << endl;
				}
				break;	
			case 4:
				if(!listConta.empty()){
					SacarValor(listConta);
				}else{
					cout << "Nenhuma conta foi cadastrada! Favor cadastar uma conta." << endl;
				}
				break;
			case 5:
				if(!listConta.empty()){
					bool excluir = excluirConta(listConta);
					if(excluir){
						cout << "Conta excluída com sucesso!" << endl;
					}else{
						cout << "Conta não encontrada!" << endl;
					}
					break;
				}else{
					cout << "Nenhuma conta foi cadastrada! Favor cadastar uma conta." << endl;
				}
			case 6:
				cout << "Obrigado por utilizar o nosso sistema!" << endl;
				break;
				
		}
		
	}while (opcao != 6);
	
	delete(md);	
	
	return 0;
}
