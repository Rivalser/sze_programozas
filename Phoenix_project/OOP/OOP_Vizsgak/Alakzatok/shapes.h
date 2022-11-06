#pragma once
#include <iostream>

class Point2D {
	const int x;
	const int y;
public:
	Point2D(int set_x, int set_y) : x(set_x), y(set_y) {
		
	}

	int distance(Point2D& masik) {
		return sqrt(pow(x - masik.x, 2) + pow(y - masik.y, 2));
	}

};

class Shape {

public:

	std::string típus;
	int meret;

	Shape(std::string set_típus) : típus(set_típus) {}

	std::string printType() {
		return típus;
	}

	virtual double area() = 0;

	bool isLargerThan(Shape* hasonlat) {

//		return area() > hasonlat->area() ? area() : hasonlat->area(); // magát az értéket adja vissza
		return area() > hasonlat->area(); //azt adja vissza hogy area() nagyobb, de az értéket nem
	}



};

class Rectangle : public Shape {
	Point2D bf;
	Point2D ba;
	Point2D ja;
	Point2D jf;
public:
	Rectangle(Point2D set_bf, Point2D set_ba, Point2D set_ja, Point2D set_jf)
		: Shape("Teglalap"),bf(set_bf), ba(set_ba), ja(set_ja), jf(set_jf)
	{

	}

	double area() override {

		return bf.distance(ba) * ba.distance(ja);

	}


	Rectangle(Rectangle& masolat) = delete;
	Rectangle& operator =(Rectangle& asd) = delete;
};

class Circle : public Shape {
	Point2D kozeppont;
	int sugar;

public:
	Circle(Point2D set_kozeppont, int set_sugar)
		: Shape("Kor"),kozeppont(set_kozeppont), sugar(set_sugar) {

	}

	double area() override {

		return sugar * sugar * 3.14;

	}

	Circle(Circle& masolat) = delete;
	Circle& operator =(Circle& asd) = delete;


};

int getSarkokSzama(Shape* alak) {
	Rectangle* rp = dynamic_cast<Rectangle*>(alak);
	if (rp != nullptr) {
		return 4;
	}
	else
	{
		return 0;
	}
	
}