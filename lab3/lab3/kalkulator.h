#include <iostream>

using namespace std;

class Zespolona {
protected:
	static int lb_oper; // przechowuje liczb� operacji wykonanych na wszystich liczbach
public:
	static char *sig;	//ostatnia przeprowadzona operacja, # - oznacza �e �adnej operacji nie wykonano
	double sum_real;  //warto�� realis
	double sum_imag; //warto�� imaginaris
	Zespolona(double rea, double ima); //konstruktor
	Zespolona(Zespolona&& arg); //konstruktor przenosz�cy
	~Zespolona(); //destruktor
	void wypisz(); //wypisanie sumy og�lnej
	void dodawanie(double rea, double ima);  //kolejne operacje +, -, *, /
	void odejmowanie(double rea, double ima);
	void mnozenie(double rea, double ima);
	void dzielenie(double rea, double ima);
	void static ustawSig(char &s);

};
