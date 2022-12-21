#include "N_complexos.h"


void menu();
void limpa();
void Limpa();


int main(int argc, char** argv) {

	setlocale(LC_ALL, "");
	system("chcp 1252 > nul");

	menu();

	return 0;
}


N_complexos operator+ (N_complexos n1, N_complexos n2){
	N_complexos resposta;
	resposta.setReal(n1.getReal() + n2.getReal());
	resposta.setImaginario(n1.getImaginario() + n2.getImaginario());
	return resposta;
}

N_complexos operator- (N_complexos n1, N_complexos n2){
	N_complexos resposta;
	resposta.setReal(n1.getReal() - n2.getReal());
	resposta.setImaginario(n1.getImaginario() - n2.getImaginario());
	return resposta;
}

N_complexos operator* (N_complexos n1, N_complexos n2){
	
	N_complexos resposta;
	resposta.setReal((n1.getReal()*n2.getReal()) - (n1.getImaginario() * n2.getImaginario()));
	resposta.setImaginario((n2.getImaginario() * n1.getReal()) + (n1.getImaginario() * n2.getReal()));
	return resposta;
}

N_complexos operator/ (N_complexos n1, N_complexos n2){
	N_complexos resposta;
   	resposta.setReal(((n1.getReal()*n2.getReal()) + (n1.getImaginario() *n2.getImaginario())) / (n2.getReal() * n2.getReal() + n2.getImaginario() * n2.getImaginario()));
	resposta.setImaginario((-(n1.getReal() * n2.getImaginario()) + (n1.getImaginario() * n2.getReal())) / n2.getReal() * n2.getReal() + n2.getImaginario() * n2.getImaginario());
	return resposta;	
}

void menu(){
	int opcao;
	N_complexos n1, n2, Resultado;
	float resposta;
	do{
		cout << "Digite o primeiro n�mero real: ";
		limpa();
		cin >> resposta;
		n1.setReal(resposta);
		cout << "Digite o primeiro n�mero imaginario: ";
		limpa();
		cin >> resposta;
		n1.setImaginario(resposta);
		
		cout << "Digite o segundo n�mero real: ";
		limpa();
		cin >> resposta;
		n2.setReal(resposta);
		cout << "Digite o segundo n�mero imaginario: ";
		limpa();
		cin >> resposta;
		n2.setImaginario(resposta);
		
		cout << endl << endl << endl;
		cout << "1- Adi��o\t2- Subtra��o\t3- Multiplica��o\t4- Divis�o\t0- Sair\t\tResposta: ";
		cin >> opcao;
		limpa();
		
		switch(opcao){
			case 1:{
				Resultado = n1 + n2;
				cout << "Real: " << Resultado.getReal() << endl <<"Imaginario: " << Resultado.getImaginario() << endl;
				Limpa();
				break;
			}
			case 2:{
				Resultado = n1 - n2;
				cout << "Real: " << Resultado.getReal() << endl <<"Imaginario: " << Resultado.getImaginario() << endl;
				Limpa();
				break;
			}
			case 3:{
				Resultado = n1 * n2;
				cout << "Real: " << Resultado.getReal() << endl <<"Imaginario: " << Resultado.getImaginario() << endl;
				Limpa();
				break;
			}
			case 4:{
				Resultado = n1 / n2;
				cout << "Real: " << Resultado.getReal() << endl <<"Imaginario: " << Resultado.getImaginario() << endl;
				Limpa();
				break;
			}
			case 0:{
				cout << "Saindo!!" << endl;
				break;
			}
			default:{
				cout << "Valor digitado � inv�lido!!!";
				Limpa();
				break;
			}
		}
		
	}while(opcao != 0);
}

void limpa() {
	cin.clear();
	fflush(stdin);
}

void Limpa() {
	system("pause");
	system("cls");
}