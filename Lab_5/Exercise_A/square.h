/*
*File Name: Exercise_A, Square.h
* Lab_5
* Completed by Ziad Chemali
* Submission: 23,10,2020
*/

#include "shape.h"
#include<iostream>
using namespace std;
#ifndef square_h
#define square_h
class Square: public Shape{
	
public:
	/*
	* PROMISES: sets the side private variable and invokes the constructor of Shape
	*/
	Square(double x, double y, double side, const char* name);

	/*
	* PROMISES: returns the area of square object
	*/
	double area() const;

	/*
	* PROMISES: returns the perimeter of square object
	*/
	double perimeter() const;

	/*
	* PROMISES: displays the name,x,y coordiantes and squares side
	*/
	void display();

	/*
	* PROMISES: returns side
	*/
	double get_side_a() const;

	/*
	* PROMISES: sets side
	*/
	void set_side_a(double num);

	/*
	* PROMISES: copy constructor of Square
	*/
	Square(const Square& r);

	/*
	* PROMISES: overloads assignmnet operator
	*/
	Square& operator=(const Square& rhs);
	
private:
	double side;

};
#endif // !square_h

