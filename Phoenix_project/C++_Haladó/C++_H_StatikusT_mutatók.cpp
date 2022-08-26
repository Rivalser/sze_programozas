#include <iostream>

using namespace std; 

int main()
{

	//Statikus tömb
	int s_tomb[5];
	for (int i = 0; i < 5; i++)
	{
		cin >> s_tomb[i];
	}
	for (int i = 0; i < 5; i++)
	{
		cout <<" s_tomb["<<i<<"] = "<<*(s_tomb+i)<<" "<<s_tomb+i<<endl;
	}
	// A tömb 0. elemének a címe reprezentálja az egész tömböt.
	//Ezért ha ki akarjuk írni a tombot cout<<s_tomb akkor a 0. elem memóriacímét kapjuk vissza
	// A fordító amikor meglátja a tomb[i]-t azt maga értelmezésére átalakítja *(tomb+i) -re
}
