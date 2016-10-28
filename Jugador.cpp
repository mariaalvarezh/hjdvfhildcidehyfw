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
void Jugador:: ComprarCasas(TarjetaPropiedad *m1){
	int costo=m1->getPrecio();
}
void Jugador:: VenderPropiedades(TarjetaPropiedad *m1){
	float costo=(m1->getPrecio())-(m1->getPrecio()*0.25);
	capital= capital+costo;
}
void Jugador::Hipotecar(TarjetaPropiedad* titul){
	float total= titul->getValHip();
	capital= capital+total;
}
void Jugador::Deshipotecar(TarjetaPropiedad* titul){
	float total=(titul->getValHip())+(titul->getValHip()*0.20);
	capital=capital-total;
}
string Jugador::toString(){
	stringstream s;
	s<<"Nombre: "<<nombre;
	s<<"Capital: "<<capital;
	return s.str();
}
Jugador::~Jugador() {
	
}

