#pragma once

#include <iostream>
#include <string>

using namespace std;

class Vonal {
public:
	Vonal(double, string);
	Vonal(const Vonal&); //m�sol� konstruktor
	//Mivel most m�r dinamikus, kell egy destruktor
	~Vonal();
	//T�mb n�vel�s�hez

	void push_back(int);

	void getData() const;
private:
	double hossz;
	string szin;
	int* tomb;
	int meret;
	//Dinamikushoz

};

