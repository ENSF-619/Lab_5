/*
*File Name: Exercise_B, point.h
* Lab_5
* Completed by Ziad Chemali
* Submission: 23,10,2020
*/



#ifndef point_h
#define point_h

class Point {
	
public:
	/*
	*PROMISES:  static variable to keep track of how many Point objects are created
	*/
	static int counter;

	/*
	* PROMISES: This function returns the distance between two point object
	*/
	static double distance(const Point& a, const Point& b);
	
	/*
	* PROMISES: This function returns counter
	*/
	static int get_counter();

	/*
	* PROMISES: displays the x,y coordinates of this Object
	*/
	void display() const;

	/*
	* PROMISES: constructor that sets the x,y private variables
	*/
	Point(double x, double y);

	/*
	* PROMISES: return x
	*/
	double getx() const;

	/*
	* PROMISES: return y
	*/
	double gety() const;

	/*
	* PROMISES: set x
	*/
	void setx(double x) ;

	/*
	* PROMISES: set y
	*/
	void sety(double y);

	/*
	* PROMISES: return id
	*/
	int get_id() const;

	/*
	* PROMISES: overloading assignment operator
	*/
	Point& operator=(const Point& rhs);

	/*
	* PROMISES: copy constructor
	*/
	Point(const Point& r);

	/*
	* PROMISES: destructor
	*/
	~Point();

	/*
	* PROMISES: returns the distance between this and another Point object
	*/
	double distance(const Point& a);

private:
	double x;
	double y;
	int id;

};

#endif
