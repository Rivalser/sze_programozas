#include <iostream>
#include "C++_H_Enum.h"

using namespace std;

int main()
{
	//"Adjunk nevet egy �rt�khez"
	//Nagy el�nye hogy bizonyos �rt�keket csoportos�t
	enum Szinek{PIROS,KEK=5,ZOLD};
	//enum T�pusn�v{v�ltoz�1,v�ltoz�2,v�ltoz�N};
	//Ezzel l�trehozunk egy saj�t v�ltoz�t amit valaminek elnevez�nk �s �rt�k�l adjuk neki
    //a saj�t sorsz�m�t vagy egy �ltalunk megadott �rt�ket
	Szinek alma = (Szinek)5;
	switch (alma)
	{
	case PIROS: cout << "Az alma piros!"<<endl;
		break;
	case KEK: cout << "Az alma fantorpikus!" << endl;
		break;
	case ZOLD: cout << "Az alma zold!" << endl;
		break;
	default:
		break;
	}
}
