#include <iostream>
#include <locale>
#include <string>
#include "Aluno.h"

using namespace std;

void limpar_buffer();

int main(int argc, char** argv) {

	setlocale(LC_ALL, "Portuguese");

	int num_alunos;

	cout << "Insira a quantidade de alunos que deseja cadastrar: ";
	limpar_buffer();
	cin >> num_alunos;

	Aluno* alunos = new Aluno[num_alunos];

	for (int i = 0; i < num_alunos; i++) {

		Aluno* aluno = new Aluno();

		do {
			cout << endl << "\tCadastrar aluno\t" << endl << endl << endl;

			cout << "Insira a matricula do aluno: ";
			limpar_buffer();
			cin >> alunos[i].matricula;

			if (alunos[i].matricula < 0)
				cout << "Insira uma matricula valida!" << endl;

		} while (alunos[i].matricula < 0);

		cout << "Insira o nome do aluno: ";
		limpar_buffer();
		cin.ignore();
		getline(cin, alunos[i].nome);

		cout << "Insira o CPF do aluno: ";
		limpar_buffer();
		cin >> alunos[i].cpf;

		cout << "Insira a data de nascimento (xx/xx/xxxx): ";
		limpar_buffer();
		cin >> alunos[i].data_nascimento;

		cout << "Insira o sexo do aluno (M/F): ";
		limpar_buffer();
		cin >> alunos[i].sexo;

		do {
			cout << "Insira se o aluno e bolsista (1- Sim / 2- Nao / 3- Em processo): ";
			limpar_buffer();
			cin >> alunos[i].bolsista;
			if (!(alunos[i].bolsista >= 1 && alunos[i].bolsista <= 3))
				cout << "Insira uma opcao de bolsista valida." << endl;
		} while (!(alunos[i].bolsista >= 1 && alunos[i].bolsista <= 3));

		cout << "Insira a nota do aluno: ";
		limpar_buffer();
		cin >> alunos[i].nota;

		alunos[i].imprimir_informacoes();

		cout << endl << endl << "Pressione qualquer tecla para prosseguir para o proximo cadastro.   (" << i + 1 << "/" << num_alunos << ")" << endl << endl;
		system("pause > nul");
		system("cls");

	}

	system("cls");
	cout << endl << "\tImprimindo todos os alunos cadastrados no sistema.\t" << endl << endl << endl;
	for (int i = 0; i < num_alunos; i++) {
		alunos[i].imprimir_informacoes();
	}

	// Liberar memoria
	delete[] alunos;

	return 0;
}


void limpar_buffer() {
	cin.clear();
	fflush(stdin);
}
