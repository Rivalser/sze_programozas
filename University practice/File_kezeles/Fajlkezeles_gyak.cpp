#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int main()
{
    int hallgatokSzama = 0;
    int noAlairas = 0;
    int egyesekSzama = 0;
    int kettesesSzama = 0;
    int harmasakSzama = 0;
    int negyesekSzama = 0;
    int otosokSzama = 0;
    int NJM = 0;
    double jegyOsszeg = 0;
    string sor;
    ifstream file_bemenet;
    file_bemenet.open("IT_a_jármûgyártásban_vizsga_adatok.txt");

    ofstream file_kimenet;
    file_kimenet.open("eredmeny.txt");

    while (!(file_bemenet.eof()))
    {
        getline(file_bemenet, sor);
        if (sor == "1") {
            egyesekSzama++;
            jegyOsszeg += 1;
        }
        else if (sor == "2") {
            kettesesSzama++;
            jegyOsszeg += 2;
        }
        else if (sor == "3") {
            harmasakSzama++;
            jegyOsszeg += 3;
        }
        else if (sor == "4") {
            negyesekSzama++;
            jegyOsszeg += 4;
        }
        else if (sor == "5") {
            otosokSzama++;
            jegyOsszeg += 5;
        }


        if (sor.length() == 6)
            hallgatokSzama++;

        if (sor == "Alairas megtagadva") {

            noAlairas++;
        }
        if (sor == "NJM") {
            NJM++;
        }

    }
    file_kimenet << "A targyat felvett hallgatok szama: " << hallgatokSzama << endl;
    file_kimenet << "Az egyesek szama: " << egyesekSzama << endl;
    file_kimenet << "Az kettesek szama: " << kettesesSzama << endl;
    file_kimenet << "Az harmasok szama: " << harmasakSzama << endl;
    file_kimenet << "Az negyesek szama: " << negyesekSzama << endl;
    file_kimenet << "Az otosok szama: " << otosokSzama << endl;
    file_kimenet << "A meg nem jelenok szama: " << NJM/2 << endl;
    file_kimenet << "Az alairast nem szerzettek szama: " << noAlairas/2 << endl;
    file_kimenet << "A bukottak szama: " << NJM/2 + egyesekSzama + noAlairas/2 << endl;
    file_kimenet << "A jegyek átlaga (a \"bukottak\" számával számolva ) : " << (jegyOsszeg + NJM/2 + noAlairas/2) / hallgatokSzama << endl;

    file_bemenet.close();
    file_kimenet.close();
    cout << kettesesSzama + harmasakSzama + negyesekSzama + otosokSzama + NJM/2 + egyesekSzama + noAlairas/2;
    system("pause");
    return 0;


}

