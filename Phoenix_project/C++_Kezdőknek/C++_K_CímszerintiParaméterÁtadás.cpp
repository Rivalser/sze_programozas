/*

	Miért jó a címszerinti paraméterátadás?
	Habár használhatnánk az eredmény szempontjából kiírásnál, hogy 
	"<< szoroz(a)", ami magát az eredményt adja, nem érdemes, mert mi van akkor
	ha több adatot akarunk visszakapni? Holott egy függvény csak egyet tud visszaadni.

	Ehhez meg kell érteni, hogy hogyan is működik egy függvény.
	A függvény nem az eredeti megkapott adattal dolgozik, hanem amikor azokat megkapja,
	az azoknak a másolataival dolgozik. Így amikor végbemegy a művelet, a másolatok megszűnnek.
	Csak maga a "return érték" marad meg.

	A címszerinti paraméterátadás erre nyújt megoldást. Nem másolattal hanem az eredeti értékkel dolgozik!
	Hogyan is megy ez végbe?
	Maga a függvény paraméterül azt a memóriacímet kapja meg ahol a módosítás szükségeltetik.
	Így a módosítás megtörténik.

	A kód egyszerűbb és gyorsabb lesz.
	Több értéket tudunk módosítani és így "visszaadni" egyetlen függvénnyel.

*/


#include <iostream>

using namespace std;

void szoroz(int &a);

void szoroz(int &a) {

	a = a * 6;

}


int main()
{
	int a;
	cout << "Adj meg egy szamot." << endl;
	cin >> a;
	szoroz(a); // A voiddal megtörténik a módosító folyamat
	cout << "Az erteke: " << a; // Az eredeti, módosított érték kiírásra kerül

}
