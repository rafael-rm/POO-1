// trocar-valores-ab.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>

using namespace std;

int main()
{
	
	cout << "\n\tTrocar os valores de A com B\n\n";
	int a, b, aux;
	cout << "Digite o valor de A: ";
	cin >> a;
	cout << "Digite o valor de B: ";
	cin >> b;
	
	aux = a;
	a = b;
	b = aux;
	
	cout << "\nAgora o valor de A e: " << a;
	cout << "\nAgora o valor de B e: " << b << endl;
	
    return 0;
}
