/*
Írjon egy string tri_result(string fbe) függvényt, amely kiírja egy adott triatlon verseny gyõztesének az azonosítóját
(licence), és a cél-idejét; óra:perc:másodperc alakban.

A cél-idõ a következõ részeredményekbõl tevõdik össze: úszás + kerékpár + futás + depo.
A kiírás pontos formátumát a példa mutatja! A célba érkezett versenyzõk számát és a részidõket
egy adat-file tartalmazza, amelynek a létezését ellenõrizni kell!

A hibaüzenet formátumát a példa mutatja! Ennek az
állománynak az azonosítója lesz a tri_result függvény paramétere. Az adat-file elsõ sora egy pozitív egész szám, amely a
célba érkezettek száma. A további mindenegyes sora egy-egy sportolót azonosít és tartalmazza a részidejeit
másodpercben, a következõk szerint:
licence úszás-idõ kerékpár-idõ futás-idõ depó-idõ.
Az adatokat szóközök választják el egymástól! Pl.:
df-572ki 1500 4500 2500 125

Az adat-file elemeit tárolja el egy struktúra-tömbbe, amihez használja a megadott struct triathlete típust! A struktúratömböt
a dinamikus memóriába hozza létre! A versenyzõk kiszámolt cél-idejeit (másodpercben) az int sum tagváltozókba
mentsék el. Ezen adatokból kell megállapítani a gyõztes és az utolsó versenyzõ idejeit. Ugyanis a függvény visszatérési
értéke az utolsó versenyzõ licence legyen. Ha az adat-file nem létezik, akkor a visszatérési érték az ”N/A!” karaktersorozat
legyen! (A cerr << utasítást NE használják! moodle…)
*/

#include <iostream>
#include <fstream>

using namespace std;

struct triathlete {
	string license;
	int swim;
	int cycle;
	int run;
	int depo;
	int sum;
};

string tri_result(string fbe) {
	ifstream file(fbe);
	string lic = "N/A!";
	int db = 0;
	if (file.is_open()) {
		file >> db;
		triathlete* versenyzok = new triathlete[db];

		int max = INT_MIN;
		int min = INT_MAX;
		int elso = 0;
		int	utolso = 0;

		for (int i = 0; i < db; i++)
		{

			file >> versenyzok[i].license >> versenyzok[i].swim >> versenyzok[i].cycle >> versenyzok[i].run >> versenyzok[i].depo;
			versenyzok[i].sum = versenyzok[i].swim + versenyzok[i].cycle + versenyzok[i].run + versenyzok[i].depo;

			if (versenyzok[i].sum > max) {
				max = versenyzok[i].sum;
				utolso = i;
			}

			if (versenyzok[i].sum < min) {
				min = versenyzok[i].sum;
				elso = i;
			}

		}

		file.close();

		cout << versenyzok[elso].license << " => " << versenyzok[elso].sum / 3600 << ":" << versenyzok[elso].sum % 3600 / 60 << ":" << versenyzok[elso].sum % 3600 % 60 << "[h:m:s]" << endl;

			lic = versenyzok[utolso].license;
	}

	return lic;

}

int main()
{
	string file = "Chip.txt";
	cout << tri_result(file) ;
	return 0;
}
