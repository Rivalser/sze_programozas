#include <iostream>

using namespace std;

int main()
{
	//Fel�p�t�s�ben a while m�s mint a for.
	//A for-t akkor haszn�ljuk amikor tudjuk hogy a ciklusnak h�nyszor kell v�gbe mennie
	//A while eset�ben nem kell azt tudnunk de �gy is kezelhetj�k.

	int i = 0,a[4];

	while (i<4)
	{
		cout << "Add meg a tomb " << i + 1<<". elemet." << endl;
		cin >> a[i];
		i++;
	}

	for ( i = 0; i < 4; i++) //itt m�r nem kell az "int" vagyis a deklar�l�s mert az fentebb m�r v�gbement
	{						// m�r csak null�zuk azt.
		cout << "A tomb " << i + 1 << ". eleme: "<< a[i] << endl;
		
	}

}
