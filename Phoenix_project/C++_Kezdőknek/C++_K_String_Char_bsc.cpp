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

	A feh�rkarakterek v�gett nem a teljes sz�veg t�rol�dik el.
	Ennek kik�sz�b�l�se v�gett getline(cin,str) -t haszn�lunk ami Enterig olvas.
	A getline v�gett kell a <string> fejl�c.

	Egym�s ut�n a cin str �s getline(cin,str) nem �pp �gy m�k�dik mint els�re gondoln�nk
	Ha megadjuk hogy "almas retes" akkor a cin az els� feh�r karakterig megy vagyis "almas".
	A sz�k�z m�r nem ker�l bele.
	Azonban a getline (cin,str) nem k�r be �jatmivel az enterig megy �s a "leveg�ben"
	l�gnak m�g el nem t�rolt adatok.

	�gy a getline az enterig beolvassa az adatot �s ki�r�s ut�n annyi szerepel hoigy "retes".
	Ha csak egy sz�t adunk meg hogy "almas", akkor a cin kiirja hogy almas.
	DE az entert m�r nem olvasta be vagyis, a getline csak egy entert vagyis �res sort ad vissza.
	*/

	//cout << "Adj meg egy szoveget!\n";
	getline(cin, str);
	//cout << str;

	cout << "A szoveg karaktereinek szama: " << str.size() << endl;
	cout << "Adj meg egy masik szoveget!\n";
	string str2;
	getline(cin, str2);
	str += str2;	//string egybef�z�s .append() ugyan�gy megteszi
	str.push_back(ch);
	//str.clear(); //string tartalm�nak t�rl�se
	cout << str << endl;

	if (str < str2) {

		cout << "Az elso szoveg elorebb van az abc-ben!" << endl;
	}
	else
	{
		cout << "A masodik szoveg elorebb van az abc-ben!" << endl;
	}

	//String megford�t�s

	cout << "Add meg a neved" << endl;
	string nev;
	getline(cin, nev);
	for (int i = nev.size()-1; i >= 0; i--) // Ford�tott forciklussal ki�rjuk a karaktereket ez�ltal megford�tjuk a stringet.
	{
		cout << nev[i];
	}


}
