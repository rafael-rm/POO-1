// verificar_quadrante.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>

using namespace std;

int verificar_quadrante(float x, float y);

int main()
{
	float x, y;
    cout << "\n\tVerificar quadrante de x e y\n\n";

	cout << "Insira o valor de x: ";
	cin >> x;
	cout << "Insira o valor de y: ";
	cin >> y;

	float quadrante = verificar_quadrante(x, y);

	if (quadrante == -1)
		cout << "\nO ponto se encontra na origem.\n";
	else
		cout << "\nO ponto se encontra no quadrante " << quadrante << "." << endl;

	return 0;
}

int verificar_quadrante(float x, float y) {
	if (x > 0 && y > 0)
		return 1;
	if (x > 0 && y < 0)
		return 4;
	if (x < 0 && y > 0) 
		return 2;
	if (x < 0 && y < 0)
		return 3;
	if (x == 0 && y == 0)
		return -1;
}

