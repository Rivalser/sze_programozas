#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "Give the number\n";
    string numberSt;
    string reversed="";
    int number;
    int revNum;
    int numLength;
    cin >> numberSt;
    number = numberSt.length();
    cout << "Ami kell: "<<number<<endl;
    for (int i = number; i >= 0; i--)
    {
        reversed += numberSt[i];
    }
    cout << reversed;
    system("pause > 0");
}
