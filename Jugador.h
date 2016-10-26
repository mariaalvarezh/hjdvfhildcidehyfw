#ifndef JUGADOR_H
#define JUGADOR_H
#include "Dado.h"
#include "ColeccionPropJug.h"

class Jugador {
private:
	ColeccionPropJug* tarjetas;
	string nombre;
	float capital;
public:
	Jugador();
	Jugador(string pNombre, float pCapital);
	void setNombre(string pNombre);
	void setCaracter(char pCaracter);
	void setCapital(float pCapital);
	string getNombre();
	char getCaracter();
	float getCapital();
	int LanzarDado(Dado *m);
	void ComprarSolar(ColeccionPropJug *colecc1,TituloPropiedad  *m1);
	void Pagar();
	void ComprarCasas(TituloPropiedad *m1);
	void Hipotecar(TituloPropiedad* titul, Propiedad*x);
	void VenderPropiedades(TituloPropiedad *m1);
	void Deshipotecar(TituloPropiedad* titul);
	string toString();
	~Jugador();
};

#endif

