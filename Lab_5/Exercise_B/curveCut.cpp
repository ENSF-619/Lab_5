/*
*File Name: Exercise_B,curveCut.cpp
* Lab_5
* Completed by Ziad Chemali
* Submission: 23,10,2020
*/

#include "curveCut.h"
#include<iostream>
#include <iomanip>
using namespace std;

CurveCut::CurveCut(double x, double y, double side_a, double side_b, double radius, const char* name):Shape(x, y, name),Rectangle(x,y,side_a,side_b,name),Circle(x,y,radius,name)
{
	if (radius <= min(side_a, side_b)) {

	}
	else {
		cout <<"\nError, radius didnt meet criteria \n Terminating program..." << endl;
		exit(1);
	}
}

double CurveCut::area() const
{
	return Rectangle::area() - Circle::area() / 4;
}

double CurveCut::perimeter() const
{
	return Rectangle::perimeter() - 2 * get_radius() + Circle::perimeter() / 4;
}

void CurveCut::display()
{
	cout << "\nShape name: " << getName() << endl;
	getOrigin().display();
	cout << "side a: " << setprecision(4) << get_side_a() << endl;
	cout << "side b: " << setprecision(4) << get_side_b() << endl;
	cout << "Radius of cut: " << setprecision(4) << get_radius()<< endl;
	
}

CurveCut::CurveCut(const CurveCut& r):Shape(r),Rectangle(r),Circle(r)
{
}

CurveCut& CurveCut::operator=(CurveCut& rhs)
{
	if (this != &rhs) {
		Shape::operator=(rhs);
		Rectangle::operator=(rhs);
		Circle::operator=(rhs);
		
		
	}
	return *this;
}
