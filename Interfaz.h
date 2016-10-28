#ifndef INTERFAZ_H
#define INTERFAZ_H
#include <Windows.h>
#include <iomanip>
#include "Casilla.h"

class Interfaz {
public:
	Interfaz( );
	~Interfaz( );
	void setColor(unsigned short color);
	string mayusc(string& str);
	int recibirOpcion( );
	int seleccionMenu( );
	bool confirmacion(string);
	Jugador * crearJugador( );
};

#endif

