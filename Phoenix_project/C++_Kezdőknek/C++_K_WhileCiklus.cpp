#include <iostream>

using namespace std;

int main()
{
	//Felépítésében a while más mint a for.
	//A for-t akkor használjuk amikor tudjuk hogy a ciklusnak hányszor kell végbe mennie
	//A while esetében nem kell azt tudnunk de úgy is kezelhetjük.

	int i = 0,a[4];

	while (i<4)
	{
		cout << "Add meg a tomb " << i + 1<<". elemet." << endl;
		cin >> a[i];
		i++;
	}

	for ( i = 0; i < 4; i++) //itt már nem kell az "int" vagyis a deklarálás mert az fentebb már végbement
	{						// már csak nullázuk azt.
		cout << "A tomb " << i + 1 << ". eleme: "<< a[i] << endl;
		
	}

}
