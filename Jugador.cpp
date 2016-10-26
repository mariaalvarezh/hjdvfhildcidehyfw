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
void Jugador::ComprarSolar(Coleccion  *colecc1,TituloPropiedad *m1){
	int costo= m1->getCasillaProp()->getPrecio();
	colecc1->Insertar(m1);
	capital=capital-costo;
}
void Jugador:: ComprarCasas(TituloPropiedad *m1){
	int costo=(m1->getCasillaProp());
}
void Jugador:: VenderPropiedades(TituloPropiedad *m1){
	float costo=(m1->getCasillaProp()->getPrecio())-(m1->getCasillaProp()->getPrecio()*0.25);
	capital= capital+costo;
}
void Jugador::Hipotecar(TituloPropiedad* titul, Propiedad*x){
	float total= titul->getCasillaProp()->getValHip();
	capital= capital+total;
}
void Jugador::Deshipotecar(TituloPropiedad* titul, Propiedad*x){
	float total=(titul->getCasillaProp()->getValHip())+(titul->getCasillaProp()->getValHip()*0.20);
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

