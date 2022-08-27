#include <iostream>

using namespace std;

/*
Oszt�lyok.

Adott egy s�rk�ny. A s�rk�ny lehet gigantikus, lehet t�rpe. Lehet r�csk�s vagy ny�lk�s b�r� stb.
Egy adott oszt�lyt megh�vva �s adot tulajdons�gait konkretiz�lva l�trehozunk egy objektumot.
Pl a sarkany oszt�lyt megh�vva l�tre hozzuk El'vazdort- Egy Fekete �ri�ss�rk�nyt.

Az oszt�lyok a dolgokat �sszegzik �s egyszer�bb� teszik a dolgok menet�t.
*/

//oszt�lyt jelz� class majd az �ltalunk kre�lt t�pus.(Ami a neve is egyben az oszt�lynak)
class Teglalap { // A nev�t nagykezd�bet�vel �rdemes csin�lni, �gy megk�l�nb�ztethet� a saj�t az alap oszt�lyokt�l
	//defini�l�s
	//Az oszt�lyok dolgai alapvet�en private-ra vannak �ll�tva
	//Vagyis, azok csak az oszt�ly sz�m�ra el�rhet�k, felold�sukhoz public: -ot haszn�lunk
public:
	double a, b;

	double terulet() {
		return a * b;
	}
	double kerulet() {
		return 2*(a + b);
	}
};

int main()
{
	Teglalap teglalapMintaObj;
	cout << "Add meg 'a' erteket.";
	cin >> teglalapMintaObj.a;
	cout << "Add meg 'b' erteket.";
	cin >> teglalapMintaObj.b;
	cout << "a: " << teglalapMintaObj.a << " b: " << teglalapMintaObj.b<<endl;
	cout << "Terulet: " << teglalapMintaObj.terulet() <<"Kerulet: " << teglalapMintaObj.kerulet();
	return 0;
}
