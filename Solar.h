#ifndef SOLAR_H
#define SOLAR_H
#include "Casilla.h"
#include "TarjetaPropiedad.h"


class Solar:public TarjetaPropiedad {
private:
	int cantCasasHotel;
	int cobroBase;
	int cobro1casa;
	int cobro2casas;
	int cobro3casas;
	int cobro4casas;
	int cobroHotel;
	int costoXCasa;
	int costoXHotel;
public:
	Solar(string nom, int valHip, int prec, int grup, int cobBas, int cob1, int cob2, int cob3, int cob4, int cobHot, int cosCas, int cosHot);
	~Solar();
	int calculoCobro();
};

#endif

