/*
*File Name: Exercise_A, Shape.h
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
	* PROMISES: Constructor that invokes the Point constructor and sets shapeName dynamically
	*/
	Shape(double x, double y,const char* name);

	/*
	* PROMISES: returns the distance between two shapes
	*/
	static double distance(Shape& the_shape, Shape& other);


	/*
	* PROMISES: returns the distance between this and another shape object
	*/
	double distance(Shape& other);

	/*
	* PROMISES: destructor that deletes the shapeName
	*/
	virtual~Shape();

	/*
	* PROMISES: copy constructor
	*/
	Shape(const Shape& r);

	/*
	* PROMISES: overloading  assignmnet operator
	*/
	Shape& operator=(const Shape& rhs);

	/*
	* PROMISES: returns counter of Point object
	*/
	int get_counter() const;

	/*
	* PROMISES: returns id of Point object
	*/
	int get_id() const;

	/*
	* PROMISES: displays the name and coordinates od Shape
	*/
	void display() const;

protected:
	/*
	* PROMISES: returns Point object 
	*/
	const Point& getOrigin();

	/*
	* PROMISES: returns name
	*/
	const char* getName() const;

	/*
	* PROMISES: moves the x,y coordinates by dx and dy
	*/
	void move(double dx, double dy);
private:
	Point origin;
	char* shapeName;
};

#endif // !shape.h

