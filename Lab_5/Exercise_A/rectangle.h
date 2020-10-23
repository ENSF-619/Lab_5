/*
*File Name: Exercise_A, Rectangle.h
* Lab_5
* Completed by Ziad Chemali
* Submission: 23,10,2020
*/


#include "square.h"
#ifndef rectangle_h
#define rectangle_h
class Rectangle : public Square {
public:
	/*
	* PROMISES: Constructs the Rectangle object and invokes the Square constructor
	*/
	Rectangle(double x, double y, double side_a, double side_b, const char* name);

	/*
	* PROMISES: Calculates the area of Rectangle object
	*/
	double area() const;
	double get_side_b() const;
	void set_side_b(double num);
	double perimeter() const;
	void display();
	Rectangle(const Rectangle& r);
	Rectangle& operator=( Rectangle& rhs);
private:
	double side_b;
};
#endif // !rectangle_h
