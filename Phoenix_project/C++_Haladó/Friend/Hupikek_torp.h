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

*: Amikor egy oszt�lyon k�v�li f�ggv�nnyel hivatkozok
   az oszt�lyra az oszt�lyon bel�l,
   az adott f�ggv�ny deklar�ci�j�t hozz� adom
   mint egy bar�t, �gy az adott f�ggv�ny
   hozz�f�r az adatokhoz.

*/
