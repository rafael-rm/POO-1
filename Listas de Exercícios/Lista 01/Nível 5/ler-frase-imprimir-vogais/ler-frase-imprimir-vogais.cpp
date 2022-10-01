// ler-frase-imprimir-vogais.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <string>

using namespace std;

void limpar_buffer();

int main()
{
    cout << "\n\tLer uma string e imprimir suas vogais\n\n";

	string frase;
	cout << "Insira uma frase: ";
	getline(cin, frase);
	limpar_buffer();

	cout << endl << endl << frase << endl << endl;

	for (int i = 0; i < frase.length(); i++) {
		char temp = frase[i];
		if (temp == 'a' || temp == 'e' || temp == 'i' || temp == 'o' || temp == 'u') {
			cout << temp << endl;
		}
	}
	
	return 0;
}

void limpar_buffer() {
	cin.clear();
	fflush(stdin);
}