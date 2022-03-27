#include <iostream>

using namespace std;

#define SUM 1
#define MULTIPLICATION 2
#define INVOLVING 3
#define ARITHMETIC_PRGOGRESSION 4

void square();

int main() {
	//1.
	int num1, num2;
	cout << "Give two prefered numbers.";
	cin >> num1, num2;
	if (num1 > num2) {
		cout << "The first number is bigger.";
	}
	else if (num2>num1)
	{
		cout << "The secund number is bigger.";

	}
	else
	{
		cout << "They are equal.";
	}

	//2.
	cout << "Give a number. In case of an uneven, the program stops.\n";
	int number;
	bool even;
	do
	{
		cin >> number;
		even = number % 2 == 0;
		if (even)
			cout << number / 2 << endl <<"Give the next number.\n";
			
	} while (even);
	if (!even)
		cout << "Not even.\n";
	
	
	//3.

	int newNumber, oldNumber,sumOfNums,sumOfEvenNums;
	sumOfNums = sumOfEvenNums = 0;
	bool repeated = false;
	cout << "Give a number.\n";
	cin >> oldNumber;
	sumOfNums++;
	if (oldNumber % 2 == 0)
		sumOfEvenNums++;
	do
	{
	
		cin >> newNumber;
		sumOfNums++;
		if (newNumber % 2 == 0)
			sumOfEvenNums++;

		if (oldNumber == newNumber)
		{
			repeated = true;
			cout << "Program stopped, the last given numbers are equals.\n";
			cout << "The number of the numbers is: " << sumOfNums << endl;
			cout << "The number of the even numbers is: " << sumOfEvenNums << endl;
		}
		else
		{
			oldNumber = newNumber;
		}

	} while (!repeated);

	//4.

	square();

	//5.
	int height;
	cout << "Enter the height of the required staircase.\n";
	cin >> height;
	for (int i = 1; i <= height; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << '*';
		}
		cout << endl;
	}
	//The reversed staircase:
	cout << endl;
	for (int i = 0; i < height; i++)
	{
		for (int j = i; j < height-1; j++)
		{
			cout << ' ';
		}
		for (int k = 0; k < i+1; k++)
		{
			cout << '*';
		}
		cout << endl;
	}
	int serialNumber;
	int a;
	int b;
	int involving;
	int a0, d, n;
	cout << "1.Sum\n"
	"2.Multiplication\n"
	"3.Involving\n"
	"4.Arithmetic progression\n"
	"Exit: pressing any other button\n";
	cin >> serialNumber;
	switch (serialNumber){

		case SUM:

			cout << "Enter the two numbers\n";
			cin >> a;
			cin >> b;
			cout << "The sum: " << a + b;
			break;
		case MULTIPLICATION:
			
			cout << "Enter the two numbers";
			cin >> a, b;
			cout << "The multiplication: " << a + b;
			break;
		case INVOLVING:
			
			cout << "Enter the two numbers\n";
			cin >> a;
			cin >> b;
			if (a > 0 && b == 0) {
				cout << "The result is: 1";
			}
			else if (a == 0 && b == 0) {
				cout << "The result is: 0";
			}
			else if (a < 0 && b == 0) {
				cout << "The result is: -1";
			}
			else
			{
				involving = 1;
				for (int n = 0; n < b; n++)
				{
					involving *= a;
				

				}
				cout << "The result is: " << involving;
			}
			break;
		//It's just a simple arithmetic progression for + and -
		case ARITHMETIC_PRGOGRESSION:
			
			cout << "Enter the first number: \n";
			cin >> a0;
			cout << "Enter the difference value: \n";
			cin >> d;
			cout << "Enter the volume: \n";
			cin >> n;


			for (int i = 0; i < n; i++)
			{
				cout << a0<<endl;
				a0 += d;
			}



		default:
			break;
	}

	return 0;
}

void square() {
	int row, col, n;
	char symb;
	cout << "What should be the size of the square: " << endl;
	cin >> n;
	cout << "What symbol shall be used ? " << endl;
	cin >> symb;
	row = 0;
	while (row < n)
	{
		col = 0;
		while (col < n)
		{
			if (row == 0 or row == n - 1 or col == 0 or col == n - 1 or row == col or row + col == n - 1) {
				cout << symb;
			}
			else
				cout << ' ';
			col++;
		}
		cout << "\n";
		row++;

	}
}

