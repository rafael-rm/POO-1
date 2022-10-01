// reajuste-salarial.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>

using namespace std;

float reajustar_salario(float salario, float porcentagem_reajuste);

int main()
{
    float salario, porcentagem_reajuste, salario_novo;
    cout << "\n\tReajuste salarial\n\n";
    cout << "Insira o salario: ";
    cin >> salario;
    cout << "Insira a porcentagem do reajuste (%): ";
    cin >> porcentagem_reajuste;
    salario_novo = reajustar_salario(salario, porcentagem_reajuste);
    cout << "\nO novo salario reajustado e de: " << salario_novo << "R$" << endl;
	
    return 0;
}

float reajustar_salario(float salario, float porcentagem_reajuste) {
    salario += salario * (porcentagem_reajuste / 100);
    return salario;
}

