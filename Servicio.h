#ifndef SERVICIO_H
#define SERVICIO_H
#include "Propiedad.h"
#include "Dado.h"

class Servicio:public Propiedad {
private:
	Dado* dado1;
	Dado* dado2;
public:
	Servicio(Ficha* fich, TituloPropiedad* tit, string nom, int valHip, Dado* dado1, Dado* dado2);
	~Servicio();
	int calculoCobro();
};

#endif

