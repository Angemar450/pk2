#include <iostream>
#include "kalkulator.h"

using namespace std;

int Zespolona::lb_oper = 0;
char* Zespolona::sig = nullptr;

Zespolona::Zespolona(double r, double i) {
	sum_real = r;
	sum_imag = i;
	lb_oper = 0;
}

Zespolona::Zespolona(Zespolona&& arg) : sum_real(arg.sum_real), sum_imag(arg.sum_imag) {
	arg.sum_real = 0;
	arg.sum_imag = 0;
}

Zespolona::~Zespolona() {
	sum_real = 0;
	sum_imag = 0;
}


void Zespolona::dodawanie(double r, double i) {
	sum_real += r;
	sum_imag += i;
	lb_oper++;
}
void Zespolona::odejmowanie(double r, double i) {
	sum_real = sum_real - r;
	sum_imag = sum_imag - i;
	lb_oper++;
}
void Zespolona::mnozenie(double r, double i) {
	double buf_r, buf_i;
	buf_r = sum_real;
	buf_i = sum_imag;
	sum_real = ((buf_r*r) - (buf_i*i));
	sum_imag = ((buf_r*i) + (r*buf_i));
	lb_oper++;
}
void Zespolona::dzielenie(double r, double i) {
	double buf_r, buf_i;
	buf_r = sum_real;
	buf_i = sum_imag;
	sum_real = ((buf_r*r) + (buf_i*i)) / ((r*r) + (i*i));
	sum_imag = ((buf_i*r) - (buf_r*i)) / ((r*r) + (i*i));
	lb_oper++;
}
void Zespolona::wypisz() {
	cout << "Ostateczy wynik operacji:\nCzesc rzeczywista: " << sum_real << endl << "Czesc urojona:  " << sum_imag << endl << "Liczba operacji: " << Zespolona::lb_oper << endl << "Ostatnia operacja: " << *sig << endl;
}
void Zespolona::ustawSig(char &s) {
	sig = &s;
}
