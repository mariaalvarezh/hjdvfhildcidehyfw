#ifndef JUGADOR_H
#define JUGADOR_H
#include "Dado.h"
#include "Casilla.h"
#include "TarjetaPropiedad.h"
#include "ColeccionPropJug.h"
#include "Solar.h"
using namespace std;
class Solar;
class TarjetaPropiedad;
class ColeccionPropJug;
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
	void ComprarSolar(TarjetaPropiedad  *m1);
	void Pagar();
	void ComprarCasasHoteles(Solar *m1);
	void Hipotecar(TarjetaPropiedad* titul);
	void VenderPropiedades(TarjetaPropiedad *m1, ColeccionPropJug *Colecc1, int pos);
	void Deshipotecar(TarjetaPropiedad* titul);
	string toString();
	~Jugador();
};

#endif

