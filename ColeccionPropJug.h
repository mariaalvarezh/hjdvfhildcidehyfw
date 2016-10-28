#ifndef COLECCIONPROPJUG_H
#define COLECCIONPROPJUG_H
#include "NodoPropiedad.h"
#include "Casilla.h"
using namespace std;

class NodoPropiedad;
class TarjetaPropiedad;
class ColeccionPropJug {
private:
	NodoPropiedad* primero;
public:
	ColeccionPropJug() ;
	string toString();
	void removerPos(int n);
	void Insertar(TarjetaPropiedad * ptrTarjeta);
	~ColeccionPropJug();
	
};

#endif

