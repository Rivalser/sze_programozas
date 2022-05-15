#include <iostream>
using namespace std;

void buborek(int tomb[], int db)
{
	for (int i = db - 1; i >= 1; i--)
	{
		for (int j = 0, csere; j < i; j++)
		{
			if (tomb[j] > tomb[j + 1])
			{
				csere = tomb[j];
				tomb[j] = tomb[j + 1];
				tomb[j + 1] = csere;
			}
		}
	}
}

void kiir(int tomb[], int aktDb)
{
	for (int i = 0; i < aktDb; i++)
	{
		cout << tomb[i];
		cout << " ";
	}
	cout << endl;
}

int main()
{
	int tomb[] = { -1, 2, 65, 6, 6, 6, -11 };
	int meret = sizeof(tomb) / sizeof(tomb[0]); //C++ ben nincs konkrét fgv. a tomb valós méretre
	kiir(tomb, meret);
	buborek(tomb, meret);
	kiir(tomb, meret);
	return 0;
}