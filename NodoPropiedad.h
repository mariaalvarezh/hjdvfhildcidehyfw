#ifndef NODOPROPIEDAD_H
#define NODOPROPIEDAD_H
#include "TituloPropiedad.h"

class NodoPropiedad {
private:
	TituloPropiedad * dato;	NodoPropiedad *sigNodo;
public:
	NodoPropiedad();
	NodoPropiedad(TituloPropiedad*, NodoPropiedad*);
	void setDato(TituloPropiedad *m);
	void setSigNodo( NodoPropiedad *sig) ;
	NodoPropiedad * getSigNodo();	TituloPropiedad * getDato();	string toString();
	~NodoPropiedad();
};

#endif

