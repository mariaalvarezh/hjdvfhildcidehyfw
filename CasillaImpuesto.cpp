#include "CasillaImpuesto.h"

CasillaImpuesto::CasillaImpuesto(float monto) {
	this->monto = monto;
}

CasillaImpuesto::~CasillaImpuesto() {
	
}
float CasillaImpuesto:: getMonto( ){
	return this->monto;
}
/*void CasillaImpuesto::cobraImp( ){
	float aux = fich->getJugador( )->getDinero( ):
		fich->getJugador( )->setDinero(aux-=monto);
} */ 
string CasillaImpuesto::getNombre( ){
	return nombre;
}
string CasillaImpuesto::toString( ){
	stringstream s;
	s<<nombre<<endl;
	s<<monto<<endl;
	return s.str( );
}


