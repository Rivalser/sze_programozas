
#include <iostream>
using namespace std;

bool isPrimeNum(int num) {
    bool isPrimeFlag = true;
    for (int i = 2; i < num; i++) {
        if (num % i == 0) 
            return false;
        
    }
    return true;
}

void main()
{
    int num;
    cout << "Number: ";
    cin >> num;
    
    bool isPrimeFlag = isPrimeNum(num);

    if (isPrimeFlag)
        cout << "Prime number" << endl;
    else
        cout << "Not prime number" << endl;

    for (int i = 1; i <= 1000; i++) {
        bool isPrime = isPrimeNum(i);
        if (isPrime)
          cout << i<<" is a prime number\n";
    }

    system("pause>0");
}
