#ifndef CASILLACARCEL_H
#define CASILLACARCEL_H
#include "Casilla.h"

class CasillaCarcel {
private:
	string nombre;
	char identificador;
protected:
public:
	CasillaCarcel(char ident,string nom);
	~CasillaCarcel( );
	string getNombre( );
	float asignaMulta( );
	char getIdentificador( );
	string toString( );
};

#endif

