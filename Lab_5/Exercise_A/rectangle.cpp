/*
*File Name: Exercise_A, rectangle.cpp
* Lab_5
* Completed by Ziad Chemali
* Submission: 23,10,2020
*/




#include "rectangle.h"
#include "shape.h"
#include<iomanip>
double Rectangle::area() const
{
	return side_b*get_side_a();
}

double Rectangle::perimeter() const
{
	return side_b*2+get_side_a()*2;
}

void Rectangle::display()
{
	Shape::display();
	cout << "side a: " <<setprecision(9)<<get_side_a()<< endl;
	cout << "side b: "<<setprecision(9) << get_side_b() << endl;
	cout << "Area: " << setprecision(9)<<area()<< endl;
	cout << "Perimeter: " << setprecision(9) << perimeter() << endl;
}

Rectangle::Rectangle(const Rectangle& r):Square(r)
{
	side_b = r.side_b;

}

Rectangle& Rectangle::operator=( Rectangle& rhs)
{
	
	if (this != &rhs) {
		Square::operator=(rhs);
		side_b = rhs.side_b;
		
	}
	return *this;
}

double Rectangle::get_side_b() const
{
	return side_b;
}

void Rectangle::set_side_b(double num)
{
	this->side_b = num;
}

Rectangle::Rectangle(double x, double y, double side_a, double side_b, const char* name) :Square(x, y, side_a, name) {
	this->side_b = side_b;
}

