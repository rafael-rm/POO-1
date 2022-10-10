#ifndef DISCIPLINASCURSADAS_H
#define DISCIPLINASCURSADAS_H

#include "Disciplina.h"

class DisciplinasCursadas
{
	private:
	 	Disciplina *disc;
	 	float nota;
	 	float frequencia;
	 	
	public:
		DisciplinasCursadas();
		~DisciplinasCursadas();
		
		Disciplina *getDisc();
	 	float getNota();
	 	float getFrequencia();
	 	
	 	void setDisc(Disciplina *disc);
	 	void setNota(float nota);
		void setFrequencia(float frequencia);
		
		void imprimir();
		
	protected:
};

#endif
