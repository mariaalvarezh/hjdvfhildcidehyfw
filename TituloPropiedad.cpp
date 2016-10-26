#include "TituloPropiedad.h"

TituloPropiedad::TituloPropiedad() {
	
}

Jugador* TituloPropiedad :: getDueno(){
	return this->dueno;
}

void TituloPropiedad :: setDueno(Jugador* due){
	this->dueno=due;
}

Propiedad* TituloPropiedad :: getCasillaProp(){
	return this->casillaProp;
}

TituloPropiedad::~TituloPropiedad() {
	
}
