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
	cout << "X-Coordinate: " << setprecision(2) << this->x<<endl;
	cout << "Y-Coordinate: " << setprecision(2) << this->y << endl;

}

Point::Point(double x=0, double y=0)
{
	this->x = x;
	this->y = y;
	Point::counter++;
	id = 1001 + Point::counter;
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


int Point::counter = 0;