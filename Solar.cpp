#include "Solar.h"

Solar::Solar(Ficha* fich, TituloPropiedad* tit, string nom, int valHip, int grup, int cobBas, int cob1, int cob2, int cob3, int cob4, int cobHot, int cosCas, int cosHot):Propiedad(fich, tit, nom, valHip, grup) {
	this->cantCasasHotel=0;
	this->cobroBase=cobBas;
	this->cobro1casa=cob1;
	this->cobro2casas=cob2;
	this->cobro3casas=cob3;
	this->cobro4casas=cob4;
	this->cobroHotel=cobHot;
	this->costoXCasa=cosCas;
	this->costoXHotel=cosHot;
}

Solar::~Solar() {
	
}

int Solar :: calculoCobro(){
	int monto=0;
	switch (cantCasasHotel){
	case 0: {
		monto=cobroBase;
		break;
	};
	case 1:{
		monto=cobro1casa;
		break;
	};
	case 2:{
		monto=cobro2casas;
		break;
	};
	case 3:{
		monto=cobro3casas;
		break;
	};
	case 4:{
		monto=cobro4casas;
		break;
	};
	default:{
		monto=cobroHotel;
		break;
	};
	}
	if (monopolio){
		monto*=2;
	}
	return monto;
}
