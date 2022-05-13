#include <iostream>
#include <string>
#include <time.h>

using namespace std;
#define say cout<<
#define ask cin>>

string helyorzo[] = { "nev","szin","allat","jarmu","telepules","vel" };
string helyettesito[] = { "Gizi","piros","kutya","bicikli","Karakoszorcsog" };

int randomSzam() {
	srand(time(NULL)+0);
	return (0 + rand() % (9999-0));

}

int main()
{
	//egyszeri v�gigmen�s, k�zben az �j sz�veg l�trehoz�sa 
	say "Szimbolum cserelo program.\n";
	string szoveg;
	string newSzoveg;
	getline(cin, szoveg);
	string csere = "";
	string hasonlitas;
	int vege = szoveg.find("[vege]");
	int kezdojel;
	int vegjel;
	for (int i = 0; i < vege; i++)
	{
		if (szoveg[i] != '$') {
			newSzoveg += szoveg[i];
		}
		if (szoveg[i] == '$') {
			if (szoveg[i + 1] == '$') {
				szoveg[i + 1] = '\0';
				newSzoveg += '$';

			}
			else
			{
				i++; //az�rt kell hogy a $ jelet amin i �ll ne rakja bele hanem csak az azt k�vet�t
				while (szoveg[i] != '$')
				{
					csere += szoveg[i];
					i++;
				}

				if (csere == helyorzo[5]) {
					newSzoveg += to_string(randomSzam());
				}
				else
				{
					bool bennevan = false; // $kecske$ eset�n lesz kecske, a for-on k�v�l van, k�l�nben sz�ism�tl�s l�pne fel stb.
					for (int j = 0; j < 5; j++)
					{

						if (csere == helyorzo[j]) {
							bennevan = true;
							newSzoveg += helyettesito[j];
						}

					}
					if (!bennevan) {
						newSzoveg += csere;
					}
				}

				csere.clear(); // ha nem lenne akkor Gizi ut�ni helyettesitok helyere "" ker�lne.

			}
		}
	}
	say newSzoveg;
}