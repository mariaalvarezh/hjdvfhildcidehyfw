#ifndef TITULOPROPIEDAD_H
#define TITULOPROPIEDAD_H
#include "Casilla.h"

class TituloPropiedad {
private:
	Jugador * dueno;
	Propiedad * casillaProp;
public:
	TituloPropiedad();
	Jugador* getDueno();
	void setDueno(Jugador* due);
	Propiedad* getCasillaProp();
	~TituloPropiedad();
};

#endif

