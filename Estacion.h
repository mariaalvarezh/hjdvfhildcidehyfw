#ifndef ESTACION_H
#define ESTACION_H
#include "Propiedad.h"

class Estacion:public Propiedad{
private:
public:
	Estacion(Ficha* fich, TituloPropiedad* tit, string nom, int valHip);
	~Estacion();
	int calculoCobro(int cantEst);
};

#endif

