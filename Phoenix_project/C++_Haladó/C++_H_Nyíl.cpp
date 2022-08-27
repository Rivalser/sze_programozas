#include <iostream>

using namespace std;

/*
A nyíl operátor.
A pointerekhez köthető.
Amikor az adott adatot pointeren keresztül érem el.

Ahogyan objektumot csinálok egy adott stuktúrából vagy osztályból, az memórialefoglalással történik.
Egy pointerrel hivatkozva rá -> at használunk, hogy az alattalevő értéket elérjük.
*/

class Vonal {
public:
	//Konstruktor. Speciális függvény. Neve megegyezik az osztályáéval. Publikus.Nincs visszatérési értéke.
	//Alapvetően készül egy beépített konstruktor. Amikor egy sajátot csinálunk, akkor ez és nem a beépített fut le
	Vonal() {
		cout << "A Vonal osztaly konstruktora." << endl;
		hossz = new double;
	}

	Vonal(double hossz) {
		this->hossz = new double;
		*this->hossz = hossz;
		cout << "A Vonal osztaly masik konstruktora." << endl;
	}

	//Destruktor
	//Miért "jó" a destruktor? Mivel a memóriaszivárgást előzi meg azzal, hogy a nem használt elemet törli
	~Vonal() { //'~' A destruktor jelzése. Memóriafelszabadításhoz. A dinamikus elemeket felszabadítsa
		delete hossz;
		cout << "A Vonal osztaly destruktora." << endl;

	}
	int getHossz() const {
		return *hossz;
	}

private:
	double* hossz;
};

int main()
{
	//Vonal v(33);  A fordító a megadott paraméter végett képes eldönteni, hogy melyik függvényt használja. Csak mint a substr-nél. Itt jön létre maga a konstruktor
	Vonal* v = new Vonal(33);
	// cout << v.getHossz() << endl; mivel 'v' most már egy mutató, ezért a '.'-os hivatkozás már hibás
	cout << v->getHossz() << endl; // bumm már is jobb a rajz magyarázza
	delete v; //Felszabadítás után a konstruktor automatikusan meghívódik
	return 0; // A return 0 -nál jön létre a destruktor jelen esetben, vagy akkor amikor egy közrefogott terület végére - pl. függvény - érünk.
}
