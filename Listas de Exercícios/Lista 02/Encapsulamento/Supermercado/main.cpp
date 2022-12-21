#include <iostream>
#include <string>
#include <vector>
#include "Pedido.h"

using namespace std;

void limpar_buffer()
{
	cin.clear();
	fflush(stdin);
}
Produto * cadastrar_produto()
{
	Produto* produto = new Produto();
	
	cout << endl << "Insira o nome do produto: " << endl;
	string nome;
	cin.ignore();
	getline(cin, nome);
	produto->setNome(nome);
	limpar_buffer();

	cout << "Insira o preco do produto: " << endl;
	float preco;
	cin >> preco;
	produto->setPreco(preco);
	limpar_buffer();

	cout << "Insira a quantidade disponivel no estoque: " << endl;
	int quantidade_estoque;
	cin >> quantidade_estoque;
	produto->setQuantidade_estoque(quantidade_estoque);
	limpar_buffer();

	cout << "Insira o codigo do produto: " << endl;
	int codigo;
	cin >> codigo;
	produto->setCodigo(codigo);
	limpar_buffer();

	
	cout <<  endl << "Produto cadastrado com sucesso" << endl << endl;

	return produto;
}
Item* cadastrar_item(Produto* produto) {

	Item *item= new Item();
	item->setProduto(produto);

	cout << endl << "Entre com a quantidade desse item que deseja: " << endl;
	int quantidade;
	cin >> quantidade;
	item->setQuantidade(quantidade);
	int qt_estoque_atualizada = produto->getQuantidade_estoque() - quantidade;
	produto->setQuantidade_estoque(qt_estoque_atualizada);
	float valor;
	valor = (item->getQuantidade() * item->getProduto()->getPreco());
	item->setValor(valor);
	cout << endl << "Item inserido com sucesso" << endl;

	return item;

}
Pedido* cadastrar_pedido(vector<Item*> &itens, Item *item) {
	Pedido* pedido = new Pedido();

	itens.push_back(item);
	pedido->setItens(itens);
	float total{};

	for (vector<Item*> ::iterator it = itens.begin(); it != itens.end(); it++) {
		total += (*it)->getValor();

	}
	pedido->setValor(total);

	return pedido;
}
Produto* buscar_produto(vector<Produto*>produtos) 
{
	cout << endl << "Insira o nome do produto que deseja comprar" << endl;
	string nome;
	cin.ignore();
	getline(cin, nome);

	for (vector<Produto*>::iterator it = produtos.begin(); it != produtos.end(); it++) {
		if ((nome == (*it)->getNome()) && (0 < (*it)->getQuantidade_estoque())) {
			return (*it);
		}
	}
	return NULL;
}
void pagamento(Pedido* pedido) {
	int op;
	int opcao;
	int parcela = 0;
	float valor = 0;
	float v = 0;
	float troco = 0;

	do
	{
		cout << endl << "1 - Dinheiro";
		cout << endl << "2 - Cartao";
		cout << endl << "3 - Cheque";
		cout << endl << "0 - Sair" << endl;
		cin >> op;

		switch (op)
		{
		case 1:
			cout << "Insira o valor recebido: " << endl;
			cin >> valor;
			troco = valor - pedido->getValor();
			cout << "Troco: R$ " << troco << endl;
			break;
		case 2:
			do {
				cout << endl << "1 - Debito";
				cout << endl << "2 - Credito a vista";
				cout << endl << "3 - Parcelado";
				cout << endl << "4 - Finalizar" << endl << endl;
				cin >> opcao;
				switch (opcao)
				{
				case 1:
					cout << endl << "Pagamento concluido. Debito de " << pedido->getValor() << " reais" << endl;
					break;
				case 2:
					cout << endl << "Pagamento concluido. 1x de " << pedido->getValor() << " reais" << endl;
					break;
				case 3:
					cout << endl << "Insira de quantas vezes quer parcelar. Maximo 3x" << endl;
					cin >> parcela;
					v = pedido->getValor();
					v/=parcela;
					
					cout << endl << "Compra parcela em " << parcela << "x de " << v << endl;
					break;
				}
			} while (opcao!=4);
			break;
		case 3:
			cout << endl << "Pagamento concluido. Cheque no valor de " << pedido->getValor() << " reais" << endl;
			break;
		case 4:
			cout << endl << endl << "Obrigada por utilizar nossos servicos!" << endl;
			break;
		default:
			break;
		}


	} while(op!=0);
}
int main(int argc, char** argv) {

	int op;
	Produto* produto = nullptr;
	Item* item = nullptr;
	Pedido* pedido = nullptr;
	vector<Produto*> produtos;
	vector<Item*> itens;

	do {
		cout << endl << "1 - Cadastrar produtos";
		cout << endl << "2 - Catalogo de produtos";
		cout << endl << "3 - Fazer pedido";
		cout << endl << "4 - Imprimir pedido";
		cout << endl << "5 - Realizar pagamento";
		cout << endl;
		cin >> op;

		switch (op)
		{
		case 1:
			produto = cadastrar_produto();
			produtos.push_back(produto);
			break;
		case 2:
			for (vector<Produto*>::iterator it = produtos.begin(); it != produtos.end(); it++) {
				cout << endl;
				(*it)->imprimir_produto();
			}
			break;
		case 3:
			produto = buscar_produto(produtos);
			if (produto != NULL) {
				item = cadastrar_item(produto);
				pedido = cadastrar_pedido(itens, item);
			}
			else {
				cout << endl << "Produto indisponivel" << endl;
			}
			break;
		case 4:
			pedido->imprimir_pedido();
			break;
		case 5:
			pagamento(pedido);
			cout << endl << endl << "Obrigada por utilizar nossos servicos!" << endl;
			break;
		default:
			break;
		}
	} while (op != 6);
	return 0;
}



