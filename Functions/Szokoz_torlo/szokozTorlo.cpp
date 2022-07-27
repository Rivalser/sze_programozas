#include <iostream>
#include <cstring>

using namespace std;
//Valamiért nem mûködik felhasználó által megadott szövegre. MIÉRT?
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
	
	string szóköztelen = "A k kor";
	
	szóköztelen = unspaceString(szóköztelen);
	cout << szóköztelen;

	return 0;
}