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
	/*Ezt így nem éri el. De hivatkozhatok a függvényen belül, hogy
	az az "osztályom barátja." Így hivatkozhatok már rá*/
	cout << obj.eletkor << endl; //Oké, de ez még nem barátja így
}
