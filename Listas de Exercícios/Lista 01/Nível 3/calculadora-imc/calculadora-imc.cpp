// calculadora-imc.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "\n\tCalculadora de IMC\n\n";

	float peso, altura, imc;
	char sexo;
	
	cout << "Digite seu peso: ";
	cin >> peso;
	cout << "Digite sua altura: ";
	cin >> altura;
	cout << "Digite seu sexo (M ou F): ";
	cin >> sexo;
	sexo = tolower(sexo);
	
	if (sexo == 'm') {
		imc = (72.7 * altura) - 58;
	}
	else if (sexo == 'f') {
		imc = (62.1 * altura) - 44.7;
	}
	else {
		cout << "Sexo inválido!";
		return 0;
	}

	cout << "\nSeu IMC e: " << imc << endl;
	return 0;	
}
