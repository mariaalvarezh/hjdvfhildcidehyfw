#include "NodoPropiedad.h"

NodoPropiedad::NodoPropiedad(){
}
NodoPropiedad::NodoPropiedad(	TarjetaPropiedad *ptrTarj, NodoPropiedad *sig=NULL){
	this->dato = ptrTarj ;
	this->sigNodo = sig; 
}
void NodoPropiedad:: setDato(TarjetaPropiedad *m){
	this->dato = m; 
}
void NodoPropiedad::setSigNodo( NodoPropiedad *sig){
	this-> sigNodo=sig; 
}
NodoPropiedad * NodoPropiedad:: getSigNodo () {
	return this-> sigNodo;
}
TarjetaPropiedad *NodoPropiedad:: getDato(){
	return this->dato;
}
string NodoPropiedad::toString(){
	stringstream s;
	s<< getDato()->toString()<<endl;
	return s.str(); 
}

NodoPropiedad::~NodoPropiedad(){
	//los datos se borraran al destruir la coleccion de tableros
}
