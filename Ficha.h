#ifndef FICHA_H
#define FICHA_H
#include "Jugador.h"
#include "Casilla.h"

class Ficha {
private:
	Jugador * jug;
	Casilla * cas;  
	char caracter;
public:
	Ficha(Jugador*jug1 ,Casilla* cas1, char pCaracter);
	Jugador * getJug();
	Casilla* getCas;
	void setCas(Casilla* cas1);
	void setCaracter(char pCaracter);
	char getCaracter();
	~Ficha();
};

#endif

