#include <iostream>
#include <string>
#include <fstream>

using namespace std;

#define N 10
#define MIN 2000
#define MAX 8000

double area(string fbe) {

	ifstream file(fbe);

	if (file.is_open()) {

		int* a_oldal = new int[N];
		int* b_oldal = new int[N];
		int* szog = new int[N];
		double* terulet = new double[N];

		double sum = 0;

		int i = 0;
		while (i < N)
		{
			file >> a_oldal[i];
			file >> b_oldal[i];
			file >> szog[i];
			terulet[i] = (a_oldal[i] * b_oldal[i] * sin(szog[i] * 3.14 / 180)) / 2; //* 3.14 / 180 szögbe váltás
			sum += terulet[i];
			if (terulet[i] >= MIN && terulet[i] <= MAX) {
				cout << terulet[i] << " [nm]" << endl;
			}
			i++;
		}

		delete[]a_oldal;
		delete[]b_oldal;
		delete[]szog;
		delete[]terulet;
		a_oldal, b_oldal, szog, terulet = NULL;
		
		return sum / N;

	}
	else
	{
		return -1;
	}
}

int main()
{
	string file = "Tri.txt";
	double avg = area(file);
	cout << avg;
}
