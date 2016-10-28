#include "Interfaz.h"

Interfaz::Interfaz() {
	
}

Interfaz::~Interfaz() {
	
}
void Interfaz :: setColor(unsigned short color) {
	HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hcon, color);
}

string Interfaz :: mayusc(string& str){ //metodo que transforma las minusculas a mayusculas de un string (obtenido de cplusplus.com con ligeras modificaciones)
	string convertido;
	int tam=str.size();
	for(short i = 0; i < tam; ++i){
		convertido += toupper(str[i]);
	}
	return convertido;
}
int Interfaz :: seleccionMenu(){
	cout<<setw(15)<<" "<<"Inserte el n"<<char(163)<<"mero de la acci"<<char(162)<<"n que desea realizar: ";
	return recibirOpcion();
}
bool Interfaz::confirmacion(string pregunta){
	string ooc;
	do{
		cout<<pregunta;
		cin>>ooc;
		ooc=mayusc(ooc);
		if(ooc == "SI"){
			return true;
		}
		if(ooc == "NO"){
			return false;
		}
		cout<<"La opcion no es valida"<<endl;
	} while(ooc != "SI" && ooc != "NO");
	return false; //este return solo está puesto para evitar el warning aunque igualmente nunca llegará a suceder
}
int Interfaz :: recibirOpcion(){
	int opcion;
	cin>>opcion;
	return opcion;
}
Jugador * Interfaz::crearJugador( ){
	
}
