/*
* 
* A halad�bb/val�s OOP eset�n nem egy f�jlban dolgozunk
* Teh�t (Microsoft Visual Studio-ban) Source Files ->Add->Class
*/

//Az al�bbi a Minta.h-b�l van m�solva

/*#ifndef MINTA_H  //ha m�g nincs defini�lva
#define MINTA_H // akkor defini�lja �s v�gezze el mindazt ami ez �s az #endif k�zt �ll
			   // Amikor m�sodj�ra van megh�vva akkor �tugorja a az ifndef-et
			  // Az �tk�z�sek elker�l�s��rt van a file nev�vel_H jelezve

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
