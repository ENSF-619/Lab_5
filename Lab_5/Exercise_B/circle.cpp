#include "circle.h"
#include <math.h>
#include <iomanip>

Circle::Circle(double x, double y, double r, const char* name):Shape(x,y,name)
{
	this->radius = r;
}

double Circle::area() const
{
	return PI * pow(this->radius, 2);
}

double Circle::get_radius() const
{
	return radius;
}

void Circle::set_radius(double num)
{
	radius = num;
}

double Circle::perimeter() const
{
	return 2*PI*radius;
}

void Circle::display()
{
	cout << "\nShape name: " << getName() << endl;
	getOrigin().display();
	cout << "Radius: " << setprecision(4) << radius << endl;
	cout << "Area: " << setprecision(4) << area() << endl;
	cout << "Perimeter: " << setprecision(4) << perimeter() << endl;
}

Circle::Circle(const Circle& r):Shape(r)
{
	radius = r.radius;
}

Circle& Circle::operator=(Circle& rhs)
{
	if (this != &rhs) {
		Shape::operator=(rhs);
		radius = rhs.radius;
	}
	return *this;
}
