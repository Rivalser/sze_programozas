5. feladat
Írjon egy string first_last(string fbe, string fki) függvényt, amely kiírja az alábbi átalakításon átesett szerzők neveit a képernyőre és egy kimeneti file-ba (2. paraméter).

A kimeneti file létrejöttét is ellenőrizni kell! A kiírások pontos formátumát a példa mutatja!

A szerzők keresztneveit (több is lehet) és vezetéknevét egy adat-file tartalmazza, amelynek a létezését ellenőrizni kell! A hibaüzenet formátumát a példa mutatja!

Ennek az állománynak az azonosítója lesz az first_last függvény 1. paramétere. DE! Az adat-file első sorában csak egy pozitív egész szám található, amely az írók számát adja meg, amíg a további sorok egy-egy szerzőt azonosítanak.

Az adat-file egy-egy sora a következő adatokat tartalmazza:

1._keresztnév 2._keresztnév … n._keresztnév vezetéknév
A neveket szóközök választják el egymástól! Pl.:

Douglas Noel Adams
…
Timothy Zahn
Az adat-file szerző-sorait tárolja el egy dinamikus 2 dimenziós tömbbe.

Ezek után dolgozza fel ezen tömböt úgy, hogy a szerzők nevei a következő mintát kövessék, mind a képernyőn, mind a kimeneti file-ban:

vezetéknév, 1._keresztnév 2._keresztnév … n._keresztnév
Azaz a vezetéknév kerüljön előre, majd a vessző utáni szóköz után jöjjenek a keresztnevek szóközökkel elválasztva. (A kiírásokat úgy is megvalósíthatja, hogy az eredeti tömböt nem kell felüldefiniálnia, hanem segéd-dinamikus tömböket hoz létre!)

A függvény visszatérési értéke, a Hibátlan futás! illetve, ha az adat-file nem létezik, akkor a Sikertelen file-nyitás! szöveg-információ legyen!

Példa

		Test							Result
string ki=first_last("Writers.txt","Sretirw.txt");
std::cout << ki;						Adams, Douglas Noel
								Asimov, Isaac
								Heinlein, Robert Anson
								Clarke, Arthur Charles
								Bradbury, Ray Douglas
								King, Stephen Edwin
								Tolkien, John Ronald Reuel
								Zahn, Timothy
								Hibátlan futás!
string ki=first_last("Writer.txt","Sretirw.txt");
std::cout << ki;						Sikertelen file-nyitás!
								-1
