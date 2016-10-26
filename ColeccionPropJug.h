#ifndef COLECCIONPROPJUG_H
#define COLECCIONPROPJUG_H
#include "NodoPropiedad.h"


class ColeccionPropJug {
private:
	NodoPropiedad* primero;
public:
	ColeccionPropJug() ;
	string toString();
	void Eliminar(TituloPropiedad * ptrTarjeta);
	void Insertar(TituloPropiedad * ptrTarjeta);
	~ColeccionPropJug();
	
};

#endif

