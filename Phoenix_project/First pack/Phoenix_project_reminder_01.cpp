
/*
Feladat: �rjon egy programot, amely 2 db felhaszn�l�i f�ggv�nyt haszn�l. Az egyik az int beker(int be_tb[], int *min, int
*max), amely 10 db el�jeles eg�sz sz�mot k�r be �gy, hogy azokat egy t�mbbe t�rolja le.A t�mb hossz�t szimbolikus
�lland�val �ll�tsa be. A t�rol�s csak akkor j�jj�n l�tre, ha az al�bbi felt�telek teljes�lnek. A t�mb 0. index�n csak a nulla
�rt�k, a p�ratlan indexein csak p�ratlan �rt�kek �s a p�ros indexein csak p�ros sz�mok szerepelhetnek! Ha az adott �rt�k
nem teljes�ti a r� vonatkoz� felt�telt, akkor �j sz�mot kell bek�rni. Bek�r�si inform�ci�k �s hiba�zenetek ki�r�sa nem kell!
A felt�telek teljes�l�se eset�n a beker f�ggv�ny hat�rozza meg �s t�rolja el a legkisebb p�ratlan, illetve a legnagyobb
p�ros sz�mokat. Ezen �rt�kek a f�ggv�ny 2. �s 3. param�terei, am�g az 1. param�ter a t�rol� t�mb. A f�ggv�ny
visszat�r�si �rt�ke a 10 db sz�m �sszege legyen. A m�sik f�ggv�ny a void kiir(int szum, int min, int max), pedig �rja ki a
beker f�ggv�ny visszat�r�si �rt�k�t illetve a 2. �s 3. param�terek �rt�keit a p�ld�ban l�tott sz�vegez�ssel.
*/

#include <iostream>
#define N 10

using namespace std;

int beker(int be_tb[], int* min, int* max) {
	int aktNum;
	int sum = 0;
	bool ok = false;


	int i = 0;
	while (i < 10)
	{
		ok = false;

		if (i == 0) {
			do
			{
				cin >> aktNum;
				if (aktNum == 0) {
					be_tb[i] = aktNum;

					ok = true;
				}
			} while (ok == false);
		}

		else if (i % 2 != 0) {
			do
			{
				cin >> aktNum;
				if (aktNum % 2 != 0) {
					be_tb[i] = aktNum;
					sum += aktNum;
					if (aktNum < *min)
						*min = aktNum;
					ok = true;
				}
			} while (ok == false);
		}

		else if (i % 2 == 0) {
			do
			{
				cin >> aktNum;
				if (aktNum % 2 == 0) {
					be_tb[i] = aktNum;
					sum += aktNum;
					if (aktNum > *max)
						*max = aktNum;
					ok = true;
				}
			} while (ok == false);
		}

		i++;

	}

	return sum;

}

void kiir(int sum, int min, int max) {
	cout << "Az osszeg: " << sum << endl;
	cout << "Minimum: " << min << endl;
	cout << "Maximum: " << max << endl;
}

int main()
{

	int array[N];
	int minimum = INT_MAX;
	int maximum = INT_MIN;

	int sum = beker(array, &minimum, &maximum);
	kiir(sum, minimum, maximum);

	return 0;
}
