#include "ColeccionPropJug.h"

ColeccionPropJug::ColeccionPropJug() {
	primero= NULL;
}
void ColeccionPropJug:: Insertar(TarjetaPropiedad * ptrTarjeta){
	NodoPropiedad* actual= primero;
	actual = primero; 
	if (primero==NULL || primero->getDato()->getGrupo() > ptrTarjeta->getGrupo()) {
			primero=new NodoPropiedad(ptrTarjeta, primero);
		}
	else {
		while (actual->getSigNodo() != NULL && actual->getSigNodo()->getDato()->getGrupo() <= ptrTarjeta->getGrupo()) {
				actual=actual->getSigNodo();
			}
		actual->setSigNodo ( new NodoPropiedad( ptrTarjeta, actual->getSigNodo()));
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

ColeccionPropJug::~ColeccionPropJug(){
	while (primero != NULL ) {
		NodoPropiedad*actual = primero;
		primero= primero->getSigNodo();
		delete actual;		
	}
}

void ColeccionPropJug:: removerPos(int pos){
	int cont=1;
	NodoPropiedad*actual=primero;
	if (primero !=NULL){
		if (pos ==1){
			primero=primero->getSigNodo();
			delete actual;
		}
		else{
			while ((actual->getSigNodo()!=NULL) && (cont<pos-1)){
				actual=actual->getSigNodo();
				cont++;
			}
			if (actual->getSigNodo()!=NULL){
				NodoPropiedad* aux=actual->getSigNodo();
				actual->setSigNodo(aux->getSigNodo());
				delete aux;
			}
		}
	}
}
