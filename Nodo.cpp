#include "Nodo.h"

Nodo::Nodo(TarjetaSorpresa*ptrDato,Nodo*sig=NULL) {
	this->dato = ptrDato;
	this->sgtNodo = sig;
	
}

Nodo::~Nodo() {
	delete dato;
}
void Nodo::setDato(TarjetaSorpresa*dato){
	this->dato = dato;
}
void Nodo::setSgtNodo(Nodo*sig){
	this->sgtNodo = sig;
}
TarjetaSorpresa* Nodo:: getDato( ){
	return dato;
}
Nodo* Nodo::getSgtNodo( ){
	return sgtNodo;
}
string Nodo::toString( ){
	stringstream s;
	s<<dato->toString( )<<endl;
	return s.str( );
}
