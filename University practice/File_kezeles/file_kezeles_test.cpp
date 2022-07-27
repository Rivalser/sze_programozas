#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	ifstream fajlbe("Test.txt");

	int db = 0;
	string aktSor;

	char aktChar;

	if (fajlbe.is_open())
	{
		/*
		getline(fajlbe, aktSor);
		cout << "getline-al: " << aktSor << endl;

		db = stoi(aktSor);

		string* teljesNev = new string[db];

		for (int i = 0; i < db; i++)
		{
			int aktHossz = 0;
			int utolsoSzokoz = 0;

			getline(fajlbe, teljesNev[i]);

			aktHossz = teljesNev[i].length();
			utolsoSzokoz = teljesNev[i].find_last_of(' ');

			int kerNevHossz = aktHossz - (aktHossz - utolsoSzokoz);
			int vezNevHossz = aktHossz - utolsoSzokoz;

			char* kerNev = new char[kerNevHossz]; // !
			for (int i = 0; i < kerNevHossz; i++)
			{
				kerNev[i] = aktSor[i];
				cout << kerNev[i];
			}

		}
		//lekérem a sort getline-al, meghatározom a hosszát
		//megnézem, hogy hol van az utolsó ' '
		//kiszámolom a különbséget ez lesz a hossza a kernev dynamic arr nak
		// a maradék lesz a hossza a veznev dynamic arr nek
		//egymásba ágyazott for okkal feltöltöm ezeket
		//Nem jó

		*/

		/*
		String tömbök. Szóközök számáig kernevesekhez olvas be >> majd vált veznev re
		*/

		getline(fajlbe, aktSor);

		db = stoi(aktSor);

		string teljesNev;

		string** nev = new string * [db];
		for (int i = 0; i < db; i++)
		{
			// HA fajlbe >> db LENNE, AZ NEM KEZDENE ÚJ SORT, ÍGY AZ ALÁBBI SZÓKÖZSZÁMLÁLÓ A NULL PTR MIATT 0-T ADNA !!! (mert a 6 os után áll a "kurzor" ott meg nincs semmi így ad 0-t)

			getline(fajlbe, teljesNev);

			/*
			int szokozDb = 0;

			for (int j = 0; j < teljesNev.length(); j++)
			{
				aktChar = teljesNev[j];
				if (aktChar == ' ')
					szokozDb++;
			}
			cout << szokozDb;
			// eddig fasza
			szokozDb++; //vezetéknév hozzáadása
			*/

			int nevTagolas = 2;

			nev[i] = new string[nevTagolas];

			int utolsoSzokoz = teljesNev.find_last_of(' ');

			nev[i][0] = teljesNev.substr(0, utolsoSzokoz);
			nev[i][1] = teljesNev.substr(utolsoSzokoz+1);
			cout << nev[i][1] << ", " << nev[i][0] << endl;


		}

		ofstream kimenet("Cserelt nevek.txt");
		for (int i = 0; i < db; i++)
		{
			kimenet << nev[i][1] << ", " << nev[i][0] << endl;

		}


	}
	else
	{
		cout << "Hiba.";
	}

}
