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

	Employee employee1 = Employee("Rick","Wolf_IT",20);  // Employee adattípusú "employee1"
						// amint saját konstrtuktort csináltunk "Employee employee1;" - ra no def cons. ex. etc. hibát kapunk
						// ezért meghívjuk a magunk által def. konstruktort "=Employee()" és paraméterekkel látjuk el
		// employee1. önmagában nem mûködik mivel az osztály alapjáraton private
		// az adott osztályhoz public: jelzõt kell rakni
	/*employee1.Name = "Rick";
	employee1.Company = "Wolf_IT";
	employee1.Age = 20;*/
	employee1.IntroduceYourself();
	
	Employee employee2("Bea","Google",22);

	employee2.IntroduceYourself();
}
