#include <iostream>
#include <cstring>

using namespace std;


string unspaceString(string szoveg) {

	int n = szoveg.length();
	string modositottSzoveg = "";

	char* tomb = new char[n + 1];

	for (int i = 0; i < n; i++) {
		tomb[i] = szoveg[i];
	}

	for (int i = 0; i < n; i++)
	{
		if (tomb[i] != ' ') {
			modositottSzoveg += tomb[i];
		}
	}
	return modositottSzoveg;
}


int main()
{
	string sz�k�ztelen = "";
	sz�k�ztelen = unspaceString("E z E gy          Mondat.");
	cout << sz�k�ztelen.length()<<"\t";
	cout << sz�k�ztelen<<endl;
	string vmi;

	return 0;


}
