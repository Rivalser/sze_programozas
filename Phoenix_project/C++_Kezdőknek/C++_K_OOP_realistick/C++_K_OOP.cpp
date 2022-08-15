/*
* 
* A haladóbb/valós OOP esetén nem egy fájlban dolgozunk
* Tehát (Microsoft Visual Studio-ban) Source Files ->Add->Class
*/

//Az alábbi a Minta.h-ból van másolva

/*#ifndef MINTA_H  //ha még nincs definiálva
#define MINTA_H // akkor definiálja és végezze el mindazt ami ez és az #endif közt áll
			   // Amikor másodjára van meghívva akkor átugorja a az ifndef-et
			  // Az ütközések elkerüléséért van a file nevével_H jelezve

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

#include <iostream>
#include "Minta.h"
#include <string>


using namespace std;

int main()
{

	string name;
	int height;
	double weight;
	cout << "Add meg a tanulo nevet!" << endl;
	getline(cin, name);
	cout << "Add meg a tanulo magassagat!" << endl;
	cin >> height;
	cout << "Add meg a tanulo testsullyat!" << endl;
	cin >> weight;
	/*Minta tanulo1(name, height, weight);

	cout << "A tanulo neve: " << tanulo1.getName()<<endl;
	cout << "A tanulo magassaga: " << tanulo1.getHeight()<<endl;
	cout << "A tanulo testsullya: " << tanulo1.getWeight()<<endl;*/

	Minta Tanulo_2;
	Tanulo_2.setName(name);
	Tanulo_2.setHeight(height);
	Tanulo_2.setWeight(weight);

	cout << "A tanulo neve: " << Tanulo_2.getName() << endl;
	cout << "A tanulo magassaga: " << Tanulo_2.getHeight() << endl;
	cout << "A tanulo testsullya: " << Tanulo_2.getWeight() << endl;
	cout << "A tanulo BMI erteke: " << Tanulo_2.calculateBMI() << endl;

	return 0;

}
