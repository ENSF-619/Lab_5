/*
*File Name: Exercise_B,rectangle.h
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
	* PROMISES: Constructor for Rectangle invokes Shape and Square Constructors
	*/
	Rectangle(double x, double y, double side_a, double side_b, const char* name);

	/*
	* Overides function in Shpae class
	* PROMISES: returns area of  Rectangle
	*/
	double area() const override;
	
	/*
	* PROMISES: returns side b
	*/
	double get_side_b() const;
	
	/*
	* PROMISES: sets side b
	*/
	void set_side_b(double num);
	/*
	* Overrides function in Shape class
	* PROMISES: returns perimeter of Rectangle
	*/
	double perimeter() const override;
	/*
	* Overrides funstion in Shape class
	* PROMISES: displays name, coordinates,sides ,area ,and perimeter of Rectangle
	*/
	void display() override;
	/*
	* PROMISES: Copy constructor
	*/
	Rectangle(const Rectangle& r);
	 
	/*
	* PROMISES: overloads assignment operator
	*/
	Rectangle& operator=( Rectangle& rhs);
private:
	double side_b;
};
#endif // !rectangle_h
