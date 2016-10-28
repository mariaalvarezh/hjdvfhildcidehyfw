#include "CasillaGO.h"

CasillaGO::CasillaGO(Ficha* fich1, Ficha* fich2, char ident,string nom): Casilla(fich1, fich2) {
	this->ident = ident;
	this->nombre=nom;
}
string CasillaGO::getNombre( ){
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
