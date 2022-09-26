// ordem-decrescente.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>

using namespace std;

int main()
{
	int num[3];
	
	for (int i = 0; i < 3; i++) {
		cout << "Digite um numero: ";
		cin >> num[i];
	}


	cout << "\nOrdem atual: ";
	for (int i = 0; i < 3; i++) {
		cout << num[i] << " ";
	}
	
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (num[i] > num[j]) {
				int aux = num[i];
				num[i] = num[j];
				num[j] = aux;
			}
		}
	}

	cout << "\nOrdem decrescente: ";
	for (int i = 0; i < 3; i++) {
		cout << num[i] << " ";
	}
	
	cout << endl;
	
	return 0;
}


