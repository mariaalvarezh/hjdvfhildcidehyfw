#include "Propiedad.h"

Propiedad::Propiedad(Ficha* fich, TituloPropiedad* tit, string nom, int valHip, int grup):Casilla(fich) {
	this->titulo=tit;
	this->nombre=nom;
	this->valorHipotecario=valHip;
	this->grupo=grup;
	this->monopolio=false;
	this->hipoteca=false;
}

int Propiedad:: getValHip(){
	return this->valorHipotecario;
}
int Propiedad:: getPrecio(){
	return this->precio;
}

int Propiedad :: getGrupo(){
	return this->grupo;
}

bool Propiedad :: getHipoteca(){
	return this->hipoteca;
}

void Propiedad :: setHipoteca(bool hipot){
	this->hipoteca=hipot;
}

bool Propiedad :: getMonopolio(){
	return this->monopolio;
}

Propiedad::~Propiedad() {
	
}
