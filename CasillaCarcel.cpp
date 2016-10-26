#include "CasillaCarcel.h"

CasillaCarcel::CasillaCarcel(char ident,string nom) {
	this->identificador = ident;
	this->nombre = nom;
}

CasillaCarcel::~CasillaCarcel() {
	
}
char CasillaCarcel::getIdentificador( ){
	return identificador;
}
string CasillaCarcel::getNombre( ){
	return nombre;
}
float CasillaCarcel::asignaMulta( ){
	float multa=0;
	srand(time(NULL))
		multa = rand( )%20+300;
	return multa;
}
string CasillaCarcel::toString( ){
	stringstream r;
	r<<nombre<<endl;
	r<<identificador<<endl;
	return r.str( );
}

