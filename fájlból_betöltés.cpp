#include <iostream>
#include <fstream>
#include <string>

using namespace std;

char matrix[5][5]{ };

void palyaBetolt() {
	ifstream beolv;
	beolv.open("palya.txt");
	if (beolv.is_open())
	{
		string sor;
		for (int i = 0; i < 5; i++)
		{
			getline(beolv, sor);
			for (int j = 0; j < 5; j++)
			{
				matrix[i][j] = sor[j];
				cout << matrix[i][j];
			}
			cout << endl;
		}

	}
	else
	{
		cout << "Valami nem jó.";
	}
}


int main()
{
	palyaBetolt();
}