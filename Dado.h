#ifndef DADO_H
#define DADO_H

class Dado {
private:
	int cara;
public:
	Dado();
	Dado(int pCara);
	void setCara(int pCara);
	int getCara();
	int Lanza();
	~Dado();
};

#endif

