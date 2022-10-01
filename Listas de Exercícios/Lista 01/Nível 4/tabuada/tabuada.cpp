// tabuada.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>

using namespace std;

int main()
{
    cout << "\n\tImprimir tabuada\n\n";

    int num_tab;

    cout << "\nInsira a tabuada de qual numero deseja imprimir: ";
    cin >> num_tab;
    cout << "\n";

    for (int i = 0; i <= 20; i++) {
        cout << num_tab << " * " << i << " = " << num_tab * i << endl;
    }
     
    return 0;
}

