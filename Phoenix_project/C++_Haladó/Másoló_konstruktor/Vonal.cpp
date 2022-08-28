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
	mem�riac�mre mutat �s ha egyikben m�dos�tok valamit
	akkor a m�sikban is fog
	Ez�rt �rdemesebb az al�bbit:
	Ez azt csin�lja, hogy  a v1-et lem�solja,
	�s egy m�sik helyre �jrafoglalja.
	�gy az adatm�dos�t�sokkor nincsenek egym�ssal hat�sra
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
const: Mivel azt akarjuk, hogy az eredeti tulajdons�gaival b�rjon,
�s hogy ne hasson vissza az eredetire az adatok v�ltoztat�s�val
�gy a const-al megakad�lyozzuk azt.
Vonal: mint t�pus, b�r const Vonal& �gy egybe a t�pus
&: A m�sol� cucc, hogy az eredetit m�soljuk �s haszn�ljuk, hogy ne
itt keletkezzen �s menj�k feled�sbe
obj: ugye az elnevez�se, mint fentebb a szin (a stringnek)
*/