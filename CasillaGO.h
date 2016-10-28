#ifndef CASILLAGO_H
#define CASILLAGO_H
#include "Casilla.h"

class CasillaGO : public Casilla {
private:
	string nombre;
	char ident;
public:
	CasillaGO(Ficha* fich1, Ficha* fich2, char ident,string nom);
	~CasillaGO();
	string getNombre( );
	string toString( );
	//void bonificacion( );
};

#endif

