#include "shape.h"
#include<iostream>
using namespace std;
#ifndef square_h
#define square_h
class Square: public Shape{
	
public:
	Square(double x, double y, double side, const char* name);
	
	double area() const;
	double perimeter() const;
	void display();
	double get_side_a() const;
	void set_side_a(double num);
	Square(const Square& r);
	Square& operator=(const Square& rhs);
	
private:
	double side;

};
#endif // !square_h

