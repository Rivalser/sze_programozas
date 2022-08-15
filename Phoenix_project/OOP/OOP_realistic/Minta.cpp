#include "Minta.h"

Minta::Minta() { //Hivatkozunk az osztályra "Minta" majd ::-al konkretizáljuk, hogy mit akarunk abból. Itt meghívjuk a Minta konstruktort.
	newHeight = 0;
	newWeight = 0.0;
}

Minta::Minta(string name, int height, double weight) {
	newName = name;
	newHeight = height;
	newWeight = weight;
}

string Minta::getName() const{
	return newName;
}

int Minta::getHeight() const{
	return newHeight;

}
double Minta::getWeight() const{
	return newWeight;
}

void Minta::setName(string nev) {
	newName = nev;
}
void Minta::setHeight(int magassag) {
	newHeight = magassag;
}
void Minta::setWeight(double suly) {
	newWeight = suly;
}

double Minta::calculateBMI() const{
	return newWeight/((newHeight / 100.0) * (newHeight / 100.0));
}