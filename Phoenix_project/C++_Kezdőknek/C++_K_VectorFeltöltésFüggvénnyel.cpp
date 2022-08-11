#include <iostream>
#include <vector>

using namespace std;

void beker(vector<int> &v);

void beker(vector<int> &v) {
	int szam;
	cout << "Add meg az elso elemet a vektorba! (0 eseten kilep)" << endl;
	cin >> szam;
	while (szam!=0)
	{
		v.push_back(szam);
		cout << "Add meg a kovetkezo elemet a vektorba! (0 eseten kilep)" << endl;
		cin >> szam;
	}
}

void kiir(vector<int> v) {
	for (int i = 0; i < v.size(); i++)
	{
		cout << "A vektor " << i + 1 << ". eleme: " << v[i] << endl;
	}
}

int main()
{

	vector<int> v;

	beker(v);
	kiir(v);
	return 0;

}
