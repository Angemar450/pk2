#include <iostream>
#include "kalkulator.h"
using namespace std;

class Kwaternion : public Zespolona {
protected:
	double urojon2;
	double urojon3;
public:
	Kwaternion();
	~Kwaternion();
	Kwaternion(Zespolona z, double u1, double u2);
	
	void dodawanie_kwa(double r, double i, double urojon2, double urojon3);
};