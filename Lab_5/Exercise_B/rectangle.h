#include "square.h"
#ifndef rectangle_h
#define rectangle_h
class Rectangle : public Square {
public:
	Rectangle(double x, double y, double side_a, double side_b, const char* name);
	double area() const override;
	double get_side_b() const;
	void set_side_b(double num);
	double perimeter() const override;
	void display() override;
	Rectangle(const Rectangle& r);
	Rectangle& operator=( Rectangle& rhs);
private:
	double side_b;
};
#endif // !rectangle_h
