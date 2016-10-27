#ifndef PROPIEDAD_H
#define PROPIEDAD_H
#include "Casilla.h"
#include "TarjetaPropiedad.h"

class Propiedad : public Casilla{
protected:
	TarjetaPropiedad* tarjeta;
public:
	Propiedad(TarjetaPropiedad* tarj);
	
	~Propiedad();
};

#endif

