#ifndef CASILLA_H
#define CASILLA_H
#include <iostream>
#include <sstream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <fstream>
#include "Ficha.h"
using namespace std;

class Casilla {
private:
protected:
	Ficha * fich;
public:
	Casilla(Ficha*fich);
	Casilla( );
	~Casilla( );
	Ficha * getFicha( );
	void setFicha(Ficha * fich);
	
};

#endif

