#pragma once
#include "Hupikek_torp.h"

class Hupikek_torp
{
	friend void kiir(const Hupikek_torp& obj);//*
public:
	Hupikek_torp(int);
private:
	int eletkor;
};

/*

*: Amikor egy osztályon kívüli függvénnyel hivatkozok
   az osztályra az osztályon belül,
   az adott függvény deklarációját hozzá adom
   mint egy barát, így az adott függvény
   hozzáfér az adatokhoz.

*/
