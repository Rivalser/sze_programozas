
/*
Írjon egy programot, amely 2 db felhasználói függvényt használ.

Az egyik az int feltolt(char s_tb[]), amely feltölt egy karakter tömböt (1. paraméter) ékezet nélküli szöveggel az ENTER billentyű leütéséig,
vagy maximum 50 db karakterig. Bekérési információk és hibaüzenetek kiírása nem kell! A tömb hosszát szimbolikus állandóval állítsa be.
A függvény visszatérési értéke a feltöltött tömb hossza legyen.

A másik függvény a void torol(char s_tb[], int h), pedig a feltöltött tömb (1. paraméter) minden második elemét törölje,
majd az így módosított tömb tartalmát írja is ki.
A torol függvény 2. paramétere a feltolt függvény visszatérési értéke.
*/

#include <iostream>

#define MAX 50

using namespace std;

int feltolt(char s_tb[]) {

	char aktChar;
	cin.getline(s_tb, MAX); // a karakterek cserélésekor a fehérkaraktereket békén hagyja így a space nem zavar bele

	int i = 0;
	while (s_tb[i] != '\0')
	{
		i++;
	}
	return i;
}

void torol(char s_tb[], int h) {

	int j = 0;
	for (int i = 0; i < h; i++)
	{
		if (i % 2 == 0) {
			s_tb[j] = s_tb[i];
			cout << s_tb[j];
			j++;
		}

	}

}

int main()
{
	char ar[MAX];
	int num = feltolt(ar);

	torol(ar, num);

	return 0;
}
