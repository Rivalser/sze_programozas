/*
A konstruktorok akkor l�pnek �letbe amikor l�trehozunk egy objektet. (Automatikusan)
K�s�bb �ket nem lehet megh�vni
		- nem rendelkeznek visszat�r�si �rt�kkel
		- a konstruktornak ugyan az a neve mint az oszt�lynak
		- a konstruktornak publikusnak kell lennie, kiv�ve n�h�ny tipikus esetet
		- amikor saj�t konstruktort k�sz�t�nk, az alap konstruktort elvesz�tj�k
*/

#include <iostream>
#include <string>

using namespace std;

class Alma {
	string name;

public:

	Alma(string pl) {  // A program a nev�b�l ad�d�an tudja, hogy ez konstruktor
		name = pl;	  // A konstruktor egyszer�bb� teszi a k�dot, hisz a k�d ism�tl�s�t akad�lyozza meg.
	}				 // Ez egyszer�bb k�d mivel itt csak egy param�terrel dolgozunk. Picit �sszetettebbre p�lda tal�lhat� lentebb*

	string getName() { //A getterek setterek az�rt j�k mert a private dolgokhoz ezeken kereszt�l tudunk hozz�f�rni
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
Employee employee1 = Employee("Rick","Wolf_IT",20); <-ezt haszn�ljuk az al�bbi helyett:
	
	employee1.Name = "Rick";
	employee1.Company = "Wolf_IT";
	employee1.Age = 20;

Szebb �s egyszer�bb.

*/