//alapp�lya beolvas pipa
//jatek vege - ink�bb bool j�t�k addig megy am�g a poz != jobb fels� sarok
//l�p�s beolvas�sok k�l�n f,l,j,b - ezeknek legyen bels� bool �rt�kei, hogy j�k-e. t�rjenek  vissza bool �rt�kkel ELS�NEK MEGN�ZI, HOGY FEL ESET�N PL. X+i J�-E HA NEM LE SE FUT
// �sszegzett l�p�s beolvas�, ami beolvassa h�ny f,l van azokat megh�vja, eredm�nyeket �sszegez i-t ad vissza
// �sszegzett l�p�s beolvas�, ami beolvassa h�ny j,b van azokat megh�vja, eredm�nyeket �sszegez j-t ad vissza
// hogy melyik f�ggv�nyt h�vja meg az a bemenet hossz�t�l f�ggj�n
//l�ptet� fgv. kap k�t �rt�ket, i �s j majd, ezekkel l�p a kell� helyre
// poz�ci� t�rl� fgv.
//random l�p�s fgv. random �rt�k 1,2,3,4 majd switch-case megh�vja 1 eset�n f 2... ha nincs j� l�p�s nem l�p
// felhaszn�l� �ll�tsa be a p�ly�t, nem lesz mert ez j� neki :3333
//
// M�DOS�TOTT TERV:
// jatek vege - pipa
// p�lya beolvas - pipa
// p�lya bet�lt - pipa
// l�p�s ellen�rz�s - pipa
// l�p�s feldolgoz� x �rt�kekre x �rt�k�t adja vissza - pipa
// l�p�sfeldolgoz� y �rt�kekre y �rt�k�t adja vissza - pipa
// l�p�st elv�gz� fgv. O akt. hely�t t�rli, �j hely�re berakja - pipa : Ez eddig 3-as megold�s
// random l�p�s - megn�zi, hogy k�r�l�tte hol van hely, ha van vmelyikre odal�p - PIPAAAAAAAAAAAAAAA - 4-es megold�s
// j�t�kos maga �ll�tja be a p�ly�t - pipa - 5-�s

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

char matrix[5][5]{ };



struct jatekosPoz
{
	int x = 4; //alapon 4 
	int y = 0; //alapon 0
};
jatekosPoz jatekos;
void palyaBetolt() {
	ifstream beolv;
	beolv.open("palya.txt");
	if (beolv.is_open())
	{
		string sor;
		for (int i = 0; i < 5; i++)
		{
			getline(beolv, sor);
			for (int j = 0; j < 5; j++)
			{
				matrix[i][j] = sor[j];
			}
		}

	}
	else
	{
		cout << "Valami nem j�.";
	}
}

string palyaModositEll() {

	bool ok = false;
	string sz;  // j� p�lda: vt232 
	do
	{
		cout << "Adja meg a kivant modositas helyes kodjat. Minta: vt232\n";
		cin >> sz;
		int vTav = 0;
		int fTav = 0;
		if ((sz[2] >= '0' && sz[2] <= '4') && (sz[3] >= '0' && sz[3] <= '4')) {
			//v�zszintes:
			vTav = 4 - (sz[2] - '0');
			//cout << vTav;
			//cout << endl;
			//vf�gg�leges:
			fTav = 4 - (sz[3] - '0');
			//cout << fTav;
			//cout << endl;
		}

		//2 if egy v �s egy f eset�re v eset�n jobb o.-i t�v m�g f eset�n az als� vonalig val� hossz haszn�latos
		if (sz[0] == 'v') {

			if ((sz[1] == 'r' || sz[1] == 't') && (sz[2] >= '0' && sz[2] <= '4') && (sz[3] >= '0' && sz[3] <= '4') && (sz[4] >= '1' && sz[4] <= '0' + vTav)) { // && (sz[2] == '7') && ('0' < sz[3] <= '5') && ('0' < sz[4] <= '5')
				ok = true;
			}
		}
		else if (sz[0] == 'f')
		{
			//char(fTav)
			if ((sz[1] == 'r' || sz[1] == 't') && (sz[2] >= '0' && sz[2] <= '4') && (sz[3] >= '0' && sz[3] <= '4') && (sz[4] >= '1' && sz[4] <= '0' + fTav)) { // && (sz[2] == '7') && ('0' < sz[3] <= '5') && ('0' < sz[4] <= '5')
				ok = true;
			}

		}
		if (sz.length() != 5) // az�rt itt ellen�rizz�k mert ha az if-else el�tt tenn�nk, nem �rne semmit, mert m�r akkor is false az �rt�k �s amikor bel�p a vizsg�l�sba, azt is n�zi ami nincs...
			ok = false;

	} while (!ok);

	return sz;
}

