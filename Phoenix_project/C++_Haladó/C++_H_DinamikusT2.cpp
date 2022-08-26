#include <iostream>
//A dinamikus t�mb�ket akkor haszn�ljuk legink�bb ha nem tudjuk, hogy h�ny adatot kell t�rolni
//vagy ha a felhaszn�l�t�l v�rjuk a k�v�nt m�retet
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
	int* segedT = new int[meret + 1]; // Az �j t�mbh�z egy �j egys�get foglal el�re le
	for (int i = 0; i < meret; i++)
	{
		segedT[i] = tomb[i]; //Az eddig megl�v� elemek m�sol�sa
	}
	segedT[meret++] = x; // �gy a "m�retedik" indexen l�v� tagot =v� teszi X-el, majd n�veli a meret v�ltoz�t
	// Ha ++meret-et �runk akkor el�bb n�veli a meretet �s arra az indexre rakja azt be ami nem j�
	delete[] tomb; // Felszabad�tjuk majd al�bb egyenl�v�tessz�k a tagokat
	tomb = segedT; //Kezd� pointerek
}
