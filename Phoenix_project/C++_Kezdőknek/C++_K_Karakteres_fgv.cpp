#include <iostream>
#include <string>

using namespace std;



int main()
{
	string str;
	cout << "Adj meg egy szoveget! " << endl;
	getline(cin, str);
	str[0] = tolower(str[0]);   // Az els� karaktert kicsire cser�li, vizsg�l�shoz islower()
	str[0] = toupper(str[0]);  // Az els� karaktert nagyra cser�li, vizsg�l�shoz isupper()
	cout << str << endl;	  // A sz�m vizsg�l�shoz isdigit()
							 // A bet� karakterekhez isalpha()
}							// Bet� �s sz�m sz�ml�l�shoz: isarnum() (feh�rkaraktereket, +!%" �s ilyeneket nem sz�molja)
						   // Helykit�lt� karakterekhez: issapce()
						  // Mondatban l�v� �r�sjelek sz�ma: ispunct() (,!.? ...)