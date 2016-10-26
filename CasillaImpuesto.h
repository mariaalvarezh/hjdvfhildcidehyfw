#ifndef CASILLAIMPUESTO_H
#define CASILLAIMPUESTO_H
#include "Casilla.h"

class CasillaImpuesto : public Casilla {
private:
	string nombre;
	float monto;
protected:
public:
	CasillaImpuesto(float monto);
	~CasillaImpuesto( );
	string getNombre( );
	float getMonto( );
	string toString( );
	void cobraImp( );
};

#endif

