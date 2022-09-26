#include <iostream>
#include <locale>
#include <string>

using namespace std;

void limpar_buffer();

int main(int argc, char** argv) {

	/* int num1, num2;
	int soma;

	cout << "Insira dois valores para somar" << endl << endl;
	cin >> num1 >> num2;
	soma = num1 + num2;
	cout << endl << "O resultado da soma e: " << soma << endl;
	cout << endl << "O resultado da soma e: " << num1+num2 << endl;
	*/

	setlocale(LC_ALL, "Portuguese");

	string nome;
	int matricula;
	long long cpf;
	string data_nascimento;
	char sexo;
	bool bolsista;
	float nota;

	cout << endl << "\tCadastrar aluno\t" << endl << endl << endl;

	cout << "Insira o nome do aluno: ";
	getline(cin, nome);
	limpar_buffer();

	cout << "Insira a matricula do aluno: ";
	cin >> matricula;
	limpar_buffer();

	cout << "Insira o CPF do aluno: ";
	cin >> cpf;
	limpar_buffer();

	cout << "Insira a data de nascimento (xx/xx/xxxx): ";
	cin >> data_nascimento;
	limpar_buffer();

	cout << "Insira o sexo do aluno (m/f): ";
	cin >> sexo;
	limpar_buffer();

	cout << "Insira se o aluno e bolsista (1- sim / 0- nao): ";
	cin >> bolsista;
	limpar_buffer();

	cout << "Insira a nota do aluno: ";
	cin >> nota;
	limpar_buffer();

	cout << endl << endl << endl << endl << "\tImprimir dados cadastrados\t" << endl << endl << endl;
	cout << "Nome: " << nome << endl << "Matricula: " << matricula << endl << "CPF: " << cpf << endl << "Data de nascimento: " << data_nascimento << endl << "Sexo: " << sexo << endl << "Bolsista: " << bolsista << endl << "Nota: " << nota << endl;

	return 0;
}


void limpar_buffer() {
	cin.clear();
	fflush(stdin);
}
