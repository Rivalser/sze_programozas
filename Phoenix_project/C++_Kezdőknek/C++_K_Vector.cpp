#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v;  //milyen t�pus� �s a neve
	int x;          //seg�dv�ltoz� amivel az adatokat tudjuk bele pakolni

	//A vector egy 1D-s t�mb v�gtelen elemmel. Dinamikus!
	//Vectorba belerakunk egy elemet
	//v.push_back(x);

	//Az utols� elemet t�r�lj�k
	//v.pop_back();

	//Vector aktu�lis m�rete
	//v.size();

	for (int i = 0; i < 5; i++)
	{
		cout << "Add meg a(z) " << i + 1 << ". elemet a vektorba!" << endl;
		cin >> x;
		v.push_back(x);
	}

	v.pop_back();

	for (int i = 0; i < v.size(); i++)
	{
		cout << "A vektor " << i + 1 << ". eleme: " << v[i] << endl;
	}
}