void palyaSzerkeszto(string kod) { // Ez, a palyaModositEll() �s palyaAllas() addig ism�tl�dj�n amig kesz parancsot nem kap
	// vt232
	char kitoltes = kod[1] == 'r' ? 'X' : '.';
	int xPos = kod[2] - '0';
	int yPos = kod[3] - '0';
	int meddig = kod[4] - '0';

	if (kod[0] == 'v') {

		for (int i = 0; i < meddig; i++)
		{
			matrix[xPos][yPos+i] = kitoltes;
		}

	}
	else if (kod[0] == 'f') {

		for (int i = 0; i < meddig; i++)
		{
			matrix[xPos + i][yPos] = kitoltes;
		}

	}
}

void palyaAllas() {
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << matrix[i][j];
		}
		cout << endl;
	}
}

string merreLep() {
	string irany; //do whileba....
	//jatekosPoz jatekos;
	cout << "Merre lep? ";
	cout << "Labirintus jatek, jusson el a jobb felso sarokba. Navigalas:\n Fel: f, Le: l, Balra: b, Jobbra: j, Random lepes: r,\n Kombinalt lepesek lehetnek pl.: fljbjj\n";
	cin >> irany;
	int kezdetiX = jatekos.x;
	int kezdetiY = jatekos.y;
	int lepesDb = irany.length();

	int i = 0;
	while (i < lepesDb)
	{
		//ide m�g egy if r-re, ha r, akkor csin�l egy random sz�mot 1-4 k�z�tt, amit megfeleltet egy bet�nek, azt hozz�f�zi az ir�nyhoz, �jra lefuttatja az eg�szet, de csak az irany[1]-re
		if (lepesDb == 1 && irany[i] == 'r') {
			string valasztek = "";
			if (matrix[(jatekos.x) - 1][jatekos.y] == '.') //sima if-ek hisz az �ssz. lehet�s�get meg kell vizsg�lni
				valasztek += 'f';
			if (matrix[jatekos.x + 1][jatekos.y] == '.')
				valasztek += 'l';
			if ((matrix[jatekos.x][jatekos.y + 1] == '.') && (jatekos.y + 1 > 0))
				valasztek += 'j';
			if ((matrix[jatekos.x][jatekos.y - 1] == '.') && (jatekos.y - 1 < 4))
				valasztek += 'b';
			//	char valasztek[] = "fljb"; // v�ltoztatni, hogy mib�l v�laszthat
			char randomChar = valasztek[rand() % valasztek.length()]; //laz�n fasz�n m�kszik :3
		//	cout << randomChar;
			irany += randomChar;
			lepesDb = irany.length();
			i++;
		}
		else if (irany[i] == 'f') {
			if (matrix[(jatekos.x) - 1][jatekos.y] == '.') {
				jatekos.x -= 1;
				i++;
			}
			else {
				jatekos.x = kezdetiX;
				jatekos.y = kezdetiY;
				i = 0;
				cin >> irany;
				//eredeti re vissza�ll�tani x-et y-t, ha nem j�, hiszen az �rt�k torzulhatott, i-t 0-ra, hisz m�r egy m�sikat sz�molt, �s �jra bek�ri, mert szar amit kapott
				lepesDb = irany.length(); //hogy kurv�ra ne essen v�gtelen ciklusba :3
			}
		}
		else if (irany[i] == 'l')
		{
			if (matrix[jatekos.x + 1][jatekos.y] == '.') {
				jatekos.x += 1;
				i++;
			}
			else {
				jatekos.x = kezdetiX;
				jatekos.y = kezdetiY;
				i = 0;
				cin >> irany;
				lepesDb = irany.length();
			}
		}
		else if (irany[i] == 'j')
		{
			if ((matrix[jatekos.x][jatekos.y + 1] == '.') && (jatekos.y + 1 > 0 && jatekos.y + 1 <= 4)) { //&& (jatekos.y+1 > 0 && jatekos.y + 1 <= 4) ezn�lk�l ugr�lgatna a sorok k�zt (j oldalr�l)
				jatekos.y += 1;
				i++;
			}
			else {
				jatekos.x = kezdetiX;
				jatekos.y = kezdetiY;
				i = 0;
				cin >> irany;
				lepesDb = irany.length();
			}
		}
		else if (irany[i] == 'b')
		{
			if ((matrix[jatekos.x][jatekos.y - 1] == '.') && (jatekos.y - 1 < 4 && jatekos.y - 1 >= 0)) {  // (jatekos.y - 1 != 4)
				jatekos.y -= 1;																				//(matrix[jatekos.x][jatekos.y - 1] != matrix[jatekos.x][jatekos.y - 1])
				i++;
			}
			else {
				jatekos.x = kezdetiX;
				jatekos.y = kezdetiY;
				i = 0;
				cin >> irany;
				lepesDb = irany.length();
			}
		}
		else
		{
			jatekos.x = kezdetiX;
			jatekos.y = kezdetiY;
			i = 0;
			cin >> irany;
			lepesDb = irany.length();
		}
	}

	return irany;

}

