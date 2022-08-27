#include <iostream>
#include "Vonal.h"
using namespace std;
/*
class Vonal {
public:
    Vonal();
    Vonal(double hossz); //Inline kifejtés Vonal(double hossz) { this->hossz = hossz; }
    double getHossz() const; //Inline kifejtés { return hossz; } 
private:
    double hossz;
};

Vonal::Vonal() {}; // Külső kifejtés. Osztályon kívül Osztálynév :: amit_ki_szeretnénk_fejteni
                   // :: - másnéven Scope operator
Vonal::Vonal(double hossz) {
    this->hossz = hossz;
}

double Vonal::getHossz() const{
    return hossz;
}
*/

//3. módszer, amikor új header és cpp fájlokat hozunk létre

int main()
{
    Vonal v(10);
    cout << v.getHossz() << endl;
}

