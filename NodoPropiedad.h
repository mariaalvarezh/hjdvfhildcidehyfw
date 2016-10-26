#ifndef NODOPROPIEDAD_H
#define NODOPROPIEDAD_H
#include "TituloPropiedad.h"

class NodoPropiedad {
private:
	TituloPropiedad * dato;
public:
	NodoPropiedad();
	NodoPropiedad(TituloPropiedad*, NodoPropiedad*);
	void setDato(TituloPropiedad *m);
	void setSigNodo( NodoPropiedad *sig) ;
	NodoPropiedad * getSigNodo();
	~NodoPropiedad();
};

#endif
