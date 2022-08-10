#include <iostream>

using namespace std;

int main()
{
	int a, b, c;

	//Relációjelek használata: >= <= ==(hasonlítás) !=(nem egyenlő) && (és)  || (vagy) %(maradékos osztás, vagyis eredményül a maradékot adja) /(sima osztás)

	cout << "Add meg a haromszog 'a' oldalat!" << endl;
	cin >> a;
	cout << "Add meg a haromszog 'b' oldalat!" << endl;
	cin >> b;
	cout << "Add meg a haromszog 'c' oldalat!" << endl;
	cin >> c;

	if (a + b > c && a + c > b && c + b > a)
	{
		cout << "A haromszog szerkesztheto!";
	}
	else
	{
		cout << "A haromszog nem szerkesztheto!";

	}


	return 0;
}
