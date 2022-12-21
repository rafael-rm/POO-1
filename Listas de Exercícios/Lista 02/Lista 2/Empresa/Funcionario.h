#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <iostream>

using namespace std;

class Funcionario
{
	protected:
		string nomeFuncionario;	
		string dataAdmissao;
		string departamento;
		float salario;
	
		
		
	public:
		Funcionario();
		Funcionario(string nomeFuncionario,string dataAdmissao,string departamento);
		~Funcionario();
		
		
		string getNomeFuncionario();		
		string getDataAdmissao();
		string getDepartamento();
		float getSalario();	
		
		
		void setNomeFuncionario(string nomeFuncionario);	
		void setDataAdmissao(string dataAdmissao);
		void setDepartamento(string departamento);
		void setSalario(float salario);	
		virtual void imprimeFuncionario() ;
		
	protected:
};

#endif
