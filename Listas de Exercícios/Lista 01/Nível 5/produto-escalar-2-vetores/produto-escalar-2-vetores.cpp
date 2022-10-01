// produto-escalar-2-vetores.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>

using namespace std;

int main()
{
	int tamanho;
	int* vetorA;
	int* vetorB;
	
    cout << "\n\tProduto escalar de 2 vetores\n\n";
	cout << "Digite o tamanho dos vetores: ";
	cin >> tamanho;

	vetorA = new int[tamanho];
	vetorB = new int[tamanho];
	
	for (int i = 0; i < tamanho; i++) {
		cout << "Digite o valor do vetor A na posicao " << i << ": ";
		cin >> vetorA[i];
	}

	for (int i = 0; i < tamanho; i++) {
		cout << "Digite o valor do vetor B na posicao " << i << ": ";
		cin >> vetorB[i];
	}

	int soma = 0;
	for (int i = 0; i < tamanho; i++) {
		soma += vetorA[i] * vetorB[i];
	}

	cout << "\nProduto escalar dos vetores: " << soma << endl;

	return 0;
}

