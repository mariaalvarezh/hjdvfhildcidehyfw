#include "CasillaPL.h"

CasillaPL::CasillaPL(string nom) {
	this->nombre = nom;
}

CasillaPL::~CasillaPL() {
	
}
string CasillaPL::getNombre( ){
	return nombre
}
string CasillaPl::toString( ){
	stringstream s;
	s<<nombre<<endl;
}


