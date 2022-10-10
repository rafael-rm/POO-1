#include <iostream>
#include <locale>
#include <string>
#include "Aluno.h"
#include "Disciplina.h"
#include "DisciplinasCursadas.h"
#include "Curso.h"

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

	int matricula;	
		do {
			cout << endl << "\tCadastrar aluno\t" << endl << endl << endl;

			cout << "Insira a matricula do aluno: ";
			limpar_buffer();
			cin >> matricula;

			if (matricula < 0)
				cout << "Insira uma matricula valida!" << endl;

		} while (matricula < 0);
		alunos[i].setMatricula(matricula);

		cout << "Insira o nome do aluno: ";
		limpar_buffer();
		string nome;
		getline(cin, nome);
		alunos[i].setNome(nome);

		cout << "Insira o CPF do aluno: ";
		limpar_buffer();
		long long cpf;
		cin >> cpf;
		alunos[i].setCpf(cpf);

		cout << "Insira a data de nascimento (xx/xx/xxxx): ";
		string data_nascimento;
		limpar_buffer();
		cin >> data_nascimento;
		alunos[i].setData_nascimento(data_nascimento);

		cout << "Insira o sexo do aluno (M/F): ";
		limpar_buffer();
		char sexo;
		cin >> sexo;
		alunos[i].setSexo(sexo);

		int bolsista;
		do {
			cout << "Insira se o aluno e bolsista (1- Sim / 2- Nao / 3- Em processo): ";
			limpar_buffer();
			cin >> bolsista;
			if (!(bolsista >= 1 && bolsista <= 3))
				cout << "Insira uma opcao de bolsista valida." << endl;
		} while (!(bolsista >= 1 && bolsista <= 3));
		alunos[i].setBolsista(bolsista);

		cout << "Insira a nota do aluno: ";
		limpar_buffer();
		int nota;
		cin >> nota;
		alunos[i].setNota(nota);
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
