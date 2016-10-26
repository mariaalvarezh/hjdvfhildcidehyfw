#include "Servicio.h"

Servicio::Servicio(Ficha* fich, TituloPropiedad* tit, string nom, int valHip, Dado* dado1, Dado* dado2):Propiedad(fich, tit, nom, valHip, 6) {
	this->dado1=dado1;
	this->dado2=dado2;
}

Servicio::~Servicio() {
	
}

int Servicio :: calculoCobro(){
	int sumaDados=this->dado1->getCara()+this->dado2->getCara()
	if (!monopolio){
		return sumaDados*10;
	}
	else{
		return sumaDados*20;
	}
}
