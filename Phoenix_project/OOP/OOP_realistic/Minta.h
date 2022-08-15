#include <iostream>//ami itt include-olva vannak az a minta.cpp-ben is include-olva lesznek

using namespace std;

#ifndef MINTA_H  //ha m�g nincs defini�lva												|Amikor m�sodj�ra van megh�vva akkor �tugorja a az ifndef-et
#define MINTA_H // akkor defini�lja �s v�gezze el mindazt ami ez �s az #endif k�zt �ll	|Az �tk�z�sek elker�l�s��rt van a file nev�vel_H jelezve


/*

 ifndef egy makr� ami annyit tesz, hogy megviszg�lja,
hogy ezt a k�dot egy forr�sf�jl m�r tartalmazza-e.
Ennek kell egy nevet adni, ami �ltal�ban a f�jl neve_H h mint header file
Majd #define f�jln�v_h

Ennek egy helyettes�t�se a #pragma once, ami annyit tesz a ford�t�nak "csak egyszer haszn�ld ezt a f�jlt"

Az el�bbi a r�g�ta bev�lt "szabv�nyos�tott" m�dszer, ami minden esetben fut.
Az ut�bbi ellenben "modernebb", de nem olyan elterjedt mint a t�rsa.
Tov�bb� a pragma once nem enged�lyezi, hogy egy adott file t�bbsz�r meg legyen h�vva.
Ez j�,de van egy nagy hib�ja. Ha van pelda.a pelda.b:pelda.a - vagyis a pelda.b tartalmazza a pelda.a-t
Ez hib�t fog gener�lni. Tapasztalatok alapj�n �rdemesebb ifndef-et haszn�lni.

A header file egy kiterjeszt�ssel rendelkez� f�jl .h ami C f�ggv�nyeket, deklar�ci�kat �s makro defin�ci�kat haszn�l
amiket t�bb f�jl k�z�tt meg is oszt.

Amikor egy class-t hozunk l�tre, akkor l�trehozunk egy header file-t �s egy cpp filet.
A header-re �rdemes �gy gondolni mint egy csontv�zra. Az alap fel�p�t�s ott van deklar�lva
hab�r maga a kifejt�s a .cpp fileban megy v�gbe

*/

class Minta
{
public:
	Minta(); //defini�ltuk hogy itt van, a Minta.cpp-ben deklar�ljuk
	Minta(string, int, double); //Megadunk +1 konstruktor "csontv�zat", ahol megadjuk, hogy milyen t�pus� adatot v�r akkor a kett�t nem keveri �ssze
	// Ez olyan mint a substring(). Van hogy 1 param�tert "v�r" �s van hogy t�bbet. Ezt is ki kell hogy k�l�n fejts�k a .cpp-ben
	string getName() const;
	int getHeight()const;	  //Azzal hogy oda�rjuk hogy const, �tl�that�bb� v�lik a k�d. Hiszen egyb�l tudjuk,
	double getWeight()const; //hogy akkor csak visszaad �s vagy nem v�ltoztat semmminek az �rt�k�n
	void setName(string);
	void setHeight(int);
	void setWeight(double);
	double calculateBMI()const;
private:
	string newName;
	int newHeight;
	double newWeight;
};

#endif
