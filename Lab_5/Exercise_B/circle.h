#include"shape.h"
# ifndef PI
#define PI 3.14159265358979323846
#endif
#ifndef circle_h
#define circle_h

class Circle :public virtual Shape {
public:
	Circle(double x, double y, double r,  const char* name);
	double area() const override;
	double get_radius() const;
	void set_radius(double num);
	double perimeter() const override;
	void display() override;
	Circle (const Circle& r);
	Circle& operator=(Circle& rhs);
private:
	double radius;
};
#endif // !circle_h
