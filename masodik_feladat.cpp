/*�rjon egy programot, amely 2 db felhaszn�l�i f�ggv�nyt haszn�l. Az egyik az int feltolt(char s_tb[]),
amely felt�lt egy karakter t�mb�t (1. param�ter) �kezet n�lk�li sz�veggel az ENTER billenty� le�t�s�ig, vagy maximum 50
db karakterig. Bek�r�si inform�ci�k �s hiba�zenetek ki�r�sa nem kell! A t�mb hossz�t szimbolikus �lland�val �ll�tsa be. A
f�ggv�ny visszat�r�si �rt�ke a felt�lt�tt t�mb hossza legyen. A m�sik f�ggv�ny a void torol(char s_tb[], int h), pedig a
felt�lt�tt t�mb (1. param�ter) minden m�sodik elem�t t�r�lje, majd az �gy m�dos�tott t�mb tartalm�t �rja is ki. A torol
f�ggv�ny 2. param�tere a feltolt f�ggv�ny visszat�r�si �rt�ke.
*/
#include <iostream>


using namespace std;
#define N 50

int feltolt(char s_tb[]) {
	char aktChar;
	int array_LEN;
	bool ok = true;

	for (int i = 0; i < N; i++)
	{
		s_tb[i] = '\0';
	}

	int i = 0;
	do
	{
		cin.get(s_tb[i]);
		i++;

	} while (s_tb[i - 1] != '\n' && i < N); //i-1 mivel az i-t m�r n�velt�k


	return array_LEN = strlen(s_tb);
}


void torol(char s_tb[], int h) {
	string seged;
	int j = 0;
	for (int i = 0; i < h - 1; i++)
	{
		if (i % 2 == 0) {
			seged += s_tb[i];
		}
	}
//	cout << seged;
//	cout << endl;
//	cout << "********\n";
	for (int i = 0; i < seged.length(); i++)
	{
		s_tb[i] = seged[i];
		cout << s_tb[i];
	}

}


int main()
{
	char s_tb[N];
	int szam = feltolt(s_tb);
	torol(s_tb, szam);
	//cout << szam;
	return 0;
}