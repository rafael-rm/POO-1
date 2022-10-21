#include <iostream>
#include "Conta.h"
#include "ContaCorrente.h"
#include "ContaPoupanca.h"
#include "ContaInvestimento.h"
#include "Investimento.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	cout << "\n\t\tBem vindo ao BANCAO DO RAFAELZAO\n\n" << endl;
	
	ContaInvestimento *cc = new ContaInvestimento();
	
	cc->imprimir_extratoCI();
	
	cc->setAgencia("176-7");
	cc->setNum_conta("13919-9");
	cc->setSaldo(10.95);
	cc->imprimir_extratoCI();
	
	cc->sacar(5.45);
	cc->imprimir_extratoCI();
	
	cc->setTipo_investimento(CDB);
	cc->setSaldo_investimento(107651);
	
	cc->depositar(5.45);
	cc->imprimir_extratoCI();
	return 0;
}
