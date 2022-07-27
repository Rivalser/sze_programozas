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
		//lek�rem a sort getline-al, meghat�rozom a hossz�t
		//megn�zem, hogy hol van az utols� ' '
		//kisz�molom a k�l�nbs�get ez lesz a hossza a kernev dynamic arr nak
		// a marad�k lesz a hossza a veznev dynamic arr nek
		//egym�sba �gyazott for okkal felt�lt�m ezeket
		//Nem j�

		*/

		/*
		String t�mb�k. Sz�k�z�k sz�m�ig kernevesekhez olvas be >> majd v�lt veznev re
		*/

		getline(fajlbe, aktSor);

		db = stoi(aktSor);

		string teljesNev;

		string** nev = new string * [db];
		for (int i = 0; i < db; i++)
		{
			// HA fajlbe >> db LENNE, AZ NEM KEZDENE �J SORT, �GY AZ AL�BBI SZ�K�ZSZ�ML�L� A NULL PTR MIATT 0-T ADNA !!! (mert a 6 os ut�n �ll a "kurzor" ott meg nincs semmi �gy ad 0-t)

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
			szokozDb++; //vezet�kn�v hozz�ad�sa
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
