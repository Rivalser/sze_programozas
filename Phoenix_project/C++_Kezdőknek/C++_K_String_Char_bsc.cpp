#include <iostream>
#include <string>

using namespace std;

int main()
{

	string str = " ";
	char ch = '!';

	cout << "Adj meg egy szoveget!\n";
	//cin >> str;
	//cout << str << endl;

	/*

	A fehérkarakterek végett nem a teljes szöveg tárolódik el.
	Ennek kiküszöbölése végett getline(cin,str) -t használunk ami Enterig olvas.
	A getline végett kell a <string> fejléc.

	Egymás után a cin str és getline(cin,str) nem épp úgy mûködik mint elsõre gondolnánk
	Ha megadjuk hogy "almas retes" akkor a cin az elsõ fehér karakterig megy vagyis "almas".
	A szóköz már nem kerül bele.
	Azonban a getline (cin,str) nem kér be újatmivel az enterig megy és a "levegõben"
	lógnak még el nem tárolt adatok.

	Így a getline az enterig beolvassa az adatot és kiírás után annyi szerepel hoigy "retes".
	Ha csak egy szót adunk meg hogy "almas", akkor a cin kiirja hogy almas.
	DE az entert már nem olvasta be vagyis, a getline csak egy entert vagyis üres sort ad vissza.
	*/

	//cout << "Adj meg egy szoveget!\n";
	getline(cin, str);
	//cout << str;

	cout << "A szoveg karaktereinek szama: " << str.size() << endl;
	cout << "Adj meg egy masik szoveget!\n";
	string str2;
	getline(cin, str2);
	str += str2;	//string egybefûzés .append() ugyanúgy megteszi
	str.push_back(ch);
	//str.clear(); //string tartalmának törlése
	cout << str << endl;

	if (str < str2) {

		cout << "Az elso szoveg elorebb van az abc-ben!" << endl;
	}
	else
	{
		cout << "A masodik szoveg elorebb van az abc-ben!" << endl;
	}

	//String megfordítás

	cout << "Add meg a neved" << endl;
	string nev;
	getline(cin, nev);
	for (int i = nev.size()-1; i >= 0; i--) // Fordított forciklussal kiírjuk a karaktereket ezáltal megfordítjuk a stringet.
	{
		cout << nev[i];
	}


}
