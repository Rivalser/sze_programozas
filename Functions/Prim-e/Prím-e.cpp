#include <iostream>

/*
	A keresett szám gyökéig érdemes vizsgálni, hogy meghatározzuk, hogy prímről van-e szó.
	Ha a keresett szám a 9 akkor csak 3-ig vizsgálunk.
	A legkissebb prím a 2 ezért onnan kezdünk
	2 <= mint sqrt(9) ? -> Igen és 9%2!=0 ? -> Igen -> i++
	3 <= mint sqrt(9) ? -> Igen és 9%3!=0 ? -> Hamis -> Kilép a while-ból
	return 3 > sqrt(a) -> Hamis, tehát hamis értéket dob vissza

*/


using namespace std;

bool prime(int a);

bool prime(int a) {

	int i = 2;
	while (i <= sqrt(a) && a%i!=0)     
	{								  									
		i++;
	}

	return i > sqrt(a);

}

int main()
{
   
	int szam;
	cout << "Addj meg egy szamot!" << endl;
	cin >> szam;
	if (prime(szam) == true) {
		cout << "Prim szam!" << endl;
	}
	else
	{
		cout << "Nem prim szam!" << endl;
	}


}
