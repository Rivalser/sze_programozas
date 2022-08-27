#include <iostream>

using namespace std;

/*
A struktúra már a C-ben is megvolt. De az osztályok azok maga a C++ bővítése
A struktúrákba nem lehet metódusokat tenni, a változók csoportosítása megtörtént.
A struktúra alapvetően publikus, míg az osztály private.
Mindegyikkel lehet objektumot létrehozni
*/

struct Doboz {
	double a;
	double b;
	double c;

	double terfogat() {
		return a * b * c;
	}


};

class Teglalap {
	double a;
	double b;

public:
	double terulet() {
		return a * b;
	}
	void setA(int szam) {
		a = szam;
	}
	void setB(int szam) {
		b = szam;
	}
};

int main()
{
	Doboz dobozObj;
	dobozObj.a = 2;
	dobozObj.b = 4;
	dobozObj.c = 8;
	cout << dobozObj.terfogat() << endl;

	Teglalap teglalapObj;
	teglalapObj.setA(2);
	teglalapObj.setB(6);
	cout<<teglalapObj.terulet();

}
