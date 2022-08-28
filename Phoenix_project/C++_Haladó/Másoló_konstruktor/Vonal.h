#pragma once

#include <iostream>
#include <string>

using namespace std;

class Vonal {
public:
	Vonal(double, string);
	Vonal(const Vonal&); //másoló konstruktor
	//Mivel most már dinamikus, kell egy destruktor
	~Vonal();
	//Tömb növeléséhez

	void push_back(int);

	void getData() const;
private:
	double hossz;
	string szin;
	int* tomb;
	int meret;
	//Dinamikushoz

};

