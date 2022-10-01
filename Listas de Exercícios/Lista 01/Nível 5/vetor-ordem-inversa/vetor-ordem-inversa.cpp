// vetor-ordem-inversa.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>

using namespace std;

int main()
{
    int tamanho;
    int *vetor;

    cout << "\n\tOrdem inversa de um vetor n\n\n";
    cout << "Insira o tamanho do vetor: ";
    cin >> tamanho;

    // Alocar vetor
	vetor = new int[tamanho];

	// Preencher vetor
	for (int i = 0; i < tamanho; i++) {
		cout << "Insira o valor do elemento " << i << ": ";
		cin >> vetor[i];
	}

	// Imprimir vetor
	cout << "\nVetor: ";
	for (int i = 0; i < tamanho; i++) {
		cout << vetor[i] << " ";
	}

	// Imprimir vetor na ordem inversa
	cout << "\nVetor na ordem inversa: ";
	for (int i = tamanho - 1; i >= 0; i--) {
		cout << vetor[i] << " ";
	}
	cout << "\n";
	
	// Liberar vetor
	delete[] vetor;

	return 0;
	
   
}

