#include <iostream>

using namespace std;

int main()
{
	//Ha g�pel�nk �s tabot nyomunk el�ugrik a v�laszt�k, hogy ebb�l mit is hozhatunk ki. (for "TAB" -> teljes for ciklus)

	int a[5];

	//T�lts�k fel a t�mb�t

	//i++ vagyis i = i+1;

	for (int i = 0; i < 5; i++) // 4 r�szb�l �p�l fel a for ciklus. Mett�l induljon, meddig menjen
	{							//, mit csin�ljon ha egyszer v�gigment �s hogy mit csin�ljon az aktu�lis ciklusban
		cout << "Add meg az " << i + 1 << ". szamot: ";
		cin >> a[i];
	}

	// 0 kisebb mint 5? Igen -> bel�p a ciklusba azt v�grehajtja megn�veli 1-el az i-t. Majd az eg�szet �jra.
	// 5 kissebb mint 5? Nem -> Kil�p a ciklusb�l majd megy tov�bb

	cout << endl;
	//�rjuk ki a t�mb�t

	for (int i = 0; i < 5; i++)
	{
		cout << "A tomb " << i + 1 << ". eleme: " << a[i] << endl;
	}

}
