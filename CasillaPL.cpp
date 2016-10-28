#include "CasillaPL.h"

CasillaPL::CasillaPL(string nom):Casilla() {
	this->nombre = nom;
}

CasillaPL::~CasillaPL() {
	
}
string CasillaPL::getNombre( ){
	return nombre;
}
string CasillaPL::toString( ){
	stringstream s;
	s<<nombre<<endl;
	return s.str( );
}


