#include <iostream>
#include <fstream>

using namespace std;

#define say cout <<
#define ask cin >>
#define LEN_I 20
#define LEN_J 20

char matrix[20][20]{ };

void allasMentes() {
	//1. sorok száma
	//2. oszlopok száma
	// majd maga a mátrix
	ofstream kiiras;
	char aktChar;
	kiiras.open("amoba.txt");


	kiiras << LEN_I << endl; //sorok
	kiiras << LEN_J << endl; //oszlopok számainak kiírása

	for (int i = 0; i < LEN_I; i++) {

		for (int j = 0; j < LEN_J; j++)
		{
			kiiras << matrix[i][j];
		}
		kiiras << endl;

	}
	kiiras.close();
	say "Mentes tortent!\n";
}


int main()
{
    std::cout << "Hello World!\n";
}

