/*
*
* Az osztály maga a folyamat,terv aminek  objektuma van.
* Class gyümölcs  --> alma
*
* Az osztály egy a felhasználó által meghatározott adattípus
*
* Konstruktorok:
*		- nem rendelkeznek visszatérési értékkel
*		- a konstruktornak ugyan az a neve mint az osztálynak
*		- a konstruktornak publikusnak kell lennie, kivéve néhány tipikus esetet
*		- amikor saját konstruktort készítünk, az alap konstruktort elveszítjük
*
* Encapsulation:
*		Az adat és adatkezelõ/mûködtetõ metódusok összekötését értjük osztályokon belül.
*		Megakadályozva ezzel azt, hogy valaki / valami közvetlenül hozzáféréssel rendelkezzen
*
*		Hogyan érhetünk el egy kapszulázott osztályt?
*		Metódusain keresztül. Ezzek "getterek" és "setterek"
* 
* Abstraction:
*		Komplex dolgok eljárás mögé rejtése, mely ezeket a dolgokat egyszerûnek tünteti fel.
*		Pl.: Hívás indítása egy gomb nyomással
*		Hogyan? Absztrakt osztállyal / Interfésszel
*		Tualajdonságok: Van legalább egy tisztán virtuális függvénye
*/

#include <iostream>
using namespace std;


class AbstractEmployee {  

	virtual void askForPromotion() = 0; // Tisztán virtuális osztály, csak származtathatni akarunk belõle
							// bármely osztály mely megörökli ezt az interfészt/absztrakt_osztályt kötelezni fogjuk, hogy implementálja ezt a metódust.
							// a kötelezást a virtual-al érjük el + "... = 0;"
							//a öröklõdés:   :_név_
};

class Employee :AbstractEmployee { //a kibõvítés :_név_ EZ önmagában nem elég mert bár meghívtuk, az általunk hozott virtual szabályt nem tartja be
private:		//alapból privátra állítja ha nincs semmi módosító
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

	void askForPromotion() { // virtual void askForPromotion() = 0 felülírása

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
