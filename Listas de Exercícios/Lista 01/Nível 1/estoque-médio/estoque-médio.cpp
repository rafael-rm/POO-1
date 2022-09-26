// estoque-médio.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.

#include <iostream>

using namespace std;

int main()
{

	int minimo, max, estoque;

    cout << "\n\tCalcular a media do estoque\t\n\n";
	cout << "Digite o valor minimo do estoque: ";
	cin >> minimo;
	cout << "Digite o valor maximo do estoque: ";
	cin >> max;
	estoque = (minimo + max) / 2;
	cout << "A media desse estoque e de: " << estoque << endl;
	
}


