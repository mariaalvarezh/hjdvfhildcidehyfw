#ifndef TARJETASORPRESA_H
#define TARJETASORPRESA_H


class TarjetaSorpresa {
private:
	string descripcion;
protected:
public:
	TarjetaSorpresa(string descripcion);
	~TarjetaSorpresa( );
	string getDescripcion( );
	string toString( );
	
};

#endif

