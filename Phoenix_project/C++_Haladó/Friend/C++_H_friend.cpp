#include <iostream>
#include "Hupikek_torp.h"

using namespace std;

void kiir(const Hupikek_torp& obj);

int main()
{
	Hupikek_torp t(34);
	kiir(t);
	return 0;
}

void kiir(const Hupikek_torp& obj) {
	//cout << t.eletkor() << endl;
	/*Ezt �gy nem �ri el. De hivatkozhatok a f�ggv�nyen bel�l, hogy
	az az "oszt�lyom bar�tja." �gy hivatkozhatok m�r r�*/
	cout << obj.eletkor << endl; //Ok�, de ez m�g nem bar�tja �gy
}
