#include <iostream>
#include <vector>

using namespace std;

#include "Pedido.h"

Pedido::Pedido(){
}
Pedido::~Pedido()
{
}
vector <Item*> Pedido::getItens()
{
    return itens;
}
float Pedido::getValor()
{
    return valor;
}
void Pedido::setValor(float valor)
{
    this->valor = valor;
}

void Pedido::setItens(vector<Item*> itens) {
    this->itens = itens;
}
void Pedido::imprimir_pedido() {
    cout << endl << "\tInformacoes do pedido\t" << endl;
    cout << endl << "Itens comprados:" << endl;
    for (vector<Item*>::iterator it = itens.begin(); it != itens.end(); it++) {
        (*it)->imprimir_item();
    }
    cout << "Valor total: " << getValor() << endl;
}
