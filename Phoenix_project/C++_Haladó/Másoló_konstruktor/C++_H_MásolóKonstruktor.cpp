#include <iostream>
#include "Vonal.h"

using namespace std;


int main()
{
	Vonal v1(5, "piros");
	v1.push_back(4);
	v1.push_back(6);

	Vonal v2(v1); //Igazából ez egy felüldefiniálás *is* és jelen esetben egszerűbb a Vonal v2 = v1;
	/*
	Remek, de hogy működik dinamikus adatoknál?
	*/
	v2.getData();
	return 0;
}
