#ifndef ESTACION_H
#define ESTACION_H
#include "TarjetaPropiedad.h"

class Estacion:public TarjetaPropiedad{
private:
public:
	Estacion(string nom, int valHip, int prec);
	~Estacion();
	int calculoCobro(int cantEst);
};

#endif

