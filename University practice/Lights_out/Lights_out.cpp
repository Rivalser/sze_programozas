#include <iostream>
using namespace std;
#define say cout <<
#define read cin >>

#define SOR 5
#define OSZLOP 5
#define NYOMKOVETES true

#if NYOMKOVETES
bool lights[SOR + 2][OSZLOP + 2]{
{false, false, false ,false,false ,false,false},
{false, false, false ,false,false ,false,false},
{ false, false, true, false, true, false,false },
{ false, true, true, false, true, true, false},
{ false, false, true, false, false, true, false},
{ false, false, false, true, false ,false, false},
{false, false, false ,false,false ,false,false}
};
#else
bool lights[SOR + 2][OSZLOP + 2]{ };
#endif // NYOMKOVETES

void WriteMatrix();
void SwapAtCoordinates(int x, int y);
bool CanExit();
void PrepareMatrix();

int main()
{
	PrepareMatrix();

	int counter = 0;

	do
	{
		WriteMatrix();
		int x, y;
		say"Add meg a sort: ";
		read x;
		say "\rAdd meg az oszlopot: ";
		read y;
		SwapAtCoordinates(x, y);
		counter++;
	} while (!CanExit());
	say "nyertel " << counter << " lépésbõl";
}

void WriteMatrix()
{
	say "  ";
	for (int i = 0; i < OSZLOP; i++)
	{
		say(i + 1);
	}
	say endl;
	for (int i = 1; i <= OSZLOP; i++)
	{
		say(i) << ";";
		for (int j = 1; j <= SOR; j++)
		{
			char a = (lights[i][j]) ? '*' : '.';
			say a;
		}
		say endl;
	}
}

void SwapAtCoordinates(int x, int y)
{
	lights[x][y] = !lights[x][y];

	lights[x - 1][y] = !lights[x - 1][y];
	lights[x + 1][y] = !lights[x + 1][y];

	lights[x][y - 1] = !lights[x][y - 1];
	lights[x][y + 1] = !lights[x][y + 1];
}

bool CanExit()
{
	for (int i = 1; i <= OSZLOP; i++)
	{
		for (int j = 1; j <= SOR; j++)
		{
			if (lights[i][j])
			{
				return false;
			}
		}
	}
	return true;

}

void PrepareMatrix()
{
	for (int i = 0; i < 9; i++)
	{
		int x, y;
		do
		{
			x = rand() % OSZLOP;
			y = rand() % SOR;
		} while (lights[x + 1][y + 1]);

		lights[x + 1][y + 1] = true;

	}
}