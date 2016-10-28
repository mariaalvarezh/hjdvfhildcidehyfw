#include "Casilla.h"

Casilla::Casilla() {
	this->fich1 = NULL;
	this->fich2=NULL;
}

Casilla::Casilla(Ficha* fich1,Ficha* fich2) {
	this->fich1 = fich1;
	this->fich2 = fich2;
}

Casilla::~Casilla() {
}
Ficha * Casilla:: getFicha1( ){
	return this->fich1;
}

Ficha * Casilla:: getFicha2( ){
	return this->fich2;
}

void Casilla:: setFicha1(Ficha * fich){
	this->fich1 = fich;
}

void Casilla:: setFicha2(Ficha * fich){
	this->fich2 = fich;
}
