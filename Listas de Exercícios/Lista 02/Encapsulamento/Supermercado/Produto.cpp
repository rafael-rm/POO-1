#include "Produto.h"
#include <iostream>

Produto::Produto()
{
    preco = 1, 99;
    quantidade_estoque = 1;
    codigo = 01;
    nome = "arroz";
}
Produto::~Produto()
{

}
float Produto::getPreco()
{
    return preco;
}

int Produto::getQuantidade_estoque()
{
    return quantidade_estoque;
}

int  Produto::getCodigo()
{
    return codigo;
}

string Produto::getNome()
{
    return nome;
}

void Produto::setPreco(float preco)
{
    this->preco = preco;
}

void Produto::setQuantidade_estoque(int quantidade_estoque)
{
    this->quantidade_estoque = (quantidade_estoque > 0) ? quantidade_estoque : 0;
}

void Produto::setCodigo(int codigo)
{
    this->codigo = codigo;
}

void Produto::setNome(string nome)
{
    this->nome = nome;
}
void Produto::imprimir_produto(){
    cout << endl << "Informacoes do produto" << endl;
    cout << "Produto: " << getNome() << endl;
    cout << "Preco: " << getPreco() << endl;
    cout << "Quantidade disponivel no estoque: " << getQuantidade_estoque() << endl;
    cout << "Codigo do produto: " << getCodigo() << endl;
}
