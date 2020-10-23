#include "Point.h"
#include<iostream>
using namespace std;
#ifndef shape_h
#define shape_h
class Shape {
public:
	Shape(double x, double y,const char* name);
	static double distance(Shape& the_shape, Shape& other);
	double distance(Shape& other);
	virtual~Shape();
	Shape(const Shape& r);
	Shape& operator=(const Shape& rhs);
	int get_counter() const;
	int get_id() const;
	virtual void display() =0;
	const char* getName() const;
	virtual double area() const = 0;
	virtual double perimeter() const = 0;
protected:
	const Point& getOrigin();
	void move(double dx, double dy);
	
private:
	Point origin;
	char* shapeName;
};

#endif // !shape.h

