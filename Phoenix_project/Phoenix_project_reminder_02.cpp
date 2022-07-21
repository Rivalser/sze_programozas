
/*
�rjon egy programot, amely 2 db felhaszn�l�i f�ggv�nyt haszn�l.

Az egyik az int feltolt(char s_tb[]), amely felt�lt egy karakter t�mb�t (1. param�ter) �kezet n�lk�li sz�veggel az ENTER billenty� le�t�s�ig,
vagy maximum 50 db karakterig. Bek�r�si inform�ci�k �s hiba�zenetek ki�r�sa nem kell! A t�mb hossz�t szimbolikus �lland�val �ll�tsa be.
A f�ggv�ny visszat�r�si �rt�ke a felt�lt�tt t�mb hossza legyen.

A m�sik f�ggv�ny a void torol(char s_tb[], int h), pedig a felt�lt�tt t�mb (1. param�ter) minden m�sodik elem�t t�r�lje,
majd az �gy m�dos�tott t�mb tartalm�t �rja is ki.
A torol f�ggv�ny 2. param�tere a feltolt f�ggv�ny visszat�r�si �rt�ke.
*/

#include <iostream>

#define MAX 50

using namespace std;

int feltolt(char s_tb[]) {

	char aktChar;
	cin.getline(s_tb, MAX);

	int i = 0;
	while (s_tb[i] != '\0')
	{
		i++;
	}
	return i;
}

void torol(char s_tb[], int h) {

	int j = 0;
	for (int i = 0; i < h; i++)
	{
		if (i % 2 == 0) {
			s_tb[j] = s_tb[i];
			cout << s_tb[j];
			j++;
		}

	}

}

int main()
{
	char ar[MAX];
	int num = feltolt(ar);

	torol(ar, num);

	return 0;
}
