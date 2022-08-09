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
*/

#include <iostream>
using namespace std;


class Employee {
public:
	string Name;
	string Company;
	int Age;

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


};


int main()
{

	Employee employee1 = Employee("Rick","Wolf_IT",20);  // Employee adatt�pus� "employee1"
						// amint saj�t konstrtuktort csin�ltunk "Employee employee1;" - ra no def cons. ex. etc. hib�t kapunk
						// ez�rt megh�vjuk a magunk �ltal def. konstruktort "=Employee()" �s param�terekkel l�tjuk el
		// employee1. �nmag�ban nem m�k�dik mivel az oszt�ly alapj�raton private
		// az adott oszt�lyhoz public: jelz�t kell rakni
	/*employee1.Name = "Rick";
	employee1.Company = "Wolf_IT";
	employee1.Age = 20;*/
	employee1.IntroduceYourself();
	
	Employee employee2("Bea","Google",22);

	employee2.IntroduceYourself();
}
