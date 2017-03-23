#include "complex.h"
#include <cstdlib>

int main(){
	Complex liczbaZespolona(10, 11);
	liczbaZespolona.PrzedstawSie();
	Complex liczbaZespolona2(11, 12);
	liczbaZespolona2.PrzedstawSie();

	int x = 10;
	int y = 11;

	int z = x + y;

	Complex wynikDodawania = liczbaZespolona + liczbaZespolona2;

	Complex wynikOdejmowania = liczbaZespolona - liczbaZespolona2;

	std::cout << liczbaZespolona;

	system("pause");
return 0;
}