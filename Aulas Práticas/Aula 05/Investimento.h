#ifndef INVESTIMENTO_H
#define INVESTIMENTO_H

enum TiposInvestimentos{
	CDB = 1,
	TESOURO = 2,
	ACAO = 3,
	IMOBILIARIO = 4
};

class Investimento
{
	protected:
		TiposInvestimentos tipo_investimento;
		float saldo_investimento;
		
	public:
		TiposInvestimentos getTipo_investimento();
		void setTipo_investimento(TiposInvestimentos tipo_investimento);
		
		float getSaldo_investimento();
		void setSaldo_investimento(float saldo_investimento);
		
		Investimento();
		~Investimento();
};

#endif
