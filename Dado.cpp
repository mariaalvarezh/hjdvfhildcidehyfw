#include "Dado.h"

Dado::Dado() {
	this-> cara=0;
}
Dado::Dado(int pCara) {
	this-> cara=pCara;
}
void Dado:: setCara(int pCara){
	this-> cara=pCara;
}
int Dado:: getCara(){
	return this-> cara;
}
int Dado:: Lanza(){
	srand(time(NULL));
	int valor=0;
	for (int i = 0; i < 100; ++i) 
		while (valor > 6 || valor == 0)
			valor = rand() % 10; 
	return valor;
}
Dado::~Dado(){
	
}

