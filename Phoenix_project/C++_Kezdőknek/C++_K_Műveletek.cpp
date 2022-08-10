#include <iostream>

using namespace std;

int main()
{

	int a = 5, b, c, osszeg; //Vesszővel elválasztva létrehozunk több változót. Csak 'a' értéke van deklarálva

	cout << "Adj meg egy szamot!" << endl;
	cin >> b;
	cout << "Adj meg egy masik szamot!" << endl;
	cin >> c;

	osszeg = a + b + c;
	cout << "A harom valtozo osszege: " << osszeg << endl;
	// Így is ki lehet még a fentebbit írni: cout <<"A harom valtozo osszege: " << a+b+c;

	cout << "A 'c' haromszorosa: " << c * 3;
	cout << "A 'c' es 'b' kulonbsege: " << c - b;
	cout << "A 'c' es 'a' hanyadosa: " << c / a;

	return 0;
}
