#include <iostream>
#include <string>

using namespace std;
// C++: You just can not change/delete the space chars from a string to manage all the signs in it. This is illegal..
//Miért nem működik felhasználó által megadott szöveggel?
string charsChangeInString(string szoveg, char mit, char mire) {

	int n = szoveg.length();
	string modositottSzoveg = "";

	char* tomb = new char[n + 1];

	for (int i = 0; i < n; i++) {
		tomb[i] = szoveg[i];
	}

	for (int i = 0; i < n; i++)
	{
		if (tomb[i] == mit) {
			tomb[i] = mire;
		}
		modositottSzoveg += tomb[i];
	}
	return modositottSzoveg;
}

int main()
{
	string s;
	getline(cin,s);
	string vmi = "";
	vmi = charsChangeInString(s, ' ', '!');
	cout << vmi;


	return 0;
}