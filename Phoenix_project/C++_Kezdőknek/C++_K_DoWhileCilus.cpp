#include <iostream>

using namespace std;

int main()
{

	//H�tultesztel� ciklusnak is nevezik
	//Akkor haszn�latos, amikor szeretn�nk hogy a ciklus legal�bb egyszer lefusson

	int a[5], i = 0;

	do
	{
		cout << "Add meg az " << i + 1 << ". szamot." << endl;
		cin >> a[i];
		i++;

	} while (i<5);

	for (int i = 0; i < 5; i++)
	{
		cout << "A tomb " << i + 1 << ". eleme: " << a[i] << endl;
	}



}
