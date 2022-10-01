// verificar-impar-par.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>

using namespace std;

string impar_ou_par(int numero);

int main()
{
	int numero;
    cout << "\n\tVerificar se e impar ou par\n\n";
	cout << "Digite um numero: ";
	cin >> numero;
	cout << "\nO numero " << numero << " e " << impar_ou_par(numero) << endl;
	
	
}

string impar_ou_par(int numero) {
	if (numero % 2 == 0) {
		return "par";
	}
	else {
		return "impar";
	}
}
