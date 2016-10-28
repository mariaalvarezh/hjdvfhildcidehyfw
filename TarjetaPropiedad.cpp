#include "TarjetaPropiedad.h"

TarjetaPropiedad::TarjetaPropiedad(string nom, int valHip, int prec, int grup) {
	this->nombre=nom;
	this->valorHipotecario=valHip;
	this->precio=prec;
	this->grupo=grup;
	this->monopolio=false;
	this->hipoteca=false;
	this->dueno=NULL;
}

Jugador* TarjetaPropiedad :: getDueno(){
	return this->dueno;
}

void TarjetaPropiedad :: setDueno(Jugador* due){
	this->dueno=due;
}

int TarjetaPropiedad:: getValHip(){
	return this->valorHipotecario;
}
int TarjetaPropiedad:: getPrecio(){
	return this->precio;
}

int TarjetaPropiedad :: getGrupo(){
	return this->grupo;
}

bool TarjetaPropiedad :: getHipoteca(){
	return this->hipoteca;
}

void TarjetaPropiedad :: setHipoteca(bool hipot){
	this->hipoteca=hipot;
}

bool TarjetaPropiedad :: getMonopolio(){
	return this->monopolio;
}

TarjetaPropiedad::~TarjetaPropiedad() {
	
}

string TarjetaPropiedad :: toString(){
	return 0;
}
