// C++_Basics_01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    /*   float yearlyEarning;
       cout << "How much do you earn a year?\n";
       cin >> yearlyEarning;
       float monthlyEarning = yearlyEarning / 12;
       int montlhlyInHuf = monthlyEarning * 312;
       cout << "Your monthly salary is: " << monthlyEarning<<endl;
       cout << "That in HUF :" << montlhlyInHuf;
       cout << "Size of yearly earnings in data: " << sizeof(yearlyEarning) << " bytes";*/

       //Program that turns a 5 ch length letter into ASC codes.
       //char c1,c2,c3,c4,c5;
       //cout <<"Write a 5 charachter length letter.\n";
       //cin >> c1 >> c2 >> c3 >> c4 >> c5;
       //cout << int(c1) << " " << int(c2) << " " << int(c3) << " " << int(c4) << " " << int(c5);
       /*int number;
       cout << "Give a whole number.\n";
       cin >> number;
       if (number<5) {
           cout << "It's smaller than 5.";

       }
       else {
           cout << "Isn't smaller than 5.";
       }*/
       //BMI thing

    float weight, height, bmi;
    cout << "Enter your weight(kg), height(m): \n";
    cin >> weight >> height;
    bmi = weight / (height * height);
    if (bmi < 18.5)
        cout << "Underweight, bmi: " << bmi;
    else if (bmi > 25)
        cout << "Overweight, bmi: " << bmi;
    else
        cout << "Normalweight, bmi " << bmi;
    /*system("cls");    */
    /*olyan mint egy sima if else csak rövidítve, ? után az igaz : után a hamis eset*/(3 < 5) ? cout << "Heh" : cout << "Nope";

    system("pause>0");


}



