#ifndef CASILLAPL_H
#define CASILLAPL_H
#include "Casilla.h"

class CasillaPL : public Casilla {
private:
	string nombre;
protected:
public:
	CasillaPL(string nom);
	~CasillaPL();
	string toString( );
	string getNombre( );
};

#endif

