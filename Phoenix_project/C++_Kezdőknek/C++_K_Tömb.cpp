#include <iostream>

using namespace std;

int main()
{
    int a[5]; //[ ] jelöli megát a tömböt. A benne lévő szám jelenti hogy hány elemű a tömb. Számozása (Indexelése) 0-tól kezdődik.
    
    cout << "Add meg a tomb 3. indexen levo szamot."<<endl;
    cin >> a[3];
    cout << "A 3. helyen levo szam: " << a[3]<<endl;
    cout << "Fontos, hogy deklaraljuk a tomb elemeit vagyis toltsuk fel oket\nkulonben memoria szemetet kapunk: " << a[2]<<endl;

    return 0;
}
