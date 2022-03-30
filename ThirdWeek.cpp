#include <iostream>

using namespace std;
#define N 3
#define FIRST false // the FIRST is just a name, and what it does is after it. false = that block won't run
#define SECUND false
#define THIRD false
#define FOURTH false
#define FIFTH true
#define say cout <<
#define ask cin >>
#define NUM 5


int main() {
	//1.
#if FIRST


	int sum = 0;
	int num;

	for (int i = 0; i < N; i++)
	{
		cout << "Enter the " << i + 1 << ". number.\n";
		cin >> num;
		sum += num;

	}
	cout << "The average: " << (double)sum / N; //(double) is forcing the sum to change it's type, but the translator can not divide a double with an int,
												//so it force the curent N to be a double.

#endif // RUNMODE with this you can choos wich part of your code shall run
	//Pragma region means that you can hide your code yet it will run anyway

#if SECUND

#pragma region Secund


	int sum1 = 0;
	int numbers[N];
	double avg;


	for (int i = 0; i < N; i++)
	{
		cout << "Enter the " << i + 1 << ". number.\n"; //i+1 because of the index
		cin >> numbers[i];
		sum1 += numbers[i];

	}
	avg = sum1 / N;
	cout << "The average: " << avg << endl;

	cout << "Numbers smaller than avg: \n";
	int i = 0;
	while (i < N)
	{
		if (numbers[i] < avg)
			cout << numbers[i] << '\t';
		i++;
	}
#pragma endregion 
#endif // If you delete the runmode and write a "true", the codeblock will run


#if THIRD
	int sum2 = 0;
	int numbers2[N];
	double avg;

	//3. Finding a prefered number
	for (int i = 0; i < N; i++)
	{
		cout << "Enter the " << i + 1 << ". number.\n"; //i+1 because of the index
		cin >> numbers2[i];
		sum2 += numbers2[i];
	}

	cout << "Enter the number to find.";
	//etc...
#endif // 3. 

#if FOURTH
	int sum3 = 0;
	int numbers3[N];
	double avg3;
	int index1, index2;
	int change;
	for (int i = 0; i < N; i++)
	{
		cout << "Enter the " << i + 1 << ". number.\n";
		cin >> numbers3[i];
		sum3 += numbers3[i];
	}
	cout << "Enter the two numbers \n";
	cin >> index1;
	cin >> index2;
	index1 -= 1;
	index2 -= 1;
	change = numbers3[index1];
	numbers3[index1] = numbers3[index2];
	numbers3[index2] = change;
	cout << " ";
	for (int i = 0; i < N; i++)
	{
		cout << numbers3[i] << endl;
	}
#endif
#if FIFTH
	//Rotation
	int ArrayNums[NUM];
	int ArrayNumsCopy[NUM];
	int actNum;
	say "Give 5 numbers.\n";
	for (int i = 0; i < NUM; i++)
	{
		say "The " << i + 1 << ". number: ";
		ask ArrayNums[i];
		ArrayNumsCopy[i] = ArrayNums[i];
	}
	say endl;
	/*for (int i = 0; i < NUM; i++)
	{
		say ArrayNumsCopy[i];
	}*/
	int rotateValue;

	say "Enter the rotate value.\nIn case of 0 the program stops.\n";
	ask rotateValue;
	while (rotateValue != 0)
	{
		if ((rotateValue > NUM) or (rotateValue < 0)) {
			rotateValue = rotateValue % NUM;
		}
		if (rotateValue > 0) {

			for (int i = 0; i < NUM; i++)
			{
				if (i == 0)
				{
					ArrayNums[0] = ArrayNumsCopy[NUM - rotateValue];
				}
				else if ((i - rotateValue) < 0)
				{
					ArrayNums[i] = ArrayNumsCopy[i + (NUM - rotateValue)];
				}
				else
				{
					ArrayNums[i] = ArrayNumsCopy[i - rotateValue];
				}

			}

			for (int i = 0; i < NUM; i++)
			{
				say ArrayNums[i];
				ArrayNumsCopy[i] = ArrayNums[i];
			}
			say endl;
			say "The changes has been saved\n";
			say "Enter the rotate value.\nIn case of 0 the program stops.\n";
			ask rotateValue;

		}
		else
		{
			rotateValue = NUM + rotateValue;

			for (int i = 0; i < NUM; i++)
			{
				if (i == 0)
				{
					ArrayNums[0] = ArrayNumsCopy[NUM - rotateValue];
				}
				else if ((i - rotateValue) < 0)
				{
					ArrayNums[i] = ArrayNumsCopy[i + (NUM - rotateValue)];
				}
				else
				{
					ArrayNums[i] = ArrayNumsCopy[i - rotateValue];
				}

			}

			for (int i = 0; i < NUM; i++)
			{
				say ArrayNums[i];
				ArrayNumsCopy[i] = ArrayNums[i];
			}
			say endl;
			say "The changes has been saved\n";
			say "Enter the rotate value.\nIn case of 0 the program stops.\n";
			ask rotateValue;
		}


	}

#endif // FIFTH




}