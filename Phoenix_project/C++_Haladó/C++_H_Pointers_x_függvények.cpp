#include <iostream>

using namespace std;

void csere(int* a, int* b);

int main()
{

	int a = 4, b = 6;
	cout << "a = " << a << " b = " << b << endl;
	csere(&a, &b);
	cout << "a = " << a << " b = " << b << endl;

}

//A sima függvény csak másolatot készít a kapott
//értékekről így amikor végzett azokat törli és az adatok nem változnak a mainben
//Ha memóriacímet adunk meg, akkor a műveletvégzés az eredetivel megy végbe
//Vagyis * ot használunk
void csere(int* a, int* b) {
	int cs = *a; //Csillaggal "visszafejtjük" így az int már nem memóriacímet kap hanem annak értékét
	*a = *b;
	*b = cs;
	cout << "a = " << *a << " b = " << *b << endl;
}
