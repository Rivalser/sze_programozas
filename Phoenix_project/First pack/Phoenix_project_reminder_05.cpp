#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string  first_last(string fbe, string fki) {

	ifstream fajlbe(fbe);
	int db = 0;
	string aktSor;
	char aktChar;

	if (fajlbe.is_open())
	{
		getline(fajlbe, aktSor);
		db = stoi(aktSor);
		string teljesNev;
		string** nev = new string * [db];
		for (int i = 0; i < db; i++)
		{
			// HA fajlbe >> db LENNE, AZ NEM KEZDENE ÚJ SORT, ÍGY AZ ALÁBBI SZÓKÖZSZÁMLÁLÓ A NULL PTR MIATT 0-T ADNA !!! (mert a 6 os után áll a "kurzor" ott meg nincs semmi így ad 0-t)

			getline(fajlbe, teljesNev);
			int nevTagolas = 2;
			nev[i] = new string[nevTagolas];

			int utolsoSzokoz = teljesNev.find_last_of(' ');
			nev[i][0] = teljesNev.substr(0, utolsoSzokoz);
			nev[i][1] = teljesNev.substr(utolsoSzokoz + 1);
			
			cout << nev[i][1] << ", " << nev[i][0] << endl;
		}

		fajlbe.close();

		ofstream kimenet(fki);
		for (int i = 0; i < db; i++)
		{
			kimenet << nev[i][1] << ", " << nev[i][0] << endl;

		}
		kimenet.close();

		return "Hibatlan futas!";

	}
	else
	{
		return "Sikertelen file-nyitas!";
	}

}

int main()
{
	string bemenet = "Writers.txt";
	string kimenet = "Sretirw.txt";

	cout << first_last(bemenet, kimenet);

}
