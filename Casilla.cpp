#include "Casilla.h"

Casilla::Casilla(Ficha*fich) {
	this->fich = fich;
}
Casilla::~Casilla() {
	delete fich;
}
Ficha * Casilla:: getFicha( ){
	return fich;
}
void Casilla:: setFicha(Ficha * fich){
	this->fich = fich;
}

