#ifndef COLECCIONSORPRESA_H
#define COLECCIONSORPRESA_H
#include "Nodo.h"

class ColeccionSorpresa {
private:
	Nodo* actual;
	Nodo* primero;

public:
	ColeccionSorpresa( );
	~ColeccionSorpresa( );
	void insertaPrimero(TarjetaSorpresa*dato);
	void acomodar( );
	string toString( );
};

#endif

