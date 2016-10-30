#include <iostream>

using namespace std;

class Zespolona {
	double sum_real;  //suma ogólna
	double sum_imag;
public:
	double rea;  //zmienne przechowujace kolejne liczby
	double ima;
	char sig; //jaka operacje przeprowadzamy

	Zespolona(double &rea, double &ima, char &sig); //konstruktor
	~Zespolona(); //destruktor
	void pierwsza(double &pierw_re, double &pierw_im); // zapisanie sumy po podaniu pierwszej liczby
	void wypisz(); //wypisanie sumy ogólnej
	void dodawanie(double &rea, double &ima);  //kolejne operacje +, -, *, /
	void odejmowanie(double &rea, double &ima);
	void mnozenie(double &rea, double &ima);
	void dzielenie(double &rea, double &ima);
	
};