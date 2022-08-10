#include <iostream>

using namespace std;  // A dolgok írásának egyszerűsítése végett. pl std::cout << helyett cout <<
                     // "Magasabb" szinten nem használatos, mert az összetett projektben XY lehet hogy ezt nem használta vagy egyéb hibákat is eredményezhet

int main()
{

    int szam; //int egész számoknál használatos +- 2 milliárdos határral
    long int szam2; //lényegében ugyan az mint az int
    short int szamocska; //+- 32 ezerig tárolhatunk benne számokat
    unsigned short int szamocskak; // A negatív tartományt nem lehet értelmezni továbbá a + értéktartomány megduplázódik. Jelenleg 64 ezerig mehetünk el
    float tort; // alkalmas a tort szamok tarolasara
    double tort2; // lényegét tekintve ugyan olyan mint a float, de 2x er pontosabb

    char karakter = 'k'; // karakterek tárolására alkalmas
    string szoveg= "szoveg"; //szöveg tárolására alkalmas

    bool logikai = 1; // Logikai változó 0 hamis 1 igaz. De megadható true vagy false is. 

    std::cout << "Adj meg egy egesz szamot!\n";  //Kiíratás \n "new line" vagyis új sor kezdése, de <<endl a sortörést jelenti
    // A "kacsacsőr" az adat áramlását jelzi. << Kiírunk, >> bekérünk. cout - Console out, cin - Console in
    cin >> szam;
    szam = szam + 1; // Maga a művelet végzés jobbról balra történik. Jobboldalon van az hogy mit rakunk a bal oldaliba.
    //szam += 1; Ugyan azt jelenti mint a fentebbi sor.
    cout << "A bekert szam +1 az egyenlo: " << szam << endl; //<< szöveg összefűzés végett


    return 0;
}

