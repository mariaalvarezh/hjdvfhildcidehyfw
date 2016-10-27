#ifndef NODOPROPIEDAD_H
#define NODOPROPIEDAD_H
#include "TarjetaPropiedad.h"
#include "Casilla.h"

class TarjetaPropiedad;
class NodoPropiedad {
private:
	TarjetaPropiedad * dato;	NodoPropiedad *sigNodo;
public:
	NodoPropiedad();
	NodoPropiedad(TarjetaPropiedad*, NodoPropiedad*);
	void setDato(TarjetaPropiedad *m);
	void setSigNodo( NodoPropiedad *sig) ;
	NodoPropiedad * getSigNodo();	TarjetaPropiedad * getDato();	string toString();
	~NodoPropiedad();
};

#endif

