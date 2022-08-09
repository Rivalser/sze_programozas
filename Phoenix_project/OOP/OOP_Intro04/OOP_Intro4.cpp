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
*
* �r�kl�d�s(Inhaeitance):
*		Van egy �soszt�ly melynek vannak lesz�rmazott oszt�lyai.
*		A lesz�rmazott oszt�ly meg�r�kli az �s tulajdons�gait �s azokat �talak�tja,b�v�ti,specializ�lja stb..
*		Jelen esetben class Developper
* 
* Polimorfizmus:
*		Amikor egy sz�l� oszt�ly hivatkoz�sa arra van haszn�lva hogy utaljon a gyerek oszt�ly objektum�ra.
* 
*/

#include <iostream>
using namespace std;


class AbstractEmployee {

	virtual void askForPromotion() = 0; // Tiszt�n virtu�lis oszt�ly, csak sz�rmaztathatni akarunk bel�le
							// b�rmely oszt�ly mely meg�r�kli ezt az interf�szt/absztrakt_oszt�lyt k�telezni fogjuk, hogy implement�lja ezt a met�dust.

};

class Employee :AbstractEmployee { //a kib�v�t�s :_n�v_ EZ �nmag�ban nem el�g mert b�r megh�vtuk, az �ltalunk hozott virtual szab�lyt nem tartja be
private:
	string Company;
	int Age;
protected:		//Ezzel az als�bb oszt�lyok "k�zvetlen�l" hozz�f�rhetnek az adott dologhoz,de azon k�v�l private k�nt fog viselkedni
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

class Developer : public Employee { // most m�r "gyerekoszt�ly" lett m�g az Employee "sz�l�oszt�ly" lett. Mind a private �s public tulajdons�gokkal. Public: hozz�f�r�sek v�gett
public:
	string FavProgLanguage;
	Developer(string name, string company, int age, string progLangueage) :Employee(name, company, age)  //name,co,age �t lett passzolva az Employeenak mert az ezekkel foglalkozik
																									 // �gy ezekkel nem de a progLanguage -el kell t�r�dn�nk
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
