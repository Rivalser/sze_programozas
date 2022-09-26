#pragma once
#include <string>
#include <iostream>

class tri_race
{
public:

	tri_race();

	tri_race(std::string azonosito, int uszas, int bringa, int futas, int depo_ido, int jovairas);

	~tri_race();

	tri_race& setSum(int extraIdo);
	
	tri_race& kiir_rajt();

	tri_race& kiir_cel();


	int getIj()const; //idojavairas

private:
	std::string azonosito;
	int uszas;
	int bringa;
	int futas;
	int depo_ido;
	int jovairas;
	int sum;
	int h;
	int p;
	int mp;
	const int ora;
	const int perc;
};

