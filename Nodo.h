#ifndef NODO_H
#define NODO_H
#include "TarjetaSorpresa.h"

class Nodo {
private:
	Nodo * sgtNodo;
	TarjetaSorpresa * dato;

public:
	Nodo(Estudiante*,Nodo*);
	void setDato(TarjetaSorpresa*);
	TarjetaSorpresa * getDato( );
	void setSgtNodo(Nodo*);
	Nodo * getSgtNodo( );
	string toString( )
	~Nodo();
};

#endif

