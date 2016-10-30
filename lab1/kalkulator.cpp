#include <iostream>
#include "kalkulator.h"

using namespace std;

Zespolona::Zespolona(double &r, double &i, char &d) {
	rea = r;
	ima = i;
	sig = d;
}
Zespolona::~Zespolona() {}

void Zespolona::dodawanie(double &r, double &i) {
	sum_real += r;
	sum_imag += i;
}
void Zespolona::odejmowanie(double &r, double &i) {
	sum_real = sum_real - r;
	sum_imag = sum_imag - i;
}
void Zespolona::mnozenie(double &r, double &i) {
	static double buf_i, buf_r;
	buf_r = sum_real;
	buf_i = sum_imag;
	sum_real = ((buf_r*r) - (buf_i*i));
	sum_imag = ((buf_r*i) + (r*buf_i));
}
void Zespolona::dzielenie(double &r, double&i) {
	static double buf_r, buf_i;
	buf_r = sum_real;
	buf_i = sum_imag;
	sum_real = ((buf_r*r) + (buf_i*i))/((r*r)+(i*i));
	sum_imag = ((buf_i*r) - (buf_r*i)) / ((r*r) + (i*i));
}
void Zespolona::wypisz() {
	cout <<"Ostateczy wynik operacji:\nCzesc rzeczywista: "<< sum_real <<endl<< "Czesc urojona:  " << sum_imag << endl;
}

void Zespolona::pierwsza(double &r, double &i) {
	sum_real = r;
	sum_imag = i;
}