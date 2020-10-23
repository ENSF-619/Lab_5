/*
*File Name: Exercise_B,circle.h
* Lab_5
* Completed by Ziad Chemali
* Submission: 23,10,2020
*/


#include"shape.h"
# ifndef PI
#define PI 3.14159265358979323846
#endif
#ifndef circle_h
#define circle_h

class Circle :public virtual Shape {
public:
	/*
	* PROMISES: constructor for Circle that invokes Shape constructor
	*/
	Circle(double x, double y, double r,  const char* name);
	
	/*
	* Overriding pure virtual area function in Shape class,
	*  PROMISES: returns the area of circle
	*/
	double area() const override;

	/*
	* PROMISES: return radius
	*/
	double get_radius() const;

	/*
	* PROMISES: sets radius
	*/
	void set_radius(double num);

	/*
	* Overriding pure virtual area function in Shape class,
	*  PROMISES: returns the perimeter of circle
	*/
	double perimeter() const override;
	/*
	* Overriding pure virtual area function in Shape class,
	*  PROMISES: displays name, coordinates,radius, area, and perimeter of Circle
	*/
	void display() override;

	/*
	* PROMISES: copy constructor of Circle
	*/
	Circle (const Circle& r);

	/*
	* PROMISES: Overloads assignment operator of Circle
	*/
	Circle& operator=(Circle& rhs);
private:
	double radius;
};
#endif // !circle_h
