/*
 * main.cpp
 *
 *  Created on: May 10, 2018
 *      Author: christian
 */

#include <iostream>
#include <cmath>

class Point2d
{
public:
	double m_x;
	double m_y;

	Point2d(double x=0,double y=0): m_x(x), m_y(y) {}
	void print()
	{
		std::cout << "(" << m_x << ", " << m_y << ")";
	}
	double distanceTo(Point2d point2)
	{
		return std::sqrt(((m_x-point2.m_x)*(m_x-point2.m_x)) + ((m_y-point2.m_y)*(m_y-point2.m_y)));
	}
};


int main()
{
    Point2d first;
    Point2d second(3.0, 4.0);
    first.print();
    second.print();
    std::cout << "Distance between two points: " << first.distanceTo(second) << '\n';

    return 0;
}



