// diferença-maior-para-menor.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>

using namespace std;

int main()
{
	int a, b, diferenca;
    cout << "\n\tDiferenca entre o maior valor para o menor\n\n";
	cout << "Insira o primeiro valor: ";
	cin >> a;
	cout << "Insira o segundo valor: ";
	cin >> b;
	
	if (a > b)
		cout << "\nA diferenca entre " << a << " e " << b << " e: " << a - b << endl;
	else if (a < b)
		cout << "\nA diferenca entre " << a << " e " << b << " e: " << b - a << endl;
	else
		cout << "\nOs valores são iguais" << endl;

	return 0;
}
