#include <iostream>

using namespace std;

int main()
{
	int sor;
	int oszlop;
	cout << "Hany sora legyen a matrixnak?" << endl;
	cin >> sor;
	cout << "Hany oszlapa legyen a matrixnak?" << endl;
	cin >> oszlop;
	int** tomb = new int* [sor];  
	for (int i = 0; i < sor; i++)
	{
		tomb[i] = new int[oszlop];
	}
	
	for (int i = 0; i < sor; i++)
	{
		for (int j = 0; j < oszlop; j++)
		{
			tomb[i][j]=5;
		}
	}

	for (int i = 0; i < sor; i++)
	{
		for (int j = 0; j < oszlop; j++) {
			cout << tomb[i][j] << " ";
		}
		cout << endl;
	}

	for (int i = 0; i < sor; i++)
	{
		delete[] tomb[i];
	}
	delete[] tomb;

}
