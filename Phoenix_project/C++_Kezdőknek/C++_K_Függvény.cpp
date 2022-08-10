/*
Maga a függvény arra van, hogy azt meghívva egy bizonyos számítást elvégezzen, annyiszor ahányszor az meg lett hívva.
Azért jó mert hely idő és számítás takarékos. Így egy dolgot elég csak egyszer elvégezni.
*/

#include <iostream>

using namespace std;

int kerulet(int a) { // 'a' az amit a program vár

	//int eredmeny;

	//eredmeny = 4 * a;

	return  4*a; // a void-tól eltérő függvények visszatérési értékkel kell (az esetek nagy részében), hogy rendelkezzenek
					//	A void függvények a kapott információt feldolgozzák és a feldolgozás maga az eredmény
}


int terulet(int a) {

	return a * a;

}

//Mi a függvény kifejtés és miért jó az?

//1. deklaráljuk a függvényeket, önmagában ez hiba, mert nincsenek még deklarálva
void elso();
void masodik();

//2. deklaráljuk a függvényeket
/*
	Az első lépés azért fontos, mert ha egymásba ágazó függvényeket használunk
	és ahogy haladunk előre, a fordító nem fogja felismerni a meghívott függvényt
	és hibát ír ki. Magyarány ha egymásba ágazó függvényeket tervezünk, deklaráljunk.
*/
void elso() {

	cout << "elso" << endl;
	masodik();
}

void masodik() {
	cout << "masodik" << endl;
}

int main()
{
	int a;
	cout << "Add meg az egysegnegyzet oldalat! " << endl;
	cin >> a;
	int ker = kerulet(a);
	cout << "A negyzet kerulete: " << ker << endl;
	cout << "A negyzet terulete: " << terulet(a)<<endl;
	elso();
}

