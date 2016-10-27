#ifndef TARJETASORPRESA_H
#define TARJETASORPRESA_H
#include "Casilla.h"

class TarjetaSorpresa {
private:
	string descripcion;
protected:
public:
	TarjetaSorpresa(string descripcion);
	~TarjetaSorpresa( );
	string getDescripcion( );
	string toString( );
	
};

#endif

