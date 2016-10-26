#include "ColeccionPropJug.h"

ColeccionPropJug::ColeccionPropJug() {
	primero= NULL;
}
void ColeccionPropJug:: Insertar(TituloPropiedad * ptrTarjeta){
	NodoPropiedad* actual= primero;
	actual = primero; 
	if (primero==NULL ||
		primero->getDato()->getGrupo() > ptrTarjeta->getGrupo()) {
			primero=new NodoPropiedad(ptrTarjeta, primero);
		}
	else {
		while (actual->getSigNodo() != NULL &&
			actual->getSigNodo()->getDato()->getGrupo() <=
			ptrTarjeta->getGrupo()) {
				actual=actual->getSigNodo();
			}
		actual->setSigNodo ( new NodoPropiedad( ptrTarjeta, actual->getSigNodo()));
	}
}
}
string ColeccionPropJug :: toString(){
	stringstream s;
	NodoPropiedad* actual= primero;
	while( actual != NULL){
		s<<actual->getDato()<<endl;
		actual=actual->getSigNodo();
	}
	return s.str();
}
void ColeccionPropJug:: Eliminar(TituloPropiedad * ptrTarjeta){
	NodoPropiedad*actual=primero
	while(actual->getSigNodo()->getDato->getCasillaProp()->getNombre()==ptrTarjeta->getCasillaProp()->getNombre()){
		NodoPropiedad*aux=actual->getSigNodo();
		actual->setSigNodo(aux->getSigNodo());
			delete aux;
	}
	else
		actual=actual->getSigNodo();
}
if(*primero->getDato->getCasillaProp()->getNombre()==ptrTarjeta->getCasillaProp()->getNombre()){
	NodoPropiedad*aux=primero;
	primero=primero->getSigNodo();
	delete aux;
	
}
	
}
ColeccionPropJug::~ColeccionPropJug(){
	while (primero != NULL ) {
		NodoPropiedad*actual = primero;
		primero= primero->getSigNodo();
		delete actual;		
	}
}
