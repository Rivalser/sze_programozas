#include <iostream>
#include <sstream>
#include <vector>

//Ezzel tudunk konvertálni egyes változók és a stringek között

using namespace std;

void beker(string &str);

void szetszed(vector<int> &v, string str);

void beker(string &str) {

	cout << "Adj meg egy szamsort!" << endl;
	getline(cin, str);

}

void szetszed(vector<int> &v, string str) {

	istringstream szamok(str); // Az str-bõl csináltunk szamok nevû adatfolyamot (11 32 467 1 14 621 9 57 ...)

	int szam;

	while (szamok>>szam) // A szamok adatfolyamból a szam-ba töltjük bele az elemeket egyesével
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
