#include <iostream>
using namespace std;

int main()
{
	float num1, num2;
	char opSymbol;
	cout << "Calculator\n";
	cin >> num1 >> opSymbol >> num2;

	switch (opSymbol)
	{
	case '-':cout << num1 << opSymbol << num2 << "=" << num1 - num2; break; // without break it goes to te next case
	case '+':cout << num1 << opSymbol << num2 << "=" << num1 + num2; break; // if there are similare cases, then
	case '/':cout << num1 << opSymbol << num2 << "=" << num1 / num2; break; // case 1:
	case '*':cout << num1 << opSymbol << num2 << "=" << num1 * num2; break; // case 2: <<cout"This is the solution";break;
	case '%':
		bool isNum1Int, isNum2Int; // they are true by default
		isNum1Int=(int(num1) == num1);
		isNum2Int=(int(num2) == num2);

		(isNum1Int && isNum2Int)
		? cout << num1 << opSymbol << num2 << "=" << (int)num1 % (int)num2
		: cout << "Not valid. For the operation '%' you must use integer (whole number)!"; break;
	default:cout << "Valid operators are: +,-,*,/,%";
	}
	 
	system("pause>0");
}

