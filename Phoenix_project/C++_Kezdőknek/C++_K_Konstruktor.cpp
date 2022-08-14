/*
A konstruktorok akkor lépnek életbe amikor létrehozunk egy objektet. (Automatikusan)
Késõbb õket nem lehet meghívni
		- nem rendelkeznek visszatérési értékkel
		- a konstruktornak ugyan az a neve mint az osztálynak
		- a konstruktornak publikusnak kell lennie, kivéve néhány tipikus esetet
		- amikor saját konstruktort készítünk, az alap konstruktort elveszítjük
*/

#include <iostream>
#include <string>

using namespace std;

class Alma {
	string name;

public:

	Alma(string pl) {  // A program a nevébõl adódóan tudja, hogy ez konstruktor
		name = pl;	  // A konstruktor egyszerûbbé teszi a kódot, hisz a kód ismétlését akadályozza meg.
	}				 // Ez egyszerûbb kód mivel itt csak egy paraméterrel dolgozunk. Picit összetettebbre példa található lentebb*

	string getName() { //A getterek setterek azért jók mert a private dolgokhoz ezeken keresztül tudunk hozzáférni
		return name;
	}

	void szoveg() {
		cout << "Szep nev a(z) " << getName() << endl;
	}


};

int main()
{

	string nev;
	cout << "Adj meg egy nevet!" << endl;
	getline(cin, nev);

	Alma almaObj1(nev);
	Alma almaObj2("Dorka");
	Alma almaObj3("Ica");
	almaObj1.szoveg();
	almaObj2.szoveg();
	almaObj3.szoveg();
	return 0;
}
/*

...
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
...
...
Employee employee1 = Employee("Rick","Wolf_IT",20); <-ezt használjuk az alábbi helyett:
	
	employee1.Name = "Rick";
	employee1.Company = "Wolf_IT";
	employee1.Age = 20;

Szebb és egyszerûbb.

*/