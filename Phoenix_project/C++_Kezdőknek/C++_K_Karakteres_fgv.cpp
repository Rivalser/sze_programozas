#include <iostream>
#include <string>

using namespace std;



int main()
{
	string str;
	cout << "Adj meg egy szoveget! " << endl;
	getline(cin, str);
	str[0] = tolower(str[0]);   // Az elsõ karaktert kicsire cseréli, vizsgáláshoz islower()
	str[0] = toupper(str[0]);  // Az elsõ karaktert nagyra cseréli, vizsgáláshoz isupper()
	cout << str << endl;	  // A szám vizsgáláshoz isdigit()
							 // A betû karakterekhez isalpha()
}							// Betû és szám számláláshoz: isarnum() (fehérkaraktereket, +!%" és ilyeneket nem számolja)
						   // Helykitöltõ karakterekhez: issapce()
						  // Mondatban lévõ írásjelek száma: ispunct() (,!.? ...)