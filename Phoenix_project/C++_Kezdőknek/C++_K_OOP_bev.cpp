#include <iostream>
#include <string>
/*
�sszetett sok f�ggv�ny rendszerez�s�re �s azok gyakorlatos�t�s�ra
*/

using namespace std;

class minta { //Amikor egy oszt�lyt l�trehozunk, azzal egy �j t�pus� v�ltoz�t is k�sz�t�nk.
//private:  
	string name;
	//Az oszt�lyok alapvet�en private-ra vannak �ll�tva �gy az elej�n az nem kell ki�rni, de ezt lehet m�dos�tani:
public: //A private annyit jelent, hogy az adott f�ggv�nyen,oszt�lyon, stb. -k�v�l nem el�rhet� az.
		//A public �ltal el�rhet�v� v�lik.
		//Ha valami protected-el van ell�tva, az annyit jelent, hogy az "als�bb" oszt�lyok  is el�rhetik azt.
	void szoveg() {
		cout << "Ez a minta class public void fuggvenye!\nMinta nev: "<<getName() << endl;
	}


	//Alapvet�en vannak a setterek �s getterek.
	//Ezekkel be�ll�tunk bizonyos adatokat vagy lek�rj�k azokat.
	void setName(string nev) {
		name = nev;
	}

	string getName() {
		return name;
	}



//private:
//	string name;

}; //pontosvessz� kell a v�g�re

int main()
{
	string nev;
	cout << "Adj meg egy nevet!" << endl;
	getline(cin, nev);
	minta mintaObjektum; //Ezzel l�trehoztunk egy objektumot.
	mintaObjektum.setName(nev);
	mintaObjektum.szoveg();
	return 0;
}
