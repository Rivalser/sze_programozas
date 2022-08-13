#include <iostream>
#include <fstream>
#include <sstream> //szétválasztáshoz
#include <string>
using namespace std;

int main()
{

	string aktSor;
	ifstream fin("szamok.txt");
	ofstream fout("max.txt");
	while (!fin.eof())
	{
		getline(fin, aktSor);
		if (aktSor.size() == 0) {
			fout << "A sorban nem szerepel szam!" << endl;
		}
		else
		{
			istringstream szamok(aktSor);
			int szam, max;
			szamok >> max; //Az első számot belerakjuk a maxba és ahoz vizsonyítunk majd
			while (szamok >> szam)
			{
				if (szam > max)
					max = szam;
			}
			fout << max << endl;
		}
	}
	return 0;
}
