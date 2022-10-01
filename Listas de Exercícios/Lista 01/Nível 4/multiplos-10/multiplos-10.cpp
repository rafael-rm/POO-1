// multiplos-10.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>

using namespace std;

int main()
{
    cout << "\n\tImprimir de 1 a 100 e mostrar os multiplos de 10\n";

    for (int i = 1; i <= 100; i++) {
        cout << i;
        if (i % 10 == 0)
            cout << " - Multiplo de 10";
        cout << endl;
    }
}
