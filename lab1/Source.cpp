#include <iostream>
#include "kalkulator.h"

using namespace std;
// napisac program - kalkulator liczb zespolonych, wyœwietlic ostateczny wynik operacji +,-,/,*
//musi zawierac: 1.konstruktor/destruktor, 2.konstruktor przenosz¹cy, 3.pola statyczne klasy /metody
//4.strumienie i 5.byæ przekazywanym przez referencje (4 z tych (5) trzeba zrobiæ)
// np. D 1 1
//		O 2 1 
//		M 3 0 = wynik  operacji w tym przypadku powinnien wynies -3 0

void pomoc() {
	cout << "Kalkulator liczb zespolonych\n";
	cout << "Liczby wpisuj w kolejnosci: czesc rzeczywista, czesc urojona, operacja\n";
	cout << "Dostepne operacje: dodawanie (+), odejmowanie (-), mnozenie (*), dzielenie (/)\n";
	cout << "Gdy skonczyles obliczenia, nacisnij CTRL + Z\n";
}


int main() {
	double real, imag;
	char sign;
	pomoc();
	cin >> real>> imag>> sign;
	Zespolona z1(real , imag, sign);
	z1.pierwsza(real, imag);
	while (cin >> real >> imag >> sign) {
		if (sign == '+') {
			z1.dodawanie(real, imag);
		}
		else if (sign == '-') {
			z1.odejmowanie(real, imag);
		}
		else if (sign == '*') {
			z1.mnozenie(real, imag);
		}
		else if (sign == '/') {
			z1.dzielenie(real, imag);
		}
		else {
			cout << "Bledne dane\n";
		}
		
	}
	z1.wypisz();
	system("pause");
	return 0;
}