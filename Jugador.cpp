#include "Jugador.h"
Jugador::Jugador(string pNombre, float pCapital) {
	this->nombre=pNombre;
	this-> capital=pCapital;
}

void Jugador:: setNombre(string pNombre){
	this->nombre=pNombre;
}
void Jugador::setCapital(float pCapital){
	this-> capital=pCapital;
}
string Jugador::getNombre(){
	return this->nombre;
}

float Jugador:: getCapital(){
	return this-> capital;
}
int Jugador::LanzarDado(Dado *m) {
	return m->Lanza();
}
void Jugador::ComprarSolar(TarjetaPropiedad *m1){
	int costo= m1->getPrecio();
	tarjetas->Insertar(m1);
	capital=capital-costo;
}
void Jugador:: ComprarCasasHoteles(Solar *m1){
	float costo;
	if(m1->cantCasasHotel()==4){
		costo=m1->getCostoxHotel();
		m1->setCantCasasHotel(cantCasasHotel++);
		capital= capital-costo1;	
	}
	else
	costo=m1->getCostoXCasa();
	m1->setCantCasasHotel(cantCasasHotel++);
	capital= capital-costo;	
}
void Jugador:: VenderPropiedades(TarjetaPropiedad *m1, ColeccionPropJug *Colecc1, int pos){
	float costo=(m1->getPrecio())-(m1->getPrecio()*0.25);
	capital= capital+costo;
	Colecc1->removerPos(pos);
}
void Jugador::Hipotecar(TarjetaPropiedad* titul){
	float hipoteca= titul->getValHip();
	capital= capital+hipoteca;
	titul->setHipoteca(true);
}
void Jugador::Deshipotecar(TarjetaPropiedad* titul){
	float total=(titul->getValHip())+(titul->getValHip()*0.20);
	capital=capital-total;
	titul->setHipoteca(false);
}
string Jugador::toString(){
	stringstream s;
	s<<"Nombre: "<<nombre;
	s<<"Capital: "<<capital;
	return s.str();
}
Jugador::~Jugador() {
	
}

