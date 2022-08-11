#include <iostream>
#include <string>

using namespace std;

int main()
{
	int a;

	string str, str2 = "alma";
	cout << "Adj meg egy stringet!" << endl;
	getline(cin, str);
	str.insert(3, str2); //hányadik pozíciótól mit rakjon be
	str.insert(3, 3, 'a'); //3. poz-tól 3 db 'a' karaktert rak be
	str.erase(3, 2); //3. poz-tól 2 karaktert töröl
	str2 = str.substr(5, 3); //5. poztól 3 db karaktert vág ki (fehérkaraktert is)
	str.replace(3, 2, str2); // 3. poztól 2-t kivágunk és str2-t belerakjuk
	str.replace(3, 3,3, 'h'); //3. poztól 3 karaktert kivágunk és 3 h-t rakunk be
	cout << str;

	str2.clear();
	str2 = "ka";

	a = str.find(str2); //Az str2 elsõ elõfordulásának pozícióját adja meg
	cout << a;

	a = str.find(str2, 5); //Hányadik karaktertõl keresse
	a = str.find('a'); //Az 'a' elsõ elõfordulásának pozícióját adja meg

	a = str.rfind('a'); //Az 'a' legutolsó elõfordulásának pozícióját adja meg
}
