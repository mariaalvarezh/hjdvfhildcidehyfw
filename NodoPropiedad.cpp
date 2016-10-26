#include "NodoPropiedad.h"

NodoPropiedad::NodoPropiedad(){
}
NodoPropiedad::NodoPropiedad(	TituloPropiedad *ptrTarj, NodoPropiedad *sig=NULL){
	this->dato = ptrTarj ;
	this->sigNodoPropiedad = sig; 
}
void NodoPropiedad:: setDato(TituloPropiedad *m){
	this->dato = m; 
}
void NodoPropiedad::setSigNodo( NodoPropiedad *sig){
	this-> sigNodo=sig; 
}
NodoPropiedad * NodoPropiedad:: getSigNodo () {
	return this-> sigNodo;
}
TituloPropiedad *NodoPropiedad:: getDato(){
	return this->dato;
}
string NodoPropiedad::toString(){
	stringstream s;
	s<< getDato()->toString()<<endl;
	return s.str(); 
}

NodoPropiedad::~NodoPropiedad(){
	delete this->dato; 
}
