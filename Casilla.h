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
private:
protected:
	Ficha * fich;
public:
//	Casilla(Ficha*fich); siento que no sera necesario este constructor
	Casilla( );
	~Casilla( );
	Ficha * getFicha( );
	void setFicha(Ficha * fich);
	
};

#endif

