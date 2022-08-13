#include <iostream>
#include <fstream> //f�jlkezel�s v�gett
#include <vector>
#include <string>

using namespace std;

void beolvas(vector<string> &v); //&v mivel m�dos�tjuk a vector-t
void fkiir(vector<string> v); // nem m�dos�tjuk csak ki�rjuk a vector tartalm�t

int main()
{
	vector<string> v;
	beolvas(v);
	fkiir(v);

	return 0;
}

void beolvas(vector<string>& v) {

	string aktSor;

	ifstream fin("szoveg.txt"); //Input file stream olvas�sra megnyitjuk a f�jlt, (amit kor�bban l�trehoztunk ennek a feladatnak a mapp�j�ba)

	while (!fin.eof())
	{
		getline(fin, aktSor); // Mivel f�jlb�l k�rj�k be ez�rt "fin" �s nem cin
		v.push_back(aktSor);
	}
	
	fin.close(); //Adott f�jlt megnyit�s ut�n mindig be kell z�rni
}

void fkiir(vector <string> v) {

	ofstream fout("masolat.txt"); //Az ofstream, ha nem l�tezik az adott file akkor megcsin�lja a c�lmapp�ba, vagy ha l�tezik akkor m�dos�tja azt.

	for (int i = 0; i < v.size(); i++)
	{
		fout << v[i] << endl;
	}
	fout.close();
}