// manipular-numeros.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>

using namespace std;

int main()
{
    int num1, num2;
    cout << "\n\tManipular numeros\n\n";
	cout << "Insira o primeiro numero: ";
	cin >> num1;
	cout << "Insira o segundo numero: ";
	cin >> num2;
	cout << "\n\n";
	system("cls");
	
	int opcao;

	do {
		cout << "\n1 - Verificar se um dos numeros e ou nao multiplo do outro\n";
		cout << "2 - Verificar se os dois numeros lidos sao pares\n";
		cout << "3 - Verificar se a media dos dois numeros lidos e maior ou igual a 7\n";
		cout << "4 - Sair\n";
		cout << "\nEscolha uma opcao: ";
		cin >> opcao;

		switch (opcao)
		{
		case 1:
			if (num1 % num2 == 0 || num2 % num1 == 0) {
				cout << "\nUm dos numeros e multiplo do outro\n";
			}
			else {
				cout << "\nNenhum dos numeros e multiplo do outro\n";
			}
			break;
		case 2:
			if (num1 % 2 == 0 && num2 % 2 == 0) {
				cout << "\nOs dois numeros sao pares\n";
			}
			else {
				cout << "\nUm ou ambos os numeros nao sao pares\n";
			}
			break;
		case 3:
			if ((num1 + num2) / 2 >= 7) {
				cout << "\nA media dos dois numeros e maior ou igual a 7\n";
			}
			else {
				cout << "\nA media dos dois numeros e menor que 7\n";
			}
			break;
		case 4:
			cout << "\nSaindo...\n";
			break;
		default:
			cout << "\nOpcao invalida\n";
			system("pause");
			system("cls");
			break;
		}

		system("pause");
		system("cls");

	} while (opcao > 0 && opcao < 5);
}



