4. feladat

Feladat
Írjon egy double area(string fbe) függvényt, amely kiírja az alábbi feltételeknek megfelelő általános háromszögek területeit. A kiírás pontos formátumát a példa mutatja!

A 10 db háromszög adatait egy adat-file tartalmazza, amelynek a létezését ellenőrizni kell! A hibaüzenet formátumát a példa mutatja!

Ennek az állománynak az azonosítója lesz az area függvény paramétere. Az adat-file egy-egy sora a következő adatokat tartalmazza:

1._oldal 2._oldal a_2_oldal_által_bezárt_hegyesszög.
Az oldalak mértékegysége méter, a szögé fok.

Az adatokat szóközök választják el egymástól! Pl.:

140 230 40
…
120 120 45
Az adat-file soronkénti elemeit és a kiszámított területek értékeit tárolja el egy-egy dinamikus tömbbe, azaz 4 db tömböt kell szinkronban tartania. A tömbök hosszát szimbolikus állandóval állítsa be.

Ebben az esetben a trigonometrikus terület-képletet kell használni, amely a következő:

(1._oldal * 2._oldal * sin(a_2_oldal_által_bezárt_hegyesszög)) / 2
A terület tizedespontosságának a meghatározását bízzák a fordítóra . Kiíratni csak azon területeket kell, amelyek a 2.000-től 8.000-ig tartó zárt intervallumba esnek. Azaz a határértékek is megengedettek.

A függvény visszatérési értéke, a fenti feltételeknek megfelelő háromszög-területek számtani átlaga.

Ha az adat-file nem létezik, akkor a visszatérési érték a -1 legyen!

(A cerr << utasítást NE használják! Moodle… :( )

Példa
		Test		|		Result
double avg=area("Tri.txt");	|
std::cout << avg;		|		2729.03 [nm]
				|		3085.22 [nm]
				|		4125 [nm]
				|		5303 [nm]
				|		5091.17 [nm]
				|		7200 [nm]
				|		4588.9
----------------------------------------------------------------
double avg=area("Tria.txt");
std::cout << avg;			Sikertelen file-nyitás!