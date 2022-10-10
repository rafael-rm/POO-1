#include "Aluno.h"

Aluno::Aluno()
{
		nome = "Default";
		matricula = 0;
		cpf = 0;
		data_nascimento = "01/01/1900";
		sexo = 'M';
		bolsista = 2;
		nota = 0;
}

Aluno::~Aluno()
{
}

string Aluno::getNome(){
	return nome;
}

int Aluno::getMatricula(){
	return matricula;
}

long long Aluno::getCpf(){
	return cpf;
}

string Aluno::getData_nascimento(){
	return data_nascimento;
}

char Aluno::getSexo(){
	return sexo;
}

int Aluno::getBolsista(){
	return bolsista;
}

float Aluno::getNota(){
	return nota;
}

Curso *getCurso(Curso *curso){
	return curso;
}

void Aluno::setNome(string nome){
	this->nome = nome;
}

void Aluno::setMatricula (int matricula){
	this->matricula = matricula;
}

void Aluno::setCpf(long long cpf){
	this->cpf = cpf;
}

void Aluno::setData_nascimento(string data_nascimento){
	this->data_nascimento = data_nascimento;
}

void Aluno::setSexo(char sexo){
	this->sexo = (sexo == 'M' || sexo == 'm' || sexo == 'F' || sexo == 'f') ? sexo: 'M';
}

void Aluno::setBolsista(int bolsista){
	this->bolsista = (bolsista >= 1 && bolsista <= 3) ? bolsista : 2;
}

void Aluno::setNota(float nota){
	this->nota = (nota >= 0 && nota <= 100) ? nota: 0;
}

void Aluno::SetCurso(Curso *curso){
	this->curso = curso;
}

void Aluno::SetListDisciplinasCursadas(DisciplinasCursadas *listDisciplinaCursada[QUANT_DISC]){
	
}

void Aluno::imprimir_informacoes(){
	
		cout << endl << endl << endl << "\tImprimir dados cadastrados\t" << endl << endl << endl;
		cout << "Nome: " << nome << endl;
		cout << "Matricula: " << matricula << endl;
		cout << "CPF: " << cpf << endl;
		cout << "Data de nascimento: " << data_nascimento << endl;
		cout << "Sexo: " << sexo << endl;
		
		switch(bolsista){
		case 1:
			cout << "Bolsista: Sim" << endl;
			break;
		
		case 2:
			cout << "Bolsista: Nao" << endl;
			break;
		
		case 3:
			cout << "Bolsista: Em processo" << endl;
			break;
			
		default:
			cout << "Bolsista: Erro" << endl;
			break;
		}
		
		cout << "Nota: " << nota << endl;
	
}
