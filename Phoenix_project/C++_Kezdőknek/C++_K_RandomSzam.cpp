#include <iostream> //fejl�c�llom�ny
#include <cstdlib> //Ebben van az alapb�l be�p�tett randomf�ggv�ny
#include <ctime>	//Ebben van az srand

using namespace std;

int main()
{
	srand(time(0)); //Az�rt time mert az �r�b�l van gener�lva. Alapesetben nagyon magas sz�mot ad

	int a = rand() % 10 + 6; //Marad�kos oszt�s v�gett 0 �s 9 k�z�tt lesz az eredm�ny.
						//Ez�rt 1-et hozz�adva 1-10 k�z� esik a v�letlensz�m tartom�nya
	/*
	Hogy saj�t tartom�nyt hozzunk l�tre pl 6-15.
	Kivonjuk a kissebbet a nagyobb�l �s hozz�adunk 1-et hogy meglegyen az 1-10 es.
	Majd hozz�adjuk a legkissebb megengedett sz�mot, hogy a tartom�nyt eltoljuk. 
	*/
	cout << a << endl;

	//Random val�s sz�m

	//[-20;30] -> 30--20=50(+1) ->51

	double b = (rand() % 5001 - 2000) / 100.0; //Hogy a tizedesek sz�m�t n�velj�k, n�velj�k a 0-k sz�m�t az els� sz�mjegy ut�n 

	cout << b;

	return 0;
}

