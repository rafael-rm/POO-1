#pragma once

#include "Produto.h"

class Item
{
private:

	Produto *produto;
	int quantidade;
	float valor;

public:

	Item();
	~Item();

	Produto *getProduto();
	int getQuantidade();
	float getValor();

	void setProduto(Produto* produto);
	void setQuantidade(int quantidade);
	void setValor(float valor);
	void imprimir_item();

};

