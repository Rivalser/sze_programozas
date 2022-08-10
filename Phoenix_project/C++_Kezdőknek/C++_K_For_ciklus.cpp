#include <iostream>

using namespace std;

int main()
{
	//Ha gépelünk és tabot nyomunk elõugrik a választék, hogy ebbõl mit is hozhatunk ki. (for "TAB" -> teljes for ciklus)

	int a[5];

	//Töltsük fel a tömböt

	//i++ vagyis i = i+1;

	for (int i = 0; i < 5; i++) // 4 részbõl épül fel a for ciklus. Mettõl induljon, meddig menjen
	{							//, mit csináljon ha egyszer végigment és hogy mit csináljon az aktuális ciklusban
		cout << "Add meg az " << i + 1 << ". szamot: ";
		cin >> a[i];
	}

	// 0 kisebb mint 5? Igen -> belép a ciklusba azt végrehajtja megnöveli 1-el az i-t. Majd az egészet újra.
	// 5 kissebb mint 5? Nem -> Kilép a ciklusból majd megy tovább

	cout << endl;
	//Írjuk ki a tömböt

	for (int i = 0; i < 5; i++)
	{
		cout << "A tomb " << i + 1 << ". eleme: " << a[i] << endl;
	}

}
