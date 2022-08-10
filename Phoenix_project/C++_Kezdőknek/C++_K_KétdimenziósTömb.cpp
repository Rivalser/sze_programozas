#include <iostream>

using namespace std;

int main()
{
	int a[7][3], ossz = 0; //7 oszlop és 3 sor

	//A hét minden napján 3szor mértünk hőmérsékletet. Adjuk meg őket

	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 3; j++) //Egymásba ágyazott forokkal töltjük őket fel
		{
			cout << "Add meg a(z) " << i + 1 << ". nap " << j + 1 << ".meresi adatat!" << endl;
			cin >> a[i][j];
		}
	}

	//Összegezzök a mért adatokat.

	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			ossz += a[i][j];
			//ossz = ossz + a[i][j];
		}
	}

	cout << "Az osszeg: " << ossz;

}
