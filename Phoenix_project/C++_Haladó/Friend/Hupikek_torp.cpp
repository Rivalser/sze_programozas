#include "Hupikek_torp.h"

Hupikek_torp::Hupikek_torp(int _eletkor=0) :eletkor(_eletkor) {
	/*
	
	A fentebbi kifejt�s:
	string int �s t�rsai rendelkeznek szint�gy
	egy egy konstruktorral, �gy hivatkozhatok r�
	hogy a headerben l�v� eletkor konstruktor�t haszn�lja,
	- erre val� hivatkoz�s a ':'-al -
	�s param�ter�l adja neki a f�ggv�nyben megadott _eletkort
	'_' a megk�l�nb�ztet�s v�gett van 
	Ezzel kiv�ltva:
	this->eletkor = eletkor;
	�tl�that�bb �s gyorsabb

	*/
}