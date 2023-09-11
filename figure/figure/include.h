#pragma once
#include <iostream>
#include <math.h>
class figure {
public:
	virtual double GetSquare() { return(0); };
	virtual double GetPerimeter() { return(0); };
	bool operator==(figure& F);
};
class triangle :public figure {
	double A, B, C;
public:
	triangle();
	triangle(double one, double two, double three);
	triangle(triangle& F);
	bool check() const;
	double GetSquare();
	double GetPerimeter();
};
class rectangle :public figure {
	double A, B;
public:
	rectangle();
	rectangle(double one, double two);
	rectangle(rectangle& F);
	bool check() const;
	double GetSquare();
	double GetPerimeter();
};
class circle :public figure {
	double R;
	double Pi = acos(-1);
public:
	circle();
	circle(double one);
	circle(circle& F);
	bool check() const;
	double GetSquare();
	double GetPerimeter();
};