#include <iostream>
#include <fstream> //fájlkezelés végett
#include <vector>
#include <string>

using namespace std;

void beolvas(vector<string> &v); //&v mivel módosítjuk a vector-t
void fkiir(vector<string> v); // nem módosítjuk csak kiírjuk a vector tartalmát

int main()
{
	vector<string> v;
	beolvas(v);
	fkiir(v);

	return 0;
}

void beolvas(vector<string>& v) {

	string aktSor;

	ifstream fin("szoveg.txt"); //Input file stream olvasásra megnyitjuk a fájlt, (amit korábban létrehoztunk ennek a feladatnak a mappájába)

	while (!fin.eof())
	{
		getline(fin, aktSor); // Mivel fájlból kérjük be ezért "fin" és nem cin
		v.push_back(aktSor);
	}
	
	fin.close(); //Adott fájlt megnyitás után mindig be kell zárni
}

void fkiir(vector <string> v) {

	ofstream fout("masolat.txt"); //Az ofstream, ha nem létezik az adott file akkor megcsinálja a célmappába, vagy ha létezik akkor módosítja azt.

	for (int i = 0; i < v.size(); i++)
	{
		fout << v[i] << endl;
	}
	fout.close();
}