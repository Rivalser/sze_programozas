#include <iostream>

using namespace std;

int abszolut(int szam)
{
    return szam < 0. ? -szam : szam;
}


int main()
{
    cout << abszolut(-7);
}

