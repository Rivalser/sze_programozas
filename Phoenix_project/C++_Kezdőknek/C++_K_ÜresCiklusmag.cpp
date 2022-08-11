//Van-e a számsorban negatív szám?

#include <iostream>
#include <sstream>

using namespace std;

void vane(string &str);

int main()
{
    string str;
    cout << "Adj meg egy szamsort." << endl;
    getline(cin, str);
    vane(str);
    cout << str;
    return 0;
}

void vane(string& str) {
    istringstream szamok(str);
    str.clear();
    ostringstream vissza(str);
    int szam;
    while (szamok>>szam && szam>=0){
    }
    bool van = szam < 0;
    vissza << van;
    str = vissza.str();
}