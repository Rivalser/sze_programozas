#include <iostream>

using namespace std;

#define say cout <<
#define ask cin >>
//ez már vár egy számot amit elsõnek ellenõriz
int joSzam(int length,int min, int max) {
	bool megfelelõ = false;
	do
	{
		if (length >= min && length <= max) {
			megfelelõ = true;
		}
		else {
			say"Nem jo a megadott szam.\n"
				<< "A megadhato szamok tartomanya: " << min << "-" << max << ".\n"
				<< "Adja meg a megfelelo szamot.\n";
			ask length;
		}
	} while (!megfelelõ);
	return length;
}



int main()
{
    std::cout << "Hello World!\n";
}
