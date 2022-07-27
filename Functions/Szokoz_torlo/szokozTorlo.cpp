#include <iostream>
#include <cstring>

using namespace std;
//Valami�rt nem m�k�dik felhaszn�l� �ltal megadott sz�vegre. MI�RT?
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
	string pelda;
	
	string sz�k�ztelen = "A k kor";
	
	sz�k�ztelen = unspaceString(sz�k�ztelen);
	cout << sz�k�ztelen;

	return 0;
}