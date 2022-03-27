#include <iostream>

using namespace std;

// Its a comment used to comment the code. To make an elected block of code to a comment, press ctrl+k+c, for uncomment ctrl+k+u

//First week curriculum
int main() {

	//1. Printing Hello World out with a line break: \n.
	cout << "Hello World.\n"; //cout = Console out. Prints something out.

	//2. Request a number and print out its double value.
	int number; //Declareing a whole(int) variable named "number";
	cout << "Give a preferd whole number.\n"; 
	cin >> number; // cin = console in. Awaits for an input. In this case, whole variable.
	cout << "The double value of the given number is: " << number *2 << " !" << endl; // "<< endl" is just like the \n, but unlike the \n you don't need a string to use it.

	int first, secund; //With " , " we can declare more variable at the same time.
	cout << "Give the preferd whole numbers.\n";
	cin >> first;
	cin >>	secund;
	cout << "The sum: " << first + secund<<endl;
	cout << "The multiplication: " << first * secund<<endl;
	cout << "The difference of the multiplication and the sum: " << (first * secund) - (first + secund)<<endl;

	//3. Write out a number absolut value. 
	int num;
	cout << "Give a preferd whole number.\n";
	cin >> num;
	if (num < 0) {
		cout <<"The absolute value of the number: " << num * -1<<endl;
	}
	else
	{
		cout << "The given number has absolute value: "<<num<<endl;
	}
	if (num%2==0) // With "%" we are intrestid in the leftover(s). In case of 3%2 the result will be 1. In case of 4%2 the result will be 0. The == used for comparison.
	{
		cout << "The number is even, and its half is: " << num / 2<<endl;
	}
	else
	{
		cout << "This is an uneven number, and its half is: " << num / 2.<<endl; //If our variable type is int(whole), then the result will be that too. Nomether if it is correct or not.
	}																	  //In case of 5/2->2.5 is the correct answer,but because it is an Integer type it "cuts" everyting after the '.'.
																		  //But if we put a '.' after (in this case) 2 it will be forced, to be a double type, and it write out the whole number.
	
	//4. 
	int a, b;
	cout << "Give the preferd whole numbers.\n";
	cin >> a;
	cin >> b;
	if (a>b)
	{
		cout << a-b;
	}
	if (a && b <10) //&& means and
	{
		cout << a * b;
	}
	//5.a
	int i,n,sum;
	i = 1;
	sum = 0;
	cout << "Give a preferd number.";
	cin >> n;
	if (n > 1)
	{
		while (i <= n)
		{
			cout << i;
			i -= -1; // It is same as i++;
			sum += i; //Like sum = sum + i;
			if (num % 2 == 0) //If there is only one if or if else, you don't nesecerly need {}-s.
				cout << i;
		}
		cout << sum;
	}
	else {
		cout << "Too small number";
	}
	//5.b - This uses the given numbers of task 4.
	
	if (a > b) {
		while (a>=b) //Writes out the numbers decreasingly.
		{
			cout << a;
			a--;
		}
	}
	else if (a < b)
	{
		while (a >= b) //Writes out the numbers increasingly.
		{
			cout << a;
			a--;
		}
	}
	else
	{
		cout << "They are the same.";
	}

	//6. Factorial
	int num1,fact;
	int j = 1;
	fact = 1;
	cout << "Give a preferd number.\n";
	cin >> num1;
	while (j<=num1)
	{
		fact *= j;
		j++;
	}
	cout << num1 << "! is: " << fact;


	//7. Fizzbuzz
	for (int i = 1; i <=100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0) {
			cout << "Fizzbuzz\n";
		}
		else if (i % 3 == 0 && i % 5 != 0) {
			cout << "Fizz\n";
		}
		else if (i % 3 != 0 && i % 5 == 0) {
			cout << "Buzz\n";
		}
		else
		{
			cout << i <<endl;
		}

	}


	//8. Is the number a prime?
	// For this we maybe need: #include <cmath> because of the square root.
	//(because the version of the version of VS)
	int num2;
	cout << "Give a preferd number.\n";
	cin >> num2;
	int root = sqrt(num2);
	bool isPrime = false;
	for (int i = 2; i <= root; i++) {

		if (num2 % i == 0) {
			isPrime = true;
			cout << "This is not a prime.";
			break;
		}
		
	}
	if (!isPrime)
	{
		cout << "This is a prime number.";
	}
	return 0;
}