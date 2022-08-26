#include <iostream>
//A dinamikus tömböket akkor használjuk leginkább ha nem tudjuk, hogy hány adatot kell tárolni
//vagy ha a felhasználótól várjuk a kívánt méretet
using namespace std;

void push(int* &tomb, int x, int &meret);

int main()
{
	int* tomb = new int[0];
	int meret = 0;
	push(tomb,6,meret);
	for (int i = 0; i < meret; i++)
	{
		cout << tomb[i] << endl; 
	}
	delete[] tomb;

	return 0;
}

void push(int* &tomb, int x, int &meret) {
	int* segedT = new int[meret + 1]; // Az új tömbhöz egy új egységet foglal elõre le
	for (int i = 0; i < meret; i++)
	{
		segedT[i] = tomb[i]; //Az eddig meglévõ elemek másolása
	}
	segedT[meret++] = x; // Így a "méretedik" indexen lévõ tagot =vé teszi X-el, majd növeli a meret változót
	// Ha ++meret-et írunk akkor elõbb növeli a meretet és arra az indexre rakja azt be ami nem jó
	delete[] tomb; // Felszabadítjuk majd alább egyenlõvétesszük a tagokat
	tomb = segedT; //Kezdõ pointerek
}
