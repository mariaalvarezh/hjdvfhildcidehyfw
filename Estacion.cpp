#include "Estacion.h"

Estacion::Estacion(Ficha* fichTituloPropiedad* tit, string nom, int valHip):Propiedad(fich, tit, nom, valHip, 5) {
	
}

Estacion::~Estacion() {
	
}

int Estacion :: calculoCobro(int cantEst){
	switch (cantEst){
	case 1: return 100;
	case 2: return 205;
	case 3: return 315;
	case 4: return 450;
	default: return 0;
	}
}
