#include <iostream>
#include <string>
/*
Összetett sok függvény rendszerezésére és azok gyakorlatosítására
*/

using namespace std;

class minta { //Amikor egy osztályt létrehozunk, azzal egy új típusú változót is készítünk.
//private:  
	string name;
	//Az osztályok alapvetõen private-ra vannak állítva így az elején az nem kell kiírni, de ezt lehet módosítani:
public: //A private annyit jelent, hogy az adott függvényen,osztályon, stb. -kívül nem elérhetõ az.
		//A public által elérhetõvé válik.
		//Ha valami protected-el van ellátva, az annyit jelent, hogy az "alsóbb" osztályok  is elérhetik azt.
	void szoveg() {
		cout << "Ez a minta class public void fuggvenye!\nMinta nev: "<<getName() << endl;
	}


	//Alapvetõen vannak a setterek és getterek.
	//Ezekkel beállítunk bizonyos adatokat vagy lekérjük azokat.
	void setName(string nev) {
		name = nev;
	}

	string getName() {
		return name;
	}



//private:
//	string name;

}; //pontosvesszõ kell a végére

int main()
{
	string nev;
	cout << "Adj meg egy nevet!" << endl;
	getline(cin, nev);
	minta mintaObjektum; //Ezzel létrehoztunk egy objektumot.
	mintaObjektum.setName(nev);
	mintaObjektum.szoveg();
	return 0;
}
