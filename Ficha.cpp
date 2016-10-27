#include "Ficha.h"

Ficha::Ficha(Jugador *jug1,Casilla* cas1, char pCaracter) {
	this->jug=jug1;
	this->cas=cas1;
	this->caracter=pCaracter;
}

Jugador*Ficha:: getJug(){
	return this->jug;
}
Casilla* Ficha:: getCas(){
	return this-> cas;
}
void Ficha:: setCas(Casilla* cas1){
	cas=cas1;
}
void Ficha:: setCaracter(char pCaracter){
	caracter=pCaracter;
}
char Ficha::getCaracter(){
	return caracter;
}

Ficha::~Ficha() {
}

