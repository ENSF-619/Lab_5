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
	cout << "side a: " << side << endl;
	cout << "Area: " <<setprecision(8) <<area()<< endl;
	cout << "Perimeter: " << perimeter() << endl;
}
