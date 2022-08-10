#include <iostream>
#include <vector>

using namespace std;

int main()
{

	vector<int> v;
	int szam;

	do
	{

		cout << "Adj meg egy elemet a vektorba!" << endl;
		cin >> szam;
		v.push_back(szam);

	} while (szam!=0);

	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i]<<endl;
	}

}
