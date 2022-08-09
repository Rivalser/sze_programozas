/*
*
* Az oszt�ly maga a folyamat,terv aminek  objektuma van.
* Class gy�m�lcs  --> alma
*
* Az oszt�ly egy a felhaszn�l� �ltal meghat�rozott adatt�pus
*
* Konstruktorok:
*		- nem rendelkeznek visszat�r�si �rt�kkel
*		- a konstruktornak ugyan az a neve mint az oszt�lynak
*		- a konstruktornak publikusnak kell lennie, kiv�ve n�h�ny tipikus esetet
*		- amikor saj�t konstruktort k�sz�t�nk, az alap konstruktort elvesz�tj�k
*
* Encapsulation:
*		Az adat �s adatkezel�/m�k�dtet� met�dusok �sszek�t�s�t �rtj�k oszt�lyokon bel�l.
*		Megakad�lyozva ezzel azt, hogy valaki / valami k�zvetlen�l hozz�f�r�ssel rendelkezzen
*
*		Hogyan �rhet�nk el egy kapszul�zott oszt�lyt?
*		Met�dusain kereszt�l. Ezzek "getterek" �s "setterek"
* 
* Abstraction:
*		Komplex dolgok elj�r�s m�g� rejt�se, mely ezeket a dolgokat egyszer�nek t�nteti fel.
*		Pl.: H�v�s ind�t�sa egy gomb nyom�ssal
*		Hogyan? Absztrakt oszt�llyal / Interf�sszel
*		Tualajdons�gok: Van legal�bb egy tiszt�n virtu�lis f�ggv�nye
*/

#include <iostream>
using namespace std;


class AbstractEmployee {  

	virtual void askForPromotion() = 0; // Tiszt�n virtu�lis oszt�ly, csak sz�rmaztathatni akarunk bel�le
							// b�rmely oszt�ly mely meg�r�kli ezt az interf�szt/absztrakt_oszt�lyt k�telezni fogjuk, hogy implement�lja ezt a met�dust.
							// a k�telez�st a virtual-al �rj�k el + "... = 0;"
							//a �r�kl�d�s:   :_n�v_
};

class Employee :AbstractEmployee { //a kib�v�t�s :_n�v_ EZ �nmag�ban nem el�g mert b�r megh�vtuk, az �ltalunk hozott virtual szab�lyt nem tartja be
private:		//alapb�l priv�tra �ll�tja ha nincs semmi m�dos�t�
	string Name;
	string Company;
	int Age;

public:

	void setName(string name) {
		Name = name;
	}

	string getName() {
		return Name;
	}

	void setCompany(string company) {
		Company = company;
	}

	string getCompany() {
		return Company;
	}

	void setAge(int age) {
		if(age >=18)
		Age = age;
	}

	int getAge() {
		return Age;
	}

	void IntroduceYourself() {

		cout << "Name " << Name << endl;
		cout << "Company " << Company << endl;
		cout << "Age " << Age << endl;

	}

	Employee(string name, string company, int age) { //konstruktor
		Name = name;
		Company = company;
		Age = age;
	}

	void askForPromotion() { // virtual void askForPromotion() = 0 fel�l�r�sa

		if (Age >= 25)
			cout << Name << " eloleptetve!" << endl;
		else
		{
			cout << Name << " sajnaljuk nem felelt meg a felteteleknek!" << endl;
		}
	}

};


int main()
{

	Employee employee1 = Employee("Rick", "Wolf_IT", 25);

	Employee employee2 = Employee("Bea", "Google", 24);

	employee1.askForPromotion();
	employee2.askForPromotion();

}
