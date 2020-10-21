

#ifndef point_h
#define point_h

class Point {
	
public:
	static int counter;
	static double distance(const Point& a, const Point& b);
	static int get_counter();
	void display() const;
	Point(double x, double y);
	double getx() const;
	double gety() const;
	void setx(double x) ;
	void sety(double y);
	
	~Point();
	double distance(const Point& a);

private:
	double x;
	double y;
	int id;

};

#endif
