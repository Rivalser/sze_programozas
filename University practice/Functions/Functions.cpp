#include <iostream>
using namespace std;

void introduceMe(string name,string city,int age);

void main()
{
    string name, city;
    int age;
    cout << "name: ";
    cin >> name;
    cout << "city: ";
    cin >> city;
    cout << "age: ";
    cin >> age;

    introduceMe(name,city,age);

    system("pause>0");
}

void introduceMe(string name, string city, int age) {
    cout << "My name is " << name <<"." << endl;
    cout << "I am from " << city << "." << endl;
    cout << "I am " << age << " years old." << endl;
}
