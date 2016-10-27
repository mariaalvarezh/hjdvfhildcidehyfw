#ifndef SERVICIO_H
#define SERVICIO_H
#include "TarjetaPropiedad.h"
#include "Dado.h"

class Servicio:public TarjetaPropiedad {
private:
	Dado* dado1;
	Dado* dado2;
public:
	Servicio(string nom, int valHip, int prec, Dado* dado1, Dado* dado2);
	~Servicio();
	int calculoCobro();
};

#endif

