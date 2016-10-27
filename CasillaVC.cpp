#include "CasillaVC.h"

CasillaVC::CasillaVC(string nombre):Casilla() {
	this->nombre = nombre;
}

CasillaVC::~CasillaVC() {
	
}
float CasillaVC::multa( ){
	float multa = 0;
	srand(time(NULL));
	multa = rand( ) % 20 + 300;
	return multa;
}
string CasillaVC:: toString( ){
	stringstream z;
	z<<nombre<<endl;
	return z.str( );
}

