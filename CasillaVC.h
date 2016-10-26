#ifndef CASILLAVC_H
#define CASILLAVC_H
#include "Casilla.h"

class CasillaVC: public Casilla {
private:
	string nombre
protected:
public:
	CasillaVC(string nombre);
	string getNombre( );
	float multa( );
	~CasillaVC();
};

#endif

