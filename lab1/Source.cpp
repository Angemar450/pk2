#include <iostream>

using namespace std;
// napisac program - kalkulator liczb zespolonych, wyœwietlic ostateczny wynik operacji +,-,/,*
//musi zawierac: konstruktor/destruktor, konstruktor przenosz¹c, pola statyczne klasy /metody
//strumienie i byæ przekazywanym przez referencje (4 z tych (5) trzeba zrobiæ)
// np. D 1 1
//		O 2 1 
//		M 3 0 = wynik  operacji w tym przypadku powinnien wynies -3 0
class zespolona {
public:
	double rzeczywista = 0;
	double urojona = 0;
}liczba, wynik;

void dodawanie() {
	cin >> liczba.rzeczywista;
	cin >> liczba.urojona;
	wynik.rzeczywista += liczba.rzeczywista;
	wynik.urojona += liczba.rzeczywista;

}

int main() {
	void dodawanie();

	/*cin >>liczba.rzeczywista;
	cin >>liczba.urojona;


	cout << "Czesc rzeczywista: " << liczba.rzeczywista << endl << "Czesc urojona : " << liczba.urojona << endl;
	*/
	system("pause");
	return 0;
}