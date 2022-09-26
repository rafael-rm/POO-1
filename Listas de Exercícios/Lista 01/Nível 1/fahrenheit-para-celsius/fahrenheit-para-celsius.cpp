// fahrenheit-para-celsius.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>

using namespace std;

int main()
{
	float fahrenheit, celsius;
    cout << "\n\tConverter Fahrenheit para Celsius\n\n";
	cout << "Digite a temperatura em Fahrenheit: ";
	cin >> fahrenheit;
	celsius = (fahrenheit - 32) * 5 / 9;
	cout << "\nA temperatura em Celsius e: " << celsius << endl;
	
	return 0;
}

