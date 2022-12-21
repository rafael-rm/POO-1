#pragma once
#include "Item.h"
#include <vector>

class Pedido
{
private:

	vector <Item*> itens;
	float valor;

public:
	Pedido();
	~Pedido();

	vector <Item*> getItens();
	float getValor();

	void setItens(vector <Item*> itens);
	void setValor(float valor);
	void imprimir_pedido();
};
