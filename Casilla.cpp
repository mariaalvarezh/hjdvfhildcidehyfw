#include "Casilla.h"

Casilla::Casilla() {
	this->fich = NULL;
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

