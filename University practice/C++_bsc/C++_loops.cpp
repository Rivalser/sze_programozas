// C++_loops.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
  //// Nums 100-500, that are % by 3 and 5
  //  int i = 100;
  //  while (i<=500) {
  //      if ((i % 3 ==0) && (i % 5 ==0)) {
  //          cout << i<<endl;
  //      }
  //      i++;
  //  }
  

  //Count digits of a number
 /*   string num;
    int digits;
    cout << "Number: ";
    cin >> num;
    digits = num.length();
    cout << "The digits of the current number: ";
    cout << digits;
    
 */ 
    //Pin chenkin'
    /* int usersPin = 1234, pin, errorCounter = 0;
    do {
        cout << "PIN: ";
        cin >> pin;
        if (pin != usersPin)
            errorCounter++;


    } while (errorCounter<3 && pin!=usersPin );

    if (errorCounter < 3)
        cout << "Loading...";
    else
        cout << "Blocked...";*/
    
  //Factorial
  /*  int num, factorial = 1;
    cout << "Number: ";
    cin >> num;
    for ( int i = num;  i >=1;  i--)
    {
        factorial *= i;
    }
    cout <<"The factorial: " <<num<<"! = " << factorial;
  */
  
    //Avg. grades
    /*int grade, sum = 0;
    for (int i = 1; i < 4; i++)
    {
        do
        {
            cout << "Enter grade " << i << ". :";
            cin >> grade;

        } while (grade<1 || grade>5);
        sum += grade;
    }
    cout << "The average of the grades: " << sum / 3.0;*/

    //Multiplication table

    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            cout << i << " * " << j << " = " << i * j << endl;


        }
        cout << endl;
    }

    system("pause>0");
}

