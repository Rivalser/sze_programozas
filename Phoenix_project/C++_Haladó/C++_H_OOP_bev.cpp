#include <iostream>

using namespace std;

/*
Osztályok.

Adott egy sárkány. A sárkány lehet gigantikus, lehet törpe. Lehet rücskös vagy nyálkás bõrû stb.
Egy adott osztályt meghívva és adot tulajdonságait konkretizálva létrehozunk egy objektumot.
Pl a sarkany osztályt meghívva létre hozzuk El'vazdort- Egy Fekete óriássárkányt.

Az osztályok a dolgokat összegzik és egyszerûbbé teszik a dolgok menetét.
*/

//osztályt jelzõ class majd az általunk kreált típus.(Ami a neve is egyben az osztálynak)
class Teglalap { // A nevét nagykezdõbetûvel érdemes csinálni, így megkülönböztethetõ a saját az alap osztályoktól
	//definiálás
	//Az osztályok dolgai alapvetõen private-ra vannak állítva
	//Vagyis, azok csak az osztály számára elérhetõk, feloldásukhoz public: -ot használunk
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
