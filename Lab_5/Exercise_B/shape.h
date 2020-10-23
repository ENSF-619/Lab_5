/*
*File Name: Exercise_B, shape.h
* Lab_5
* Completed by Ziad Chemali
* Submission: 23,10,2020
*/

#include "Point.h"
#include<iostream>
using namespace std;
#ifndef shape_h
#define shape_h
class Shape {
public:
	/*
	* PROMISES: Constructor of Shape that invokes Point constructor
	*/
	Shape(double x, double y,const char* name);
	/*
	* PROMISES: returns the distance between two shapes
	*/
	static double distance(Shape& the_shape, Shape& other);
	
	/*
	* PROMISES: returns distance between this and another Shape
	*/
	double distance(Shape& other);
	
	/*
	* PROMISES: deletes shapeNAme in heap
	*/
	virtual~Shape();
	/*
	* PROMISES: copy constructor of Shape
	*/
	Shape(const Shape& r);
	/*
	* PROMISES: overloading assignment oerator
	*/
	Shape& operator=(const Shape& rhs);

	/*
	* PROMISES: return counter of Point object
	*/
	int get_counter() const;

	/*
	* PROMISES: return Id of Point
	*/
	int get_id() const;

	/*
	* Abstact function
	*/
	virtual void display() =0;
	/*
	* PROMISES: return name
	*/
	const char* getName() const;

	/*
	* Abstact function
	*/
	virtual double area() const = 0;

	/*
	* Abstact function
	*/
	virtual double perimeter() const = 0;
protected:
	/*
	* PROMISES: return origin
	*/
	const Point& getOrigin();
	/*
	* PROMISES: moves the x,y coordinates by dx,dy
	*/
	void move(double dx, double dy);
	
private:
	Point origin;
	char* shapeName;
};

#endif // !shape.h

