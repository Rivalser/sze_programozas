#include <iostream>

using namespace std;

#define say cout <<
#define ask cin >>
//ez m�r v�r egy sz�mot amit els�nek ellen�riz
int joSzam(int length,int min, int max) {
	bool megfelel� = false;
	do
	{
		if (length >= min && length <= max) {
			megfelel� = true;
		}
		else {
			say"Nem jo a megadott szam.\n"
				<< "A megadhato szamok tartomanya: " << min << "-" << max << ".\n"
				<< "Adja meg a megfelelo szamot.\n";
			ask length;
		}
	} while (!megfelel�);
	return length;
}



int main()
{
    std::cout << "Hello World!\n";
}
