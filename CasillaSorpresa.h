#ifndef CASILLASORPRESA_H
#define CASILLASORPRESA_H
#include "Casilla.h"
#include "ColeccionSorpresa.h"

class CasillaSorpresa : public Casilla {
private:
	char identificador

public:
	CasillaSorpresa(char identificador);
	~CasillaSorpresa();
	//falta metodo para tomar carta
	
};

#endif

