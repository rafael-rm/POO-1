#include <iostream>
#include "Item.h"


Item::Item() {

}
Item::~Item()
{

}

int Item::getQuantidade()
{
    return quantidade;
}
float Item::getValor()
{
    return valor;
}
Produto* Item::getProduto()
{
    return produto;
}

void Item::setQuantidade(int quantidade)
{
    this->quantidade = (quantidade > 0) ? quantidade : 0;
}
void Item::setValor(float valor)
{
    this->valor = valor;
}
void Item::setProduto(Produto* produto)
{
    this->produto = produto;
}
void Item::imprimir_item() {

    produto->imprimir_produto();
    cout << "Quantidade: " << getQuantidade() << endl;
    //cout << "Valor total: " << getValor() << endl;

}
