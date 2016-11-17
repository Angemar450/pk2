#include <iostream>
#include "kalkulator.h"
#include "kwaternion.h"

Kwaternion::Kwaternion() {


}

Kwaternion::~Kwaternion() { 
	cout << "Jestem destruktorem" << endl;
};
Kwaternion::Kwaternion(Zespolona z, double u1, double u2) {
	urojon2 = u1;
	urojon3 = u2;
	sum_real = z.sum_real;
	sum_imag = z.sum_imag;
}
void Kwaternion::dodawanie_kwa(double r, double i, double urojon2, double urojon3) {
	sum_real = sum_real + r;
	sum_imag = sum_imag + i;
}