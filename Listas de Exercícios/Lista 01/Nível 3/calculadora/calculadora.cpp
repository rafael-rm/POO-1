// calculadora.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>

using namespace std;

int main()
{
	int opcao;
	
    do {
		float num1, num2, resultado;
		cout << "Digite o primeiro numero: ";
		cin >> num1;
		cout << "Digite o segundo numero: ";
		cin >> num2;
		cout << "\n\tEscolha uma opcao: " << endl;
		cout << "\n1 - Soma" << endl;
		cout << "2 - Subtracao" << endl;
		cout << "3 - Multiplicacao" << endl;
		cout << "4 - Divisao" << endl;
		cout << "0 - Sair\n" << endl;
		cout << "Selecionar: ";

		cin >> opcao;
		
		switch (opcao)
		{
		case 1:
			resultado = num1 + num2;
			cout << "\nO resultado da soma e: " << resultado << endl;
			break;
		case 2:
			resultado = num1 - num2;
			cout << "\nO resultado da subtracao e: " << resultado << endl;
			break;
		case 3:
			resultado = num1 * num2;
			cout << "\nO resultado da multiplicacao e: " << resultado << endl;
			break;
		case 4:
			resultado = num1 / num2;
			cout << "\nO resultado da divisao e: " << resultado << endl;
			break;
		case 0:
			cout << "\nSaindo..." << endl;
			break;
		default:
			cout << "\nOpcao invalida" << endl;
			break;
		}
		
		system("pause");
		system("cls");
		
	} while (opcao != 0);
	
	return 0;
	
}
