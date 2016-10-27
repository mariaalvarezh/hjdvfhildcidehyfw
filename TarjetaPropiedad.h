#ifndef TARJETAPROPIEDAD_H
#define TARJETAPROPIEDAD_H
#include "Jugador.h"
#include "Casilla.h"
using namespace std;

class Jugador;
class TarjetaPropiedad {
protected:
	Jugador * dueno;
	string nombre;
	int valorHipotecario;
	int precio;
	int grupo;
	bool monopolio;
	bool hipoteca;
public:
	TarjetaPropiedad(string nom, int valHip, int prec, int grup);
	Jugador* getDueno();
	void setDueno(Jugador* due);
	int getValHip();
	int getPrecio();
	int getGrupo();
	bool getHipoteca();
	void setHipoteca(bool hipot);
	bool getMonopolio();
	~TarjetaPropiedad();
	virtual int calculoCobro()=0;
	virtual string toString();
};

#endif

