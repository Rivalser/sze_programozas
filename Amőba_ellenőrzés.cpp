#include <iostream>

#define LEN_I 20
#define LEN_J 20
char matrix[LEN_I][LEN_J] { };
bool jatekVege(int korszam) {
	int pontokSzama = 0;
	bool vege = false;
	char aktChar = korszam % 2 != 0 ? 'X' : 'O';

	for (int i = 0; i < LEN_I; i++) {

		for (int j = 0; j < LEN_J; j++) {

			if (matrix[i][j] == '.') {
				pontokSzama++;
			}

			if (matrix[i][j] == aktChar) {
				int karakterDarab = 0;

				//vízszintes
				if (j + 5 < LEN_J) { //túlindexelés problémája miatt
					for (int k = 0; k < 5; k++) {
						if (matrix[i][j + k] == aktChar)
							karakterDarab++;
					}
					if (karakterDarab == 5) {
						return true;
					}
					karakterDarab = 0;
				}

				//függőleges
				if (i + 5 < LEN_I) {

					for (int k = 0; k < 5; k++) {
						if (matrix[i + k][j] == aktChar)
							karakterDarab++;
					}
					if (karakterDarab == 5) {
						return true;
					}
					karakterDarab = 0;

				}

				//főátló
				if ((i + 5 < LEN_I) && (j + 5 < LEN_J)) {

					for (int k = 0; k < 5; k++) {
						if (matrix[i + k][j + k] == aktChar)
							karakterDarab++;
					}
					if (karakterDarab == 5) {
						return true;
					}
					karakterDarab = 0;

				}

				//mellék átló
				if ((i - 5 >= 0) && (j + 5 < LEN_J)) {
					for (int k = 0; k < 5; k++) {
						if (matrix[i - k][j + k] == aktChar)
							karakterDarab++;
					}
					if (karakterDarab == 5) {
						return true;
					}
					karakterDarab = 0;

				}

			}

		}
	}

	if (pontokSzama == 0) {
		return true;
	}
	return vege;
}


int main()
{
    std::cout << "Hello World!\n";
}
