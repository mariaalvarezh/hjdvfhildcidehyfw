#include "ColeccionSorpresa.h"

ColeccionSorpresa::ColeccionSorpresa() {
	primero=actual=NULL;
}

ColeccionSorpresa::~ColeccionSorpresa() {
	actual = primero;
	while(actual!=NULL){
		primero = actual;
		actual = actual->getSgtNodo( );
		delete primero;
	}
}

void ColeccionSorpresa::insertaPrimero(TarjetaSorpresa*dato){
	primero = new Nodo(dato,primero);
}
void ColeccionSorpresa::acomodar( ){
	actual = primero;
	Nodo* auxPrimero = primero->getSgtNodo( );
	while(actual->getSgtNodo( ) != NULL )
		actual = actual->getSgtNodo( );       
	actual->setSgtNodo(primero);
	primero->setSgtNodo(NULL);
	primero = actual = auxPrimero; 
}
string ColeccionSorpresa:: toString( ){
	stringstream s;
	actual = primero;
	while(actual!=NULL){
		s<<actual->getDato( )->toString( )<<endl;
		actual = actual->getSgtNodo( );
	}
	return s.str( );
}
