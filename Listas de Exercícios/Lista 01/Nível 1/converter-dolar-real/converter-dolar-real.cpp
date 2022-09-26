// converter-dolar-real.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.

#include <iostream>

using namespace std;

int main()
{   
    float cotacao_dolar, valor_dolar, valor_real;
    cout << "\n\tConverter dolar para real\n\n";
    cout << "Insira a cotacao dolar: ";
    cin >> cotacao_dolar;
    cout << "Insira quantos dolares voce possui: ";
    cin >> valor_dolar;
    valor_real = cotacao_dolar * valor_dolar;
    cout << "A conversao de " << valor_dolar << " dolares para reais e de: " << valor_real << " reais.\n";
    
}
