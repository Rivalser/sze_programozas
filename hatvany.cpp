#include <iostream>
using namespace std;

int hatvany(int alap, int kitevo)
{
    int eredmeny;
    if (kitevo == 0)
        return 1;

    if (kitevo == 1)
        return alap;

    eredmeny = hatvany(alap, kitevo / 2);
    eredmeny *= eredmeny;

    if (kitevo % 2 == 1)
        eredmeny *= alap;
    return eredmeny;
}

int main()
{
    int szam, kitevo;
    int eredmeny;
    cout << "Szam: ";
    cin >> szam;
    cout << "Kitevo: ";
    cin >> kitevo;
    eredmeny = hatvany(szam, kitevo);
    cout << "Eredmeny: " << eredmeny << endl;
    return 0;
}
