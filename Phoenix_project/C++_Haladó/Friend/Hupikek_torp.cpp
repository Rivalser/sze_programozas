#include "Hupikek_torp.h"

Hupikek_torp::Hupikek_torp(int _eletkor=0) :eletkor(_eletkor) {
	/*
	
	A fentebbi kifejtés:
	string int és társai rendelkeznek szintúgy
	egy egy konstruktorral, így hivatkozhatok rá
	hogy a headerben lévõ eletkor konstruktorát használja,
	- erre való hivatkozás a ':'-al -
	és paraméterül adja neki a függvényben megadott _eletkort
	'_' a megkülönböztetés végett van 
	Ezzel kiváltva:
	this->eletkor = eletkor;
	átláthatóbb és gyorsabb

	*/
}