
/*
*File Name: Exercise_A, point.h
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
	* PROMISES: returns the static variable counter
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
	* PROMISES: returns x
	*/
	double getx() const;

	/*
	* PROMISES: returns y
	*/
	double gety() const;

	/*
	* PROMISES: sets x
	*/
	void setx(double x) ;

	/*
	* PROMISES: sets y
	*/
	void sety(double y);

	/*
	* PROMISES: returns id
	*/
	int get_id() const;

	/*
	* PROMISES: overloads assignment operator of Point
	*/
	Point& operator=(const Point& rhs);

	/*
	* PROMISES: copy constructor
	*/
	Point(const Point& r);

	/*
	* PROMISES: destructor that decrements counter hen Point is deleted
	*/
	~Point();

	/*
	* PROMISES: returns the distance between this Point and other Point object
	*/
	double distance(const Point& a);

private:
	double x;
	double y;
	int id;

};

#endif
