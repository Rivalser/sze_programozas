#include <iostream>

using namespace std;

class Teglalap {
private: //Alapvetően az
	double a;
	double b;
public:
	void setSizeA(double a) { //Olvashatóság szempontjából gyakran érdemes a beérkező adatot is
		this->a = a;				  //úgy elnevezni, ahogy a változtatandó értéket hívjuk
	}						  //ez szintaktikai hibához vezet (vagyis melyik 'a' melyikhez tartozik) ezért a this-el eztt tisztázzuk.
	void setSizeB(double x) {
		b = x;
	}
	// A const correctness
	// Ha egy adott függvény nem csinál módosítást a kapott értékeken
	//csak végrehajt valamit akkor azt const jelzővel látjuk el, az átláthatóság végett
	double getSizeA() const{
		return a;
	}

	double getSizeB() const{
		return b;
	}

	double terulet() const{
		return a * b;
	}
protected:
	//Hasonló mint a private,de ha ezt az osztályt örököltetem egy másiknak
	//Akkor az képes lesz ezeket az adatokat megkapni
};

int main()
{
	double x, y;
	Teglalap teglalapObj;
	cout << "Az 'a' merete: ";
	cin >> x;
	cout << "Az 'b' merete: ";
	cin >> y;
	teglalapObj.setSizeA(x);
	teglalapObj.setSizeB(y);
	cout << "Terulet: " << teglalapObj.terulet() << endl;

}