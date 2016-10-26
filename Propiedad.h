#ifndef PROPIEDAD_H
#define PROPIEDAD_H
#include "Casilla.h"
#include "TituloPropiedad.h"

class Propiedad : public Casilla{
protected:
	TituloPropiedad* titulo;
	string nombre;
	int valorHipotecario;
	int precio;
	int grupo;
	bool monopolio;
	bool hipoteca;
public:
	Propiedad(Ficha* fich, TituloPropiedad* tit, string nom, int valHip, int grup);
	virtual int calculoCobro()=0;
	int getValHip();
	int getPrecio();
	int getGrupo();
	bool getHipoteca();
	void setHipoteca(bool hipot);
	bool getMonopolio();
	
	~Propiedad();
};

#endif