int xErtekek(string irany) {
	int xErtek = jatekos.x;
	for (int i = 0; i < irany.length(); i++)
	{
		if (irany[i] = 'f')
			xErtek -= 1;
		if (irany[i] = 'l')
			xErtek += 1;

	}
	return xErtek;
}

int yErtekek(string irany) {
	int yErtek = jatekos.y;
	for (int i = 0; i < irany.length(); i++)
	{
		if (irany[i] = 'b')
			yErtek -= 1;
		if (irany[i] = 'j')
			yErtek += 1;

	}
	return yErtek;
}


void pozCsere(int x, int y) {

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++) {
			if (matrix[i][j] == 'O')
				matrix[i][j] = '.';
		}
	}

	matrix[x][y] = 'O';

}

int main()
{
	//Akar-e szerkeszteni?
	bool jatekVege = false;
	palyaBetolt();
	//	cout << "Labirintus jatek, jusson el a jobb felso sarokba. Navigalas:\n Fel: f, Le: l, Balra: b, Jobbra: j, Random lepes: r,\n Kombinalt lepesek lehetnek pl.: fljbjj\n";
	palyaAllas();
	char k�v�n = false;
	cout << "Kivnja-e szerkeszteni a palyat?\nHa igen, nyomja meg az 'i' billentyutt, minden mas billentyu esetben\na szerkesztes nem megy vegbe es automatikusan az alap jatek indul el.\n";
	cin >> k�v�n;
	if (k�v�n == 'i') {
			bool szerkVege = true;
		do
		{
			cout << "Hasznalat: v a vizszintes, f a fuggoleges vonalhoz. Majd r a rajzolashoz, t a torleshez.\nKovetkezo ket szam a kezdopont x es y koordinatai.\nAz utolso karakter a vonal hosszat hatarozza meg.";
			string kod = palyaModositEll();
			palyaSzerkeszto(kod);
			palyaAllas();
			cout << "A modositas a \"kesz\" parancsig megy\nIrjon be barmi mast a folytatashoz.\nFIGYELEM: Ha most kilep kesobb nem tud valtoztatni!\n";
			string kesz;
			cin >> kesz;
			if (kesz == "kesz")
				szerkVege = false;
		} while (szerkVege);

	}
	do
	{
		string lep = merreLep();
		int x = xErtekek(lep);
		int y = yErtekek(lep);
		system("CLS"); //t�rli a konzolt
		pozCsere(x, y);
	//	cout << "Labirintus jatek, jusson el a jobb felso sarokba. Navigalas:\n Fel: f, Le: l, Balra: b, Jobbra: j, Random lepes: r,\n Kombinalt lepesek lehetnek pl.: fljbjj\n";
		palyaAllas();
		if (matrix[0][4] == 'O') {
			jatekVege = true;
			cout << "Jatek vege.";
		}
	} while (!jatekVege);

	//cout << lep;
}
