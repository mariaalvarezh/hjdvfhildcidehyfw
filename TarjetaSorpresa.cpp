#include "TarjetaSorpresa.h"

TarjetaSorpresa::TarjetaSorpresa(string descripcion) {
	this->descripcion = descripcion;
}

TarjetaSorpresa::~TarjetaSorpresa() {
	
}
string TarjetaSorpresa::getDescripcion( ){
	return descripcion;
}
string TarjetaSorpresa::toString( ){
	stringstream s;
	s<<descripcion<<endl;
	return s.str( );
}


