#include "square.h"
#ifndef rectangle_h
#define rectangle_h
class Rectangle : public Square {
public:
	Rectangle(double x, double y, double side_a, double side_b, const char* name);
	double area() const;
	double get_side_b() const;
	void set_side_b(double num);
	double perimeter() const;
	void display();
private:
	double side_b;
};
#endif // !rectangle_h
