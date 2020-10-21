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
protected:
	const Point& getOrigin();
	const char* getName() const;
	void display() const;
	
	void move(double dx, double dy);
private:
	Point origin;
	char* shapeName;
};

#endif // !shape.h

