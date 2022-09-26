#include "minta.h"


tri_race::tri_race() : ora(3600), perc(60) { //"kötelezõen felesleges"
	azonosito = "--------";
	uszas = 0;
	bringa = 0;
	futas = 0;
	depo_ido = 0;
	jovairas = 0;
};

tri_race::tri_race(std::string azonosito, int uszas, int bringa, int futas, int depo_ido, int jovairas) : ora(3600), perc(60) {
	this->azonosito = azonosito;
	this->uszas = uszas;
	this->bringa = bringa;
	this->futas = futas;
	this->depo_ido = depo_ido;
	this->jovairas = jovairas;

};

tri_race::~tri_race() {
	std::cout << "A torleseket elvegeztem." << std::endl;
};

tri_race& tri_race::setSum(int extraIdo) {

	sum = uszas + bringa + futas + depo_ido - extraIdo;
	h = sum / ora;
	p = (sum % ora) / perc;
	mp = (sum % ora) % perc;

	return *this;
};

tri_race& tri_race::kiir_rajt() {
	std::cout << "Rajt ido: 0:0:0 [h:m:s]" << std::endl;
	return *this;

};

tri_race& tri_race::kiir_cel() {
	std::cout << "License: " << azonosito << std::endl;
	std::cout << "U: " << uszas << std::endl;
	std::cout << "B: " << bringa << std::endl;
	std::cout << "F: " << futas << std::endl;
	std::cout << "D: " << depo_ido << std::endl;
	std::cout << "T-: " << jovairas << std::endl;
	std::cout << "Cel ido: " << h << ":" << p << ":" << mp << " [h:m:s]" << std::endl;
	std::cout << "\n";
	return *this;

};


int tri_race::getIj() const {
	return jovairas;

};