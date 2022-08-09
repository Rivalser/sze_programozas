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
*
* Öröklõdés(Inhaeitance):
*		Van egy õsosztály melynek vannak leszármazott osztályai.
*		A leszármazott osztály megörökli az õs tulajdonságait és azokat átalakítja,bõvíti,specializálja stb..
*		Jelen esetben class Developper
* 
* Polimorfizmus:
*		Amikor egy szülõ osztály hivatkozása arra van használva hogy utaljon a gyerek osztály objektumára.
* 
*/

#include <iostream>
using namespace std;


class AbstractEmployee {

	virtual void askForPromotion() = 0; // Tisztán virtuális osztály, csak származtathatni akarunk belõle
							// bármely osztály mely megörökli ezt az interfészt/absztrakt_osztályt kötelezni fogjuk, hogy implementálja ezt a metódust.

};

class Employee :AbstractEmployee { //a kibõvítés :_név_ EZ önmagában nem elég mert bár meghívtuk, az általunk hozott virtual szabályt nem tartja be
private:
	string Company;
	int Age;
protected:		//Ezzel az alsóbb osztályok "közvetlenül" hozzáférhetnek az adott dologhoz,de azon kívûl private ként fog viselkedni
	string Name;


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
		if (age >= 18)
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

	void askForPromotion() {

		if (Age >= 25)
			cout << Name << " eloleptetve!" << endl;
		else
		{
			cout << Name << " sajnaljuk nem felelt meg a felteteleknek!" << endl;
		}
	}

	virtual void Work() {
		cout << Name << " is checking email, task backlog, performing tasks..." << endl;
	}

};

class Developer : public Employee { // most már "gyerekosztály" lett míg az Employee "szülõosztály" lett. Mind a private és public tulajdonságokkal. Public: hozzáférések végett
public:
	string FavProgLanguage;
	Developer(string name, string company, int age, string progLangueage) :Employee(name, company, age)  //name,co,age át lett passzolva az Employeenak mert az ezekkel foglalkozik
																									 // így ezekkel nem de a progLanguage -el kell törõdnünk
	{
		FavProgLanguage = progLangueage;
	}

	void FixBug() {
		cout << Name << " fixed bug using: " << FavProgLanguage << endl;
	}

	void Work() {
		cout << Name << " is writing "<< FavProgLanguage <<" code." << endl;
	}

};

class Teacher : public Employee {
public:
	string Subject;
	void PrepareLesson() {
		cout << Name << " is preparing " << Subject << " lesson" << endl;
	}
	Teacher(string name, string company, int age, string subject) :Employee(name, company, age) {
		Subject = subject;
	}

	void Work() {
		cout << Name << " is teaching a " << Subject <<" lesson." << endl;
	}

};

int main()
{

	Developer d = Developer("Rick", "Wolf_IT", 20, "C++");
	Teacher t = Teacher("Marie", "Piarist School", 28, "History");
	
	Employee* e1 = &d;
	Employee* e2 = &t;

	e1->Work();
	e2->Work();

}
