#ifndef CASILLA_H
#define CASILLA_H
#include <iostream>
#include <sstream>
#include <string>
#include <ctime>
#include <cstdlib>
#include "Ficha.h"
using namespace std;

class Ficha;
class Casilla {
protected:
	Ficha * fich1;
	Ficha* fich2;
public:
	Casilla(Ficha*fich, Ficha* fich2); //siento que no sera necesario este constructor o quizá para la casillaGO
	Casilla( );
	~Casilla( );
	Ficha * getFicha1( );
	Ficha * getFicha2( );
	void setFicha1(Ficha * fich);
	void setFicha2(Ficha * fich);
	
};

#endif

