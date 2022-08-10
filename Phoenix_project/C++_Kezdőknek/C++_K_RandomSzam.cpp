#include <iostream> //fejlécállomány
#include <cstdlib> //Ebben van az alapból beépített randomfüggvény
#include <ctime>	//Ebben van az srand

using namespace std;

int main()
{
	srand(time(0)); //Azért time mert az órából van generálva. Alapesetben nagyon magas számot ad

	int a = rand() % 10 + 6; //Maradékos osztás végett 0 és 9 között lesz az eredmény.
						//Ezért 1-et hozzáadva 1-10 közé esik a véletlenszám tartománya
	/*
	Hogy saját tartományt hozzunk létre pl 6-15.
	Kivonjuk a kissebbet a nagyobból és hozzáadunk 1-et hogy meglegyen az 1-10 es.
	Majd hozzáadjuk a legkissebb megengedett számot, hogy a tartományt eltoljuk. 
	*/
	cout << a << endl;

	//Random valós szám

	//[-20;30] -> 30--20=50(+1) ->51

	double b = (rand() % 5001 - 2000) / 100.0; //Hogy a tizedesek számát növeljük, növeljük a 0-k számát az elsõ számjegy után 

	cout << b;

	return 0;
}

