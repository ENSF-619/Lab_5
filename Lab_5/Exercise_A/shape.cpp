/*
*File Name: Exercise_A, shape.cpp
* Lab_5
* Completed by Ziad Chemali
* Submission: 23,10,2020
*/



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

Shape::Shape(const Shape& r):origin(r.origin)
{
	
	delete[] shapeName;
	const char* temp = r.getName();
	int n = 0;
	while (*temp) {
		n++;
		temp++;
	}
	if (n > 0) {
		
		this->shapeName = new char[n + 1];//to include \0

		for (int i = 0;i < n;i++) {
			shapeName[i] = r.getName()[i];
		}
		shapeName[n] = '\0';

	}

}

Shape& Shape::operator=(const Shape& rhs)
{
	if (this!= &rhs) {
		origin = rhs.origin;
		delete[] shapeName;
		const char* temp = rhs.getName();
		int n = 0;
		while (*temp) {
			n++;
			temp++;
		}
		if (n > 0) {
			
			this->shapeName = new char[n + 1];//to include \0

			for (int i = 0;i < n;i++) {
				shapeName[i] = rhs.getName()[i];
			}
			shapeName[n] = '\0';

		}

	}
	return *this;
}

int Shape::get_counter() const
{
	return this->origin.get_counter();
}

int Shape::get_id() const
{
	return origin.get_id();
}

const Point& Shape::getOrigin()
{
	return  origin;
}

const char* Shape::getName() const
{
	return shapeName;
}



void Shape::display() const
{
	
	cout << "Shape name: "<< shapeName << endl;
	origin.display();

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