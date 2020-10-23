/*
*File Name: Exercise_B,curveCut.h
* Lab_5
* Completed by Ziad Chemali
* Submission: 23,10,2020
*/



#include"rectangle.h"
#include"circle.h"
#ifndef CurveCut_h
#define CurveCut_h

class CurveCut :public Rectangle, public Circle {
public:
	/*
	* REQUIRES: radius <= min of(length,width)
	* PROMISES: constructs CurveCut and invokes Shape, Circle, Rectangle constructors
	*/
	CurveCut(double x, double y, double side_a, double side_b, double radius, const char* name);
	
	/*
	* Overrides pure virtual function in Shape class
	* PROMISES: returns area of CurveCut
	*/
	double area() const override;
	
	/*
	* Overrides pure virtual function in Shape class
	* PROMISES: returns perimeter of CurveCut
	*/
	double perimeter() const override;
	
	/*
	* Overrides pure virtual function in Shape class
	* PROMISES: displays name, coordinates, length,width, and radius of CurveCut
	*/
	void display() override;

	/*
	* PROMISES: Copy constructor of CurveCut
	*/
	CurveCut(const CurveCut& r);

	/*
	* PRIMISES: Overlaods assignment operator
	*/
	CurveCut& operator=(CurveCut& rhs);
};
#endif
