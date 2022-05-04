/*
	* 1. Mátrix, adat tárolásra. globális(kiegészítő mellék adat, ritkéán változtatok) v. nem globális(minden más)
	*       -pontok, és X és O
	* 2. magasság szélesség -> globális vált.
	* 3. vége-e
	* 4. módosítás
	* 5. kiírás
	*/


	//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! ctrl + k+ d - behúzás és hasonlók módosítása!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
#include <iostream>
using namespace std;

#define say cout << 
#define ask cin >>

int LEN_I;
int LEN_J;
char matrix[20][20]{ }; // \0-kal tölti fel "string végékkel", ez a mátrix max. mérete, ha ettől kissebbet ad meg a felhasználó akkor a többi mint memória szemét lesz jelen.

bool tryPozicióMódosítás(int i, int j, int korszam) { //try előtagot akkor szokás kirakni, ha megvizsgáljuk, hogy amit akarunk megvalósítható-e akkor hajrá, ha nem akk adjon vissza hamisat

	if ((i < 0 || i >= LEN_I) || (j < 0 || j >= LEN_J)) {
		return false;
	}

	char aktChar = korszam % 2 != 0 ? 'X' : 'O';
	bool szabadHely = matrix[i][j] == '.';

	if (szabadHely) {
		matrix[i][j] = aktChar;
	}

	return szabadHely;
}




bool jatekVege(int korszam) {
	int pontokSzama = 0;
	bool vege = false;
	char aktChar = korszam % 2 != 0 ? 'X' : 'O';

	for (int i = 0; i < LEN_I; i++) {

		for (int j = 0; j < LEN_J; j++) {

			if (matrix[i][j] == '.') {
				pontokSzama++;
			}

			if (matrix[i][j] == aktChar) {
				int karakterDarab = 0;
				//vízszintes
				if (j + 5 < LEN_J) { //túlindexelés problémája miatt
					for (int k = 0; k < 5; k++) {
						if (matrix[i][j + k] == aktChar)
							karakterDarab++;
					}
					if (karakterDarab == 5) {
						return true;
					}
					karakterDarab = 0;
				}

				//függőleges
				if (i + 5 < LEN_I) {

					for (int k = 0; k < 5; k++) {
						if (matrix[i + k][j] == aktChar)
							karakterDarab++;
					}
					if (karakterDarab == 5) {
						return true;
					}
					karakterDarab = 0;

				}

				//főátló
				if ((i + 5 < LEN_I) && (j + 5 < LEN_J)) {

					for (int k = 0; k < 5; k++) {
						if (matrix[i + k][j + k] == aktChar)
							karakterDarab++;
					}
					if (karakterDarab == 5) {
						return true;
					}
					karakterDarab = 0;

				}

				//mellék átló
				if ((i - 5 >= 0) && (j + 5 < LEN_J)) {
					for (int k = 0; k < 5; k++) {
						if (matrix[i - k][j + k] == aktChar)
							karakterDarab++;
					}
					if (karakterDarab == 5) {
						return true;
					}
					karakterDarab = 0;

				}

			}

		}
	}

	if (pontokSzama == 0) {
		return true;
	}
	return vege;
}


int szamBeker() {
	int szam;
	ask szam;
	return szam;
}

char betuBeker() {
	char betu;
	ask betu;
	return betu;
}

//Létrehozzuk az alaptáblát ami . -ból áll. Ezek elé kiírjuk a körítést. Szóközök, oszlop és sorszámok
void alapTáblaKiírás() {

	say "  ";
	for (int i = 0; i < LEN_J; i++) {
		say(char)('A' + (i));
	}
	say endl;


	for (int i = 0; i < LEN_I; i++)
	{
		//Ha kissebb mint 9 akkor az aktuális szám elé írjon ki 0-t, különben csak a számot.
		if (i < 9) {
			say 0;
		}

		say i + 1;
		//Mivel a pontok és a számok egy sorban vannak, ezért ezt egymásba ágyazzuk.
		for (int j = 0; j < LEN_J; j++) {
			say matrix[i][j];
		}
		say endl;
	}
}

int tablaMeretBeker(int length) {
	bool megfelelő = false;
	do
	{
		if (length >= 7 && length <= 20) {
			megfelelő = true;
		}
		else {
			say"Nem jo a megadott szam.\n"
				<< "A megadhato szamok tartomanya: 7-20.\n"
				<< "Adja meg a megfelelo szamot.\n";
			ask length;
		}
	} while (!megfelelő);
	return length;
}


int main()
{
	int körszámláló = 0;
	//Bekérést ellenőrző függvény. beker(LEN_I) beker(LEN_J)
	say "Adja meg a sorok szamat!\n";
	ask LEN_I;
	LEN_I = 2;
	//LEN_I = tablaMeretBeker(LEN_I);
	say "Adja meg az oszlopok szamat!\n";
	ask LEN_J;
	LEN_J = 2;
//	LEN_J = tablaMeretBeker(LEN_J);
	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 20; j++)
			matrix[i][j] = '.';
	}


	do
	{
		körszámláló++; //  páratlan ? X : O
		alapTáblaKiírás();
		int sor;
		char oszlop;
		do
		{
			say(körszámláló % 2 != 0 ? "Elso jatekos(X), sor: " : "Masodik jatekos(O), sor: ");
			sor = szamBeker();
			say "Oszlop: ";
			oszlop = betuBeker();

		} while (!tryPozicióMódosítás(sor - 1, (int)oszlop - 65, körszámláló));


	} while (!jatekVege(körszámláló));
	alapTáblaKiírás();
	if (körszámláló == LEN_I * LEN_J) {
		say "Döntetlen.";
	}
	else {
		say(körszámláló % 2 != 0 ? "Elso jatekos nyert." : "Masodik jatekos nyert.");

	}

}