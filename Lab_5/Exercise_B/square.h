/*
*File Name: Exercise_B, square.h
* Lab_5
* Completed by Ziad Chemali
* Submission: 23,10,2020
*/

#include "shape.h"
#include<iostream>
using namespace std;
#ifndef square_h
#define square_h
class Square: public virtual Shape{
	
public:
	/*
	* PROMISES: constructor of Square that invokes Shape constructor
	*/
	Square(double x, double y, double side, const char* name);
	/*
	* Overrides abstract method in Shape
	* PROMISES: return area of square
	*/
	double area() const override;
	/*
	* Overrides abstract method in Shape
	* PROMISES: return perimeter of square
	*/
	double perimeter() const override;
	/*
	* Overrides abstract method in Shape
	* PROMISES: displays name,coordinates,side,area,and perimeter of Square
	*/
	void display() override;

	/*
	* PROMISES: return side of square
	*/
	double get_side_a() const;
	/*
	* PROMISES: sets side of square
	*/
	void set_side_a(double num);
	/*
	* PROMISES: copy constructor of Square
	*/
	Square(const Square& r);
	/*
	* PROMISES: Overloads assignment operator of Square
	*/
	Square& operator=(const Square& rhs);
	
private:
	double side;

};
#endif // !square_h

