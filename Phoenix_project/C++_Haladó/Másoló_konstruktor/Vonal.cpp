#include "Vonal.h"


Vonal::Vonal(double hossz = 0, string szin = "") {
	this->hossz = hossz;
	this->szin = szin;
	//Dinamikushoz
	tomb = new int[0];
	meret = 0;
}

Vonal::Vonal(const Vonal& obj) {
	this->hossz = obj.hossz;
	this->szin = obj.szin;
	/*
	this->tomb = tomb : ez annyit tesz, hogy v1 v2 ugyan arra a
	memóriacímre mutat és ha egyikben módosítok valamit
	akkor a másikban is fog
	Ezért érdemesebb az alábbit:
	Ez azt csinálja, hogy  a v1-et lemásolja,
	és egy másik helyre újrafoglalja.
	Így az adatmódosításokkor nincsenek egymással hatásra
	*/
	this->tomb = new int[obj.meret];
	this->meret = obj.meret;
	for (int i = 0; i < obj.meret; i++)
	{
		this->tomb[i] = obj.tomb[i];
	}
}

Vonal::~Vonal() {
	delete[] tomb;
}

void Vonal::push_back(int szam) {
	int* tmp = new int[meret+1];
	for (int i = 0; i < meret; i++)
	{
		tmp[i] = tomb[i];
	}
	tmp[meret++] = szam;
	delete[] tomb;
	tomb = tmp;
}

void Vonal::getData() const {
	cout << "Hossz: " << hossz << " Szin: " << szin << endl;
	for (int i = 0; i < meret; i++)
	{
		cout << tomb[i] << endl;
	}
}

/*
const: Mivel azt akarjuk, hogy az eredeti tulajdonságaival bírjon,
és hogy ne hasson vissza az eredetire az adatok változtatásával
így a const-al megakadályozzuk azt.
Vonal: mint típus, bár const Vonal& így egybe a típus
&: A másoló cucc, hogy az eredetit másoljuk és használjuk, hogy ne
itt keletkezzen és menjék feledésbe
obj: ugye az elnevezése, mint fentebb a szin (a stringnek)
*/