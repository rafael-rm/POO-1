#pragma once

#include <string>


using namespace std;

class Produto
{
private:

	string nome;
	float preco;
	int quantidade_estoque;
	int codigo;
	

public:

	Produto();
	~Produto();

	string getNome();
	float getPreco();
	int getQuantidade_estoque();
	int getCodigo();
	
	void setNome(string nome);
	void setPreco(float preco);
	void setQuantidade_estoque(int quantidade_estoque);
	void setCodigo(int codigo);
	void imprimir_produto();

};
