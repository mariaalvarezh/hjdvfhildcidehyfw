#ifndef DADO_H
#define DADO_H
#include <ctime>
#include <cstdlib>
#include <iostream>
#include <sstream>
#include <string>
using namespace std;
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

