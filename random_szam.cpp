#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

#define MIN 5
#define MAX 50000
int seed = 0;

int random(int tol, int ig)
{
	srand(time(NULL) + seed);
	return (tol + rand() % (ig - tol + 1));
}

int main()
{
	seed = random(1, 500);
	int szam = random(MIN, MAX);
	cout << szam;
	return 0;
}
