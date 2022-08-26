#include <iostream>

using namespace std;

int main()
{

	int* tomb = new int[5];
	for (int i = 0; i < 5; i++)
	{
		cin >> tomb[i];
	}
	cout << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << tomb[i] << endl;
	}
	delete[] tomb;
	return 0;
}
