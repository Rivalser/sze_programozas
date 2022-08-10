#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v;  //milyen típusú és a neve
	int x;          //segédváltozó amivel az adatokat tudjuk bele pakolni

	//A vector egy 1D-s tömb végtelen elemmel. Dinamikus!
	//Vectorba belerakunk egy elemet
	//v.push_back(x);

	//Az utolsó elemet töröljük
	//v.pop_back();

	//Vector aktuális mérete
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
