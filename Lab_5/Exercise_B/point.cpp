#include"Point.h"
#include<math.h>
#include <iostream>
#include <iomanip>
using namespace std;

Point::~Point()
{
	Point::counter--;
}

double Point::distance(const Point& a)
{
	return sqrt(pow((x - a.x), 2) + pow((y - a.y), 2));
}

double Point::distance(const Point& a, const Point& b)
{
	return sqrt(pow((b.x-a.x),2)+ pow((b.y - a.y), 2));
}

int Point::get_counter()
{
	return Point::counter;
}

void Point::display() const
{
	cout << "X-Coordinate: " << setprecision(4) << this->x<<endl;
	cout << "Y-Coordinate: " << setprecision(4) << this->y << endl;

}

Point::Point(double x=0, double y=0)
{
	this->x = x;
	this->y = y;
	counter++;
	id = 1001 +counter;
}

double Point::getx() const
{
	return x;
}

double Point::gety() const
{
	return y;
}

void Point::setx(double x)
{
	this->x = x;
}

void Point::sety(double y)
{
	this->y = y;

}

int Point::get_id() const
{
	return id;
}

Point& Point::operator=(const Point& rhs)
{
	if (this != &rhs) {
		this->x = rhs.getx();
		this->y = rhs.gety();
		this->id = rhs.id;
		
	}
	return *this;
}

Point::Point(const Point& r)
{
	this->x = r.getx();
	this->y = r.gety();
	this->id = r.id;
}


int Point::counter = 0;