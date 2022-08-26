#include <iostream>

using namespace std;

int main()
{
	//A v�ltoz�k �s t�rsaik rendelkeznek egy mem�riac�mmel, ami meghat�rozza azok hely�t a mem�ri�ban.
	int a = 5, b = 3;
	//int* pA = &a, pB = &b; hib�s
	//Ha t�bb mutat�t akarunk egym�s mellett defini�lni, akkor azokat ugyan �gy el kell l�tni * jellel
	int* pA = &a, * pB = &b;

	cout << "Az 'a' valtozo erteke: " << a << "es cime: " << pA << endl; //& mem�riac�mre val� hivatkoz�s (referencia jel)
	/*
	A mem�riac�m egyedi.
	Ha egy m�sik blokkban van ugyan�gy int a, az m�r m�sik v�ltoz� �s m�s a mem�riac�me is.
	A mutat�k egy "speci�lis v�ltoz�" amiben el lehet t�rolni a mem�ria c�m�t
	int* - Intiger t�pus� v�ltoz�nak a mem�riac�m�t k�pes t�rolni
	Ha a mem�riac�men kereszt�l akarom el�rni az �rt�ket akkor * jelet rakunk el�, hogy a & -t feloldjuk

	Mutat�ra mutat� mutat�k
	
	Ahogy l�trehoztunk egy mutat�t, az�ltal automatikusan l�tre is hoztunk annak egy mem�riac�met
	Ezt a mem�riac�met �gyan�gy tudjuk el�rni, mint a fentit csak +1 *-ot haszn�lunk.
	*/
	int** pPA = &pA;

	//Ez a dinamikus t�mb�k �s t�rsaik v�gett fontos, hiszen erre az elvre �p�lnek
	//Ezek �rt�kre val� visszafejt�se �gyan �gy m�k�dik, vagyik annyi *-ot tesz�nk a ki�r�skor, ah�nyat deklar�l�skor haszn�ltunk

	return 0;
}
