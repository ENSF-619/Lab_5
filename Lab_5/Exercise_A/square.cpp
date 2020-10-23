/*
*File Name: Exercise_A, Square.cpp
* Lab_5
* Completed by Ziad Chemali
* Submission: 23,10,2020
*/


#include "square.h"
#include <iomanip>
Square::Square(double x, double y, double side, const char* name):Shape(x, y, name)
{
	this->side = side;

}

double Square::get_side_a() const
{
	return side;
}

void Square::set_side_a(double num)
{
	side = num;
}

Square::Square(const Square& r):Shape(r)
{
	
	this->set_side_a(r.get_side_a());
}

Square& Square::operator=(const Square& rhs)
{
	if (this != &rhs) {
		Shape::operator=(rhs);
		this->side=rhs.get_side_a();
    
	}
	return *this;
}

double Square::area() const
{
	return pow(side,2);
}

double Square::perimeter() const
{
	return side * 4;
}

void Square::display()
{
	Shape::display();
	cout << "side a: " << setprecision(8) << side << endl;
	cout << "Area: " <<setprecision(8) <<area()<< endl;
	cout << "Perimeter: " << setprecision(8) << perimeter() << endl;
}
