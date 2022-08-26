#include <iostream>

using namespace std;


int main()
{
	int* a = new int; // A gép egy szabad helyet lefoglal a memóriában a változó számára, még akkor is ha nincs értéke (ezért helyfoglalás duuh) 
	*a = 5;
	cout << *a << endl;
	delete a; // A memóriaszivárgást megelőzve törölni kell a lefoglalt területet.
			  //Habár hibaüzenetet nem kapunk, ezt meg kell tenni mert az.
}
