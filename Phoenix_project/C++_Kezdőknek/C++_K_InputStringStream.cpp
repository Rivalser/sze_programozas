#include <iostream>
#include <sstream>
#include <vector>

//Ezzel tudunk konvert�lni egyes v�ltoz�k �s a stringek k�z�tt

using namespace std;

void beker(string &str);

void szetszed(vector<int> &v, string str);

void beker(string &str) {

	cout << "Adj meg egy szamsort!" << endl;
	getline(cin, str);

}

void szetszed(vector<int> &v, string str) {

	istringstream szamok(str); // Az str-b�l csin�ltunk szamok nev� adatfolyamot (11 32 467 1 14 621 9 57 ...)

	int szam;

	while (szamok>>szam) // A szamok adatfolyamb�l a szam-ba t�ltj�k bele az elemeket egyes�vel
	{

		v.push_back(szam);

	}

}

int main()
{

	string str;
	vector<int> v;
	beker(str);
	szetszed(v, str);

	for (int i = 0; i < v.size(); i++)
	{
		cout << "A vektor " << i + 1 << ". eleme: " << v[i] << endl;
	}

}
