#include "Servicio.h"

Servicio::Servicio(string nom, int valHip, int prec, Dado* dado1, Dado* dado2):TarjetaPropiedad(nom, valHip, prec, 6) {
	this->dado1=dado1;
	this->dado2=dado2;
}

Servicio::~Servicio() {
	
}

int Servicio :: calculoCobro(){
	int sumaDados=this->dado1->getCara()+this->dado2->getCara();
	if (!monopolio){
		return sumaDados*10;
	}
	else{
		return sumaDados*20;
	}
}
