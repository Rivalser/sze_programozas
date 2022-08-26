#include <iostream>
#include "C++_H_Enum.h"

using namespace std;

int main()
{
	//"Adjunk nevet egy értékhez"
	//Nagy elõnye hogy bizonyos értékeket csoportosít
	enum Szinek{PIROS,KEK=5,ZOLD};
	//enum Típusnév{változó1,vûltozó2,vûltozóN};
	//Ezzel létrehozunk egy saját változót amit valaminek elnevezünk és értékül adjuk neki
    //a saját sorszámát vagy egy általunk megadott értéket
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
