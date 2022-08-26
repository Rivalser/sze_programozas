#include <iostream>

using namespace std;

int main()
{
	//A változók és társaik rendelkeznek egy memóriacímmel, ami meghatározza azok helyét a memóriában.
	int a = 5, b = 3;
	//int* pA = &a, pB = &b; hibás
	//Ha több mutatót akarunk egymás mellett definiálni, akkor azokat ugyan úgy el kell látni * jellel
	int* pA = &a, * pB = &b;

	cout << "Az 'a' valtozo erteke: " << a << "es cime: " << pA << endl; //& memóriacímre való hivatkozás (referencia jel)
	/*
	A memóriacím egyedi.
	Ha egy másik blokkban van ugyanúgy int a, az már másik változó és más a memóriacíme is.
	A mutatók egy "speciális változó" amiben el lehet tárolni a memória címét
	int* - Intiger típusú változónak a memóriacímét képes tárolni
	Ha a memóriacímen keresztül akarom elérni az értéket akkor * jelet rakunk elé, hogy a & -t feloldjuk

	Mutatóra mutató mutatók
	
	Ahogy létrehoztunk egy mutatót, azáltal automatikusan létre is hoztunk annak egy memóriacímet
	Ezt a memóriacímet úgyanúgy tudjuk elérni, mint a fentit csak +1 *-ot használunk.
	*/
	int** pPA = &pA;

	//Ez a dinamikus tömbök és társaik végett fontos, hiszen erre az elvre épülnek
	//Ezek értékre való visszafejtése úgyan úgy mûködik, vagyik annyi *-ot teszünk a kiíráskor, ahányat deklaráláskor használtunk

	return 0;
}
