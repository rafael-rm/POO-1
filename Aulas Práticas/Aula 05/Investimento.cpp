#include "Investimento.h"

Investimento::Investimento()
{
}

Investimento::~Investimento()
{
}

TiposInvestimentos Investimento::getTipo_investimento(){
	return tipo_investimento;
}

float Investimento::getSaldo_investimento(){
	return saldo_investimento;
}

void Investimento::setTipo_investimento(TiposInvestimentos tipo_investimento){
	this->tipo_investimento = tipo_investimento;
}

void Investimento::setSaldo_investimento(float saldo_investimento){
	this->saldo_investimento = saldo_investimento;
}
