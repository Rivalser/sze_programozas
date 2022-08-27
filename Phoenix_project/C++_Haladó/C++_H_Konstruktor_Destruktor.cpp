#include <iostream>

using namespace std;

class Vonal {
public:
	//Konstruktor. Speci�lis f�ggv�ny. Neve megegyezik az oszt�ly��val. Publikus.Nincs visszat�r�si �rt�ke.
	//Alapvet�en k�sz�l egy be�p�tett konstruktor. Amikor egy saj�tot csin�lunk, akkor ez �s nem a be�p�tett fut le
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
	//Mi�rt "j�" a destruktor? Mivel a mem�riasziv�rg�st el�zi meg azzal, hogy a nem haszn�lt elemet t�rli
	~Vonal(){ //'~' A destruktor jelz�se. Mem�riafelszabad�t�shoz. A dinamikus elemeket felszabad�tsa
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
	Vonal v(33); // A ford�t� a megadott param�ter v�gett k�pes eld�nteni, hogy melyik f�ggv�nyt haszn�lja. Csak mint a substr-n�l. Itt j�n l�tre maga a konstruktor
	cout << v.getHossz() << endl;
	return 0; // A return 0 -n�l j�n l�tre a destruktor jelen esetben, vagy akkor amikor egy k�zrefogott ter�let v�g�re - pl. f�ggv�ny - �r�nk.
}
