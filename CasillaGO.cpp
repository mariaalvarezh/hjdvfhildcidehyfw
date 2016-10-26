#include "CasillaGO.h"

CasillaGO::CasillaGO(char ident,string nom) {
	this->ident = ident;
}
string CasillaGo::getNombre( ){
	return nombre;
}

CasillaGO::~CasillaGO() {
	
}
string CasillaGO::toString( ){
	stringstream s;
	s<<nombre<<endl;
	s<<ident<<endl;
	return s.str( );
}
/*void CasillaGO::bonificacion(Jugador*jug){
	if(fich->getCasilla( ) == "GO"){
		fich->getJugador( )->setDinero(fich->getJugador->getDinero( )+=200);
	}

} */ 
