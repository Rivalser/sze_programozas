#include <iostream>
#include<string>

using namespace std;
#define say cout<<
#define ask cin>>

string helyorzo[] = { "nev","szin","allat","jarmu","telepules","vel" };
string helyettesito[] = { "Gizi","piros","kutya","bicikli","Karakoszorcsog" };


int stringKeres(int kezdo, int veg, string szoveg) { 
	string nev = szoveg.substr(kezdo+1,veg-(kezdo+1));  //stringbõl való kiemeléshez
	for (int i = 0; i < sizeof(helyorzo)/ sizeof(helyorzo[0]); i++)  //sizeof(helyorzo)/ sizeof(helyorzo[0]) Ez adja meg az elemszámát, C++-ban
	{
		if (helyorzo[i] == nev)
			return i; // "Melyik helyorzo a keresett?"
	}
	return -1; //hiba esetén
}


int main()
{
	string szoveg;
	getline(cin, szoveg);
	bool vege = false;
	int aktPos;
	int nextSign;
	string vegjel = "[vege]";

	for (int i = 0; i < szoveg.length() && !vege; i++)
	{
		vege = true;									//legoptimálisabb stringszakasz ellenõrzõ
		for (int j = 0; j < vegjel.length() && vege; j++)
		{
			if (vegjel[j] == szoveg[j + i]) {
				//vege = true;
			}
			else {
				vege = false;
			}

		}
		if (vege)
			break;
		//mi van ha false?
		aktPos = szoveg.find('$'); //képes szövegeket keresni is, ha nem talál -1 el , hamissal tér vissza
		if (aktPos == -1)
			break;
		nextSign = szoveg.find('$', aktPos+1); //+1 hogy n legyen = az aktPos-al
		int keresettPos = stringKeres(aktPos, nextSign, szoveg);

		szoveg.replace(aktPos,nextSign - aktPos+1,helyettesito[keresettPos]);
		i = nextSign;
		
	}
	say szoveg;
	/*
	vege?
	aktPos = 1.$
	nextSign = 2.$
	nextSign-aktPos helyén csere a helyettesitore
	*/

}

