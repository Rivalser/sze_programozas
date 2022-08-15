#include <iostream>//ami itt include-olva vannak az a minta.cpp-ben is include-olva lesznek

using namespace std;

#ifndef MINTA_H  //ha még nincs definiálva												|Amikor másodjára van meghívva akkor átugorja a az ifndef-et
#define MINTA_H // akkor definiálja és végezze el mindazt ami ez és az #endif közt áll	|Az ütközések elkerüléséért van a file nevével_H jelezve


/*

 ifndef egy makró ami annyit tesz, hogy megviszgálja,
hogy ezt a kódot egy forrásfájl már tartalmazza-e.
Ennek kell egy nevet adni, ami általában a fájl neve_H h mint header file
Majd #define fájlnév_h

Ennek egy helyettesítése a #pragma once, ami annyit tesz a fordítónak "csak egyszer használd ezt a fájlt"

Az elõbbi a régóta bevált "szabványosított" módszer, ami minden esetben fut.
Az utóbbi ellenben "modernebb", de nem olyan elterjedt mint a társa.
Továbbá a pragma once nem engedélyezi, hogy egy adott file többször meg legyen hívva.
Ez jó,de van egy nagy hibája. Ha van pelda.a pelda.b:pelda.a - vagyis a pelda.b tartalmazza a pelda.a-t
Ez hibát fog generálni. Tapasztalatok alapján érdemesebb ifndef-et használni.

A header file egy kiterjesztéssel rendelkezõ fájl .h ami C függvényeket, deklarációkat és makro definíciókat használ
amiket több fájl között meg is oszt.

Amikor egy class-t hozunk létre, akkor létrehozunk egy header file-t és egy cpp filet.
A header-re érdemes úgy gondolni mint egy csontvázra. Az alap felépítés ott van deklarálva
habár maga a kifejtés a .cpp fileban megy végbe

*/

class Minta
{
public:
	Minta(); //definiáltuk hogy itt van, a Minta.cpp-ben deklaráljuk
	Minta(string, int, double); //Megadunk +1 konstruktor "csontvázat", ahol megadjuk, hogy milyen típusú adatot vár akkor a kettõt nem keveri össze
	// Ez olyan mint a substring(). Van hogy 1 paramétert "vár" és van hogy többet. Ezt is ki kell hogy külön fejtsük a .cpp-ben
	string getName() const;
	int getHeight()const;	  //Azzal hogy odaírjuk hogy const, átláthatóbbá válik a kód. Hiszen egybõl tudjuk,
	double getWeight()const; //hogy akkor csak visszaad és vagy nem változtat semmminek az értékén
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
