#include <iostream>
#include <string>

using namespace std;

int main()
{
	int a;

	string str, str2 = "alma";
	cout << "Adj meg egy stringet!" << endl;
	getline(cin, str);
	str.insert(3, str2); //h�nyadik poz�ci�t�l mit rakjon be
	str.insert(3, 3, 'a'); //3. poz-t�l 3 db 'a' karaktert rak be
	str.erase(3, 2); //3. poz-t�l 2 karaktert t�r�l
	str2 = str.substr(5, 3); //5. pozt�l 3 db karaktert v�g ki (feh�rkaraktert is)
	str.replace(3, 2, str2); // 3. pozt�l 2-t kiv�gunk �s str2-t belerakjuk
	str.replace(3, 3,3, 'h'); //3. pozt�l 3 karaktert kiv�gunk �s 3 h-t rakunk be
	cout << str;

	str2.clear();
	str2 = "ka";

	a = str.find(str2); //Az str2 els� el�fordul�s�nak poz�ci�j�t adja meg
	cout << a;

	a = str.find(str2, 5); //H�nyadik karaktert�l keresse
	a = str.find('a'); //Az 'a' els� el�fordul�s�nak poz�ci�j�t adja meg

	a = str.rfind('a'); //Az 'a' legutols� el�fordul�s�nak poz�ci�j�t adja meg
}
