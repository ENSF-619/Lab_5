#include "shape.h"
#include "Point.h"
#include <string>
#include <cassert>

Shape::Shape(double x, double y, const char* name) :origin(x, y)
{
	const char* temp = name;
	int n = 0;
	while (*temp) {
		n++;
		temp++;
	}
	if (n > 0) {
		cout << n << endl;
	this->shapeName = new char[n+1];//to include \0

	for (int i = 0;i < n;i++) {
		shapeName[i] = name[i];
	}
	shapeName[n] = '\0';
}
	else {
		cout << "Name parameter is empty" << endl;
	}
}

double Shape::distance(Shape& the_shape, Shape& other)
{
	return Point::distance(the_shape.origin,other.origin);
}

Shape::~Shape()
{
	delete[] shapeName;
}

const Point& Shape::getOrigin()
{
	return  origin;// TODO: insert return statement here
}

const char* Shape::getName() const
{
	return shapeName;
}



void Shape::display() const
{
	if (shapeName != nullptr) {
	cout << "Shape name: " << shapeName << endl;
	origin.display();
}
}

double Shape::distance(Shape& other)
{
	return origin.distance(other.origin);
}

void Shape::move(double dx, double dy)
{
	origin.setx(origin.getx() + dx);
	origin.sety(origin.gety() + dy);
}