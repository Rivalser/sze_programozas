#include <iostream>
#include <vector>
#include <fstream>
#include <string>

using namespace std;

void szetvalaszt(vector <string>& magyar, vector<string>& angol); //módosítjuk a tagokat így &-t használunk
string keres(string keresettSzoveg, vector <string> magyar, vector <string> angol);

int main()
{

	string keresett;
	vector <string> angol, magyar; //több vektort különb neveken létrehozunk
	cout << "Adj meg egy keresendo szot!" << endl;
	getline(cin, keresett);
	szetvalaszt(magyar, angol);
	/*
	* Teszt, hogy jól csináltuk-e:
	*
	for (int i = 0; i < angol.size(); i++)
	{
		cout << "Angol " << i + 1 << ". eleme: " << angol[i]<<endl;
	}
	for (int i = 0; i < magyar.size(); i++)
	{
		cout << "Magyar " << i + 1 << ". eleme: " << magyar[i]<<endl;
	}
	*/
	keresett = keres(keresett, magyar, angol);

	cout << keresett;

	return 0;
}

void szetvalaszt(vector <string>& magyar, vector<string>& angol) {

	string aktSor;
	int pos;
	ifstream fin("szotar.txt");
	while (!fin.eof())
	{
		getline(fin, aktSor);
		pos = aktSor.find('*');//Az egybefüggő string szétválastásához kell egy pozíció, hogy mettől meddig válasszuk azt szét
		angol.push_back(aktSor.substr(0, pos));
		magyar.push_back(aktSor.substr(pos + 1)); // Ha csak egy paramétert adunk meg akkor a végéig beolvassas
	}
	fin.close();

}


//Ez a függvény oda vissza képes fordítani
string keres(string keresettSzoveg, vector<string> magyar, vector<string> angol) {

	int i = 0;
	while (i<magyar.size())
	{
		if (keresettSzoveg == angol[i])//Ha van egyezés, akkor visszaadja a keresett szót.
			return magyar[i]; // A returnnel egyből kilép a függvényből, függetlenül attól, hogy hol tart abban.
		else if (keresettSzoveg == magyar[i])
			return angol[i];
		i++; //Hogy lépkedjünk, különben végtelenciklusba esünk.
	}
	return "A keresett szot a szotar nem tartalmazza!\n"; //Ha nincs egyezés
}
