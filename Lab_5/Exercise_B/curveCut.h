#include"rectangle.h"
#include"circle.h"
#ifndef CurveCut_h
#define CurveCut_h

class CurveCut :public Rectangle, public Circle {
public:
	CurveCut(double x, double y, double side_a, double side_b, double radius, const char* name);
	double area() const override;
	double perimeter() const override;
	void display() override;
	CurveCut(const CurveCut& r);
	CurveCut& operator=(CurveCut& rhs);
};
#endif
