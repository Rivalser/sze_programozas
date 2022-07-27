/*
�rjon egy string tri_result(string fbe) f�ggv�nyt, amely ki�rja egy adott triatlon verseny gy�ztes�nek az azonos�t�j�t
(licence), �s a c�l-idej�t; �ra:perc:m�sodperc alakban.

A c�l-id� a k�vetkez� r�szeredm�nyekb�l tev�dik �ssze: �sz�s + ker�kp�r + fut�s + depo.
A ki�r�s pontos form�tum�t a p�lda mutatja! A c�lba �rkezett versenyz�k sz�m�t �s a r�szid�ket
egy adat-file tartalmazza, amelynek a l�tez�s�t ellen�rizni kell!

A hiba�zenet form�tum�t a p�lda mutatja! Ennek az
�llom�nynak az azonos�t�ja lesz a tri_result f�ggv�ny param�tere. Az adat-file els� sora egy pozit�v eg�sz sz�m, amely a
c�lba �rkezettek sz�ma. A tov�bbi mindenegyes sora egy-egy sportol�t azonos�t �s tartalmazza a r�szidejeit
m�sodpercben, a k�vetkez�k szerint:
licence �sz�s-id� ker�kp�r-id� fut�s-id� dep�-id�.
Az adatokat sz�k�z�k v�lasztj�k el egym�st�l! Pl.:
df-572ki 1500 4500 2500 125

Az adat-file elemeit t�rolja el egy strukt�ra-t�mbbe, amihez haszn�lja a megadott struct triathlete t�pust! A strukt�rat�mb�t
a dinamikus mem�ri�ba hozza l�tre! A versenyz�k kisz�molt c�l-idejeit (m�sodpercben) az int sum tagv�ltoz�kba
ments�k el. Ezen adatokb�l kell meg�llap�tani a gy�ztes �s az utols� versenyz� idejeit. Ugyanis a f�ggv�ny visszat�r�si
�rt�ke az utols� versenyz� licence legyen. Ha az adat-file nem l�tezik, akkor a visszat�r�si �rt�k az �N/A!� karaktersorozat
legyen! (A cerr << utas�t�st NE haszn�lj�k! moodle�)
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
